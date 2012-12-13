private["_serial","_positions","_min","_lootGroup","_iArray","_iItem","_iClass","_iPos","_item","_mags","_qty","_max","_tQty","_canType","_obj","_type","_nearBy","_clean","_unitTypes","_max","_isNoone","_config","_num","_originalPos","_zombieChance","_rnd","_fastRun"];
_obj = 			_this select 0;
_type = 		typeOf _obj;
_config = 		configFile >> dayzNam_buildingLoot >> _type;
_canLoot = 		isClass (_config);
_fastRun = 		_this select 1;
_originalPos = 	getPosATL _obj;
if (_canLoot) then {
	//Get zombie class
	_unitTypes = 	getArray (_config >> "zombieClass");
	_min = 			getNumber (_config >> "maxRoaming");
	_max = 			getNumber (_config >> "minRoaming");
	_customZPos =	getArray (_config >> "hangPos");
	
	if (count _customZPos != 0) then {
		_originalPos = _obj modelToWorld (_customZPos select 0);
	};
	
	//Walking Zombies
	_num = round(random _max) max _min; // + round(_max / 3);
	//diag_log ("Class: " + _type + " / Zombies: " + str(_unitTypes) + " / Walking: " + str(_num));
	for "_i" from 1 to _num do
	{
		[_originalPos,true,_unitTypes] call zombie_generate;
		if (!_fastRun) then {
			sleep 0.1;
		};
	};
	
	//Add Internal Zombies
	_clean = {alive _x} count ((getPosATL _obj) nearEntities ["zZombie_Base",(sizeOf _type)]) == 0;
	if (_clean) then {
		_positions =	getArray (_config >> "lootPos");
		_zombieChance =	getNumber (_config >> "zombieChance");
		//diag_log format["Building: %1 / Positions: %2 / Chance: %3",_type,_positions,_zombieChance];
		{
			_rnd = random 1;
			if (_rnd < _zombieChance) then {
				_iPos = _obj modelToWorld _x;
				_nearBy = {alive _x} count nearestObjects [_iPos, ["zZombie_Base"],1] > 0;
				_nearByPlayer = ({isPlayer _x} count (_iPos nearEntities ["CAManBase",30])) > 0;
				diag_log ("BUILDING: " + _type + " / " + str(_nearBy) + " / " + str(_nearByPlayer));
				if (!_nearByPlayer and !_nearBy) then {
					[_iPos,false,_unitTypes] call zombie_generate;
				};
			};
			if (!_fastRun) then {
				sleep 0.1;
			};
		} forEach _positions;
	};
	
	if (_type == "Land_bspawn" && dzn_ns_bloodsucker) then {
		"ns_bloodsucker" createUnit [[(_originalPos select 0) - (random 60), (_originalPos select 1) + (random 60), 0], group sefik, "",1,"CORPORAL"];
		diag_log ("DEBUG: " + _type + " / ns_bloodsucker spawn");
	};
	
	dayz_buildingMonitor set [count dayz_buildingMonitor,_obj];
};