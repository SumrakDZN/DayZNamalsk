private ["_isAir", "_inVehicle", "_dateNow", "_age", "_force", "_nearbyBuildings", "_position", "_fpsbias", "_maxControlledZombies", "_maxManModels", "_maxWeaponHolders", "_controlledZombies", "_currentManModels", "_currentWeaponHolders", "_type", "_locationstypes", "_nearestCity", "_townname", "_nearbytype", "_markerstr", "_markerstr1", "_markerstr2", "_markerstr3", "_nearby", "_zombieSpawnCtr", "_suitableBld", "_spwndoneBld", "_negstampBld", "_recyAgt", "_findAgt", "_maxtoCreate", "_config", "_canLoot", "_dis", "_checkLoot", "_looted", "_qty", "_fairSize", "_zombied", "_tmp", "_radius", "_point", "_islocal"];

// compute building footprint just to check if it could hide a Zombie
_fairSize = {
	private ["_boundingBox","_cornerLow","_cornerHi", "_burried"];

	_boundingBox = boundingBox _this;

	_cornerLow = _this ModeltoWorld (_boundingBox select 0);
	_cornerHi = _this ModeltoWorld (_boundingBox select 1);
	_burried = _cornerLow select 2;
	_cornerLow set [2, _cornerHi select 2];
	//diag_log(format["Model:%1  Height:%2  Cross width:%3  _burried:%4", typeOf _this, _cornerHi select 2, _cornerLow distance _cornerHi, _burried]);
	((_burried < 0.1) AND {(((_cornerHi select 2) > 2.6) AND {((_cornerLow distance _cornerHi) > 7)})}) // container size as reference
};

// find agents to recycle
_findAgt = {
	private ["_plr","_types","_y", "_point", "_ahead"];

	_plr = player;
	_ahead = 0 max (dayz_canDelete - dayz_spawnArea);
	_point = _plr modelToWorld [0, _ahead, 0]; // we will recycle more zombies located behind the player
	recyclableAgt=[];

	{
		_y = _x getVariable ["agentObject",objNull];
		if (!isNil "_y") then {
			if (((alive _y) AND {(local _y)}) AND {((damage _y == 0) AND {(_y distance _point > dayz_spawnArea+_ahead)})}) then {
				if (0 == {(_x != _plr) AND (_x distance _y < dayz_cantseeDist)} count playableUnits) then {
					recyclableAgt set [count recyclableAgt, _y];
				};
			};
		};
	} forEach agents;

	recyclableAgt
};

_isAir = vehicle player iskindof "Air";
_inVehicle = ((vehicle player != player) AND ((speed player > 10) OR _isAir));
_dateNow = (DateToNumber date);
_age = -1;
_force = false;
_nearbyBuildings = [];
_position = getPosATL player;
_sp4wnAroundObjects = ["building", "SpawnableWreck"];

_fpsbias = (60-(60-(diag_fpsmin min 60))/1.5)/60;
_maxControlledZombies = round(dayz_maxLocalZombies * _fpsbias);
_maxManModels = round(dayz_maxMaxModels * _fpsbias);
_maxWeaponHolders = round(dayz_maxMaxWeaponHolders * _fpsbias);

if (_inVehicle) then {
	_maxManModels = 10; // Z + players in vehicle
};
if (_isAir) then {
	_maxManModels = 0; // won't even try to move recycled Z
};
_controlledZombies = {local (_x getVariable ["agentObject",objNull])} count agents;

_currentManModels = count (_position nearEntities ["CAManBase",dayz_spawnArea]);
_currentWeaponHolders = count (_position nearObjects ["ReammoBox",dayz_spawnArea]); // ReammoBox = parent of all kinds of item holders

diag_log (format["%1 Loc.Agents: %2/%3. Models: %5/%6 W.holders: %9/%10 (radius:%7m %8fps).","SpawnCheck",
	_controlledZombies, _maxControlledZombies, time - dayz_spawnWait, _currentManModels, _maxManModels,
	dayz_spawnArea, round diag_fpsmin, _currentWeaponHolders, _maxWeaponHolders]);
// little hack so that only 1/5 of the max local spawnable zombies will be spawned in this round
// make the spawn smoother along player's journey. Same for loot
_controlledZombies = _controlledZombies max floor(_maxControlledZombies*.8);
_currentWeaponHolders = _currentWeaponHolders max floor(_maxWeaponHolders*.8);

// we start by the closest buildings. buildings too close from player are ditched.
_nearby = (nearestObjects [_position, _sp4wnAroundObjects,dayz_spawnArea]) - (nearestObjects [_position, _sp4wnAroundObjects, dayz_safeDistPlr]);

_nearbyCount = count _nearby;
if ((_nearbyCount < 1) or (vehicle player != player)) exitwith {"Nothing close"};

