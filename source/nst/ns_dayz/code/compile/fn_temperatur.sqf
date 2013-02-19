/*
Author: TeeTime

Enhanced for DayZ: Namalsk by Sumrak.

Does: Manages the body temperatur of a Player

Possible Problems:
	=>  Balancing

Missing: 
	Save Functions
	
	Should Effects Sum Up?
	
	Math Functions for Water
	
	Player Update GUI Colours need to be checked
	
	Shivering Function need improments
*/


	private ["_looptime","_sun_factor","_warm_clothes","_ghillie_clothes","_building_factor","_vehicle_factor","_fire_factor","_water_factor","_snow_factor","_snowfall_factor","_rain_factor","_night_factor","_wind_factor","_camo_clothes","_height_mod","_difference","_hasfireffect","_isinbuilding","_isinvehicle","_snowfall","_raining","_sunrise"];

	_looptime 			= _this;
	
	//Factors are equal to win/loss of factor*basic value
	//All Values can be seen as x of 100: 100 / x = minutes from min temperetaure to max temperature (without other effects)
	_vehicle_factor		=	4;
	_moving_factor 		=	7;
	_fire_factor		=	16; //Should be always:  _rain_factor + _night_factor + _wind_factor OR higher !
	_building_factor 	=	4;  // DayZ: Namalsk, was 7
	_sun_factor			=	4;  //max sunfactor linear over the day. highest value in the middle of the day
	_warm_clothes		=	35; // DayZ: Namalsk
	_ghillie_clothes	=	8;  // DayZ: Namalsk
	_ghillie_wclothes	=	16; // DayZ: Namalsk
	
	_water_factor		=	-40;
	_snow_factor		=	-16; // DayZ: Namalsk
	_snowfall_factor	=	-14; // DayZ: Namalsk
	_rain_factor		=	-8;
	_night_factor		=	-8;  // DayZ: Namalsk, was -1.5
	_wind_factor		=	-1;
	_camo_clothes		=	-2;  // DayZ: Namalsk
	
	_difference 	= 0;
	_hasfireffect	= false;
	_isinbuilding	= false;
	_isinvehicle	= false;
	
	if(isNil ("snow")) then {snow = 0};
	_snowfall		= if(snow > 0) then {true} else {false};
	_raining 		= if(rain > 0) then {true} else {false};
	_sunrise		= call world_sunRise;

	//POSITIVE EFFECTS
	
	//vehicle
	if((vehicle player) != player) then {
		_difference 	= _difference + _vehicle_factor;
		_isinvehicle 	= true;
	} else {
		//speed factor  0 - 6 -  18 - 23
		private["_vel","_speed"];
		_vel = 		velocity player;
		_speed = 	round((_vel distance [0,0,0]) * 3.5);
		_difference = (_moving_factor * (_speed / 20)) min 7;
	};
	
	//fire
	private ["_fireplaces"];
	_fireplaces = nearestObjects [player, ["Land_Fire","Land_Campfire"], 8];
	if(({inflamed _x} count _fireplaces) > 0 && !_isinvehicle ) then {
		//Math: factor * 1 / (0.5*(distance max 1)^2) 		0.5 = 12.5% of the factor effect in a distance o 4 meters
		_difference 	= _difference + (_fire_factor /(0.5*((player distance (_fireplaces select 0)) max 1)^2));
		_hasfireffect 	= true;
	};
	
	//building
	if([player] call fnc_isInsideBuilding) then {
		_difference = _difference + _building_factor;
		_isinbuilding	= true;
		dayz_inside 	= true;
	} else {
		dayz_inside 	= false;
	};
	
	
	//sun
	if(daytime > _sunrise && daytime < (24 - _sunrise) && !_raining && overcast <= 0.6 && !_isinbuilding) then {
		
		/*Mathematic Basic
		
		t = temperature effect
		
		a = calcfactor
		f = sunfactor
		s = sunrise
		d = daytime
		
		I:	a = f / (12 - s)²
		II:	t = -a * (d - 12)² + f
		
		I + II =>
		
		t = -(f / (12 - s)²) * (d - 12)² + f
		
		Parabel with highest Point( greatest Effect == _sun_factor) always at 12.00
		Zero Points are always at sunrise and sunset -> Only Positiv Values Possible
		*/
		
		_difference = _difference + (-((_sun_factor / (12 - _sunrise)^2)) * ((daytime - 12)^2) + _sun_factor);
	};
	
	//DayZ: Namalsk warm clothing
	if (((typeOf player) == "CamoWinter_DZN") || ((typeOf player) == "CamoWinterW_DZN")) then {
		_difference 	= _difference + _warm_clothes;
	};
	
	//DayZ: Namalsk ghillie suit
	if (((typeOf player) == "Sniper1_DZ")) then {
		_difference 	= _difference + _ghillie_clothes;
	};
	if ((typeOf player) == "Sniper1W_DZN") then {
		_difference 	= _difference + _ghillie_wclothes;
	};
	
	//NEGATIVE  EFFECTS

	//DayZ: Namalsk camo clothing
	if ((typeOf player) == "Camo1_DZ") then {
		_difference 	= _difference + _camo_clothes;
	};

	//water
	if((surfaceIsWater getPosATL player) && dayz_isSwimming) then {
		_difference = _difference + _water_factor;
	};
	
	//rain
	if(_raining && !_isinvehicle && !_isinbuilding) then {
		_difference = _difference + (rain * _rain_factor);
	};
	
	//DayZ: Namalsk snowfall
	if(_snowfall && !_isinvehicle && !_isinbuilding) then {
		_difference = _difference + (snow * _snowfall_factor);
	};
	
	
	//night
	private ["_daytime"];
	if((daytime < _sunrise || daytime > (24 - _sunrise)) && !_isinvehicle) then {
		_daytime 	= if(daytime < 12) then {daytime + 24} else {daytime};
		if (_isinbuilding) then {
			_difference = _difference + ((((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor))/2;
		} else {
			_difference = _difference + (((_night_factor * -1) / (_sunrise^2)) * ((_daytime - 24)^2) + _night_factor);
		};
		
	};
	
	//wind
	if(((wind select 0) > 4 || (wind select 1) > 4) && !_isinvehicle && !_isinbuilding ) then {
		_difference = _difference + _wind_factor;
	};
	
	//DayZ: Namalsk height
	if(!_isinvehicle) then {
		_height_mod = ((getPosASL player select 2) / 100) * 5;
		_difference = _difference - _height_mod;
	};
	
	//DayZ: Namalsk surface
	if(!_isinvehicle && !_isinbuilding && ((surfaceType getPos player) == "#nam_snow")) then {
		_difference = _difference + _snow_factor;
	};
	
	//Calculate Change Value			Basic Factor			Looptime Correction			Adjust Value to current used temperatur scala
	_difference = _difference * SleepTemperatur / (60 / _looptime)		* ((dayz_temperaturmax - dayz_temperaturmin) / 100);
	
	//Change Temperatur															 Should be moved in a own Function to allow adding of Items which increase the Temp like "hot tea"
	dayz_temperatur = (((dayz_temperatur + _difference) max dayz_temperaturmin) min dayz_temperaturmax);
	
	//Add Shivering
	//						Percent when the Shivering will start 
	if(dayz_temperatur <= (0.600 * (dayz_temperaturmax - dayz_temperaturmin) + dayz_temperaturmin)) then { // DayZ: Namalsk, 0.600 was 0.125
		//CamShake as linear Function Maximum reached when Temp is at temp minimum. First Entry = Max Value
		_temp = 0.6 * (dayz_temperaturmin / dayz_temperatur );
		addCamShake [_temp,(_looptime + 1),30];	//[0.5,looptime,6] -> Maximum is 25% of the Pain Effect	
	} else {
		addCamShake [0,0,0];			//Not needed at the Moment, but will be necesarry for possible Items
	};