_zombieSpawnCtr = 0;
_suitableBld = 0;
_spwndoneBld = 0;
_negstampBld = 0;
_recyAgt = call _findAgt;
_maxtoCreate = _maxControlledZombies - _controlledZombies;
{
	_type = typeOf _x;
	_config = configFile >> dayzNam_buildingLoot >> _type;
	_canLoot = isClass (_config);
	_dis = _x distance player;
	_checkLoot = ((count (getArray (_config >> "lootPos"))) > 0);
	_islocal = _x getVariable ["", false]; // object created locally via TownGenerator. See stream_locationFill.sqf

	////_x setVariable ["cleared",false,true]; // not used anymore

	//Loot
	if (_currentWeaponHolders < _maxWeaponHolders) then {
		if ((_dis < 120) and (_dis > dayz_safeDistPlr) and _canLoot and !_inVehicle and _checkLoot) then {
			_looted = (_x getVariable ["looted",-0.1]);
			_dateNow = (DateToNumber date);
			_age = (_dateNow - _looted) * 525948;
			//diag_log ("SPAWN LOOT: " + _type + " Building is " + str(_age) + " old" );
			if (_age < -0.1) then {
					_x setVariable ["looted",(DateToNumber date),!_islocal];
			} else {
				if (_age > dayz_tagDelayWeaponHolders) then {
					_x setVariable ["looted",_dateNow,!_islocal];
					_qty = _x call building_spawnLoot;
					_currentWeaponHolders = _currentWeaponHolders + _qty;
				};
			};
		};
	};

	//Zeds
	if ((_currentManModels < _maxManModels) AND {(_canLoot OR {(_x call _fairSize)})}) then {
		if ((count _recyAgt > 0) OR {(_maxtoCreate > 0)}) then {
			//[dayz_spawnArea, _position, _inVehicle, _dateNow, _age, _locationstypes, _nearestCity, _maxControlledZombies] call player_spawnzedCheck;
			_suitableBld = _suitableBld +1;
			_zombied = (_x getVariable ["zombieSpawn",-0.1]);
			_dateNow = (DateToNumber date);
			_age = (_dateNow - _zombied) * 525948; // in minutes
			if (_age < -0.1) then {
				_x setVariable ["zombieSpawn",(DateToNumber date),!_islocal]; // a SV for all objects on the map was a bit insane
				_negstampBld = _negstampBld +1;
			} else {
				if (_age > dayz_tagDelayZombies) then {
					_tmp = [_x, _recyAgt, _maxtoCreate];
					_qty = _tmp call building_spawnZombies;
					_recyAgt = _tmp select 1;
					_maxtoCreate = _tmp select 2;
					if (_qty > 0) then {
						_currentManModels = _currentManModels + _qty;
						_x setVariable ["zombieSpawn",_dateNow,!_islocal];
					};
					_spwndoneBld = _spwndoneBld +1;
				}
				else {
					_zombieSpawnCtr = _zombieSpawnCtr +1;
				};
				//diag_log (format["%1 building. %2", __FILE__, _x]);
			};
		};
	};
} forEach _nearby;

/*
// spawn some a wild zombie if we can afford
if ((_currentManModels < _maxManModels) AND {_maxtoCreate > 0}) then {
	// we limit the surface because finding a typeless object is a CPU hog.
	_radius = (0 max (dayz_canDelete - dayz_spawnArea))/2;
	// search area is somewhere quite far, quite in the same direction as the player is facing
	// Z will be spawned quite far, beyond the radius used for buildings
	_tmp = (random 180) - 90;
	_dis = dayz_spawnArea + _radius;
	_point = player modelToWorld[sin(_tmp) * _dis, cos(_tmp) * _dis, 0];
	_nearby = nil;
	{
		_tmp = str(_x);
		// How not being seen? hide behind a bush! Great value = t_picea1s, t_picea2s, t_betula2w, b_craet2
		if ((typeOf _x == "") AND {(
			(((["t_picea1s", _tmp, false] call fnc_inString) OR
			{(["t_picea2s", _tmp, false] call fnc_inString)})) OR
			{((["t_betula2w", _tmp, false] call fnc_inString) OR
			{(["b_craet2", _tmp, false] call fnc_inString)})})
		}) then {
			_suitableBld = _suitableBld +1;
			_tmp = [_x, _recyAgt, _maxtoCreate, 10];
			_qty = _tmp call building_spawnZombies;
			_recyAgt = _tmp select 1;
			_maxtoCreate = _tmp select 2;
		};
		sleep 0.001;
	} forEach (nearestObjects [_point, [], _radius]);
};
*/
//diag_log (format["%1 End. Buildings checked:%2, newly zombied:%3, already zombied:%4, negative timestamp:%5.", __FILE__,_suitableBld, _spwndoneBld, _zombieSpawnCtr, _negstampBld ]);
