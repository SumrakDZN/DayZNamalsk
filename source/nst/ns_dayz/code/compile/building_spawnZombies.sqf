/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

// _this select 0: building object where zombies should spawn
// (optional) _this select 1: array of recyclable agents
// (optional) _this select 2: max quantity of agents to newly create
// (optional) _this select 3: override local density control (used to limit wild zombies)
// returns: quantity of zombies spawned
// "building" should be a building lootable OR big enough to hide a zombie
// zombies will spawn inside (1/3 chance roughly) or outside the building (in a piesize area behind the building)

private ["_cantSee", "_obj","_this","_recyAgt","_maxtoCreate","_spawnAreaRatio","_type","_config","_unitTypes","_min","_max","_zombieChance","_num0","_num","_halfBuildingSize","_rnd","_clean","_x","_posList","_bsz_pos","_cantSee","_tmp","_wholeAreaSize","_minSector","_spawnSize","_minRadius","_rangeRadius","_rangeAngle","_minAngle","_i","_deg","_radius"];

_cantSee = {
	private ["_isok","_zPos","_this","_fov","_safeDistance","_farDistance","_x","_eye","_ed","_deg", "_xasl"];

	_isok = true;
	_zPos = +(_this select 0);
	if (count _zPos < 3) exitWith {
		diag_log format["%1::_cantSee illegal pos %2", __FILE__, _zPos];
		false
	};
	_zPos = ATLtoASL _zPos;
	_fov = _this select 1; // players half field of view
	_safeDistance = _this select 2; // minimum distance. closer is wrong
	_farDistance = _this select 3; // distance further we won't check
	_zPos set [2, (_zPos select 2) + 1.7];
	{
		_xasl = getPosASL _x;
		if (_xasl distance _zPos < _farDistance) then {
			if (_xasl distance _zPos < _safeDistance) then {
				_isok = false;
			}
			else {
				_eye = eyePos _x; // ASL
				_ed = eyeDirection _x;
				_ed = (_ed select 0) atan2 (_ed select 1);
				_deg = [_xasl, _zPos] call BIS_fnc_dirTo;
				_deg = (_deg - _ed + 720) % 360;
				if (_deg > 180) then { _deg = _deg - 360; };
				if ((abs(_deg) < _fov) AND {( // in right angle sector?
						(!(terrainIntersectASL [_zPos, _eye]) // no terrain between?
						AND {(!(lineIntersects [_zPos, _eye]))}) // and no object between?
					)}) then {
					_isok = false;
				};
			};
		};
		if (!_isok) exitWith {false};
	} forEach playableUnits;

	_isok
};

_obj = _this select 0;
_recyAgt = []; if (count _this > 1) then { _recyAgt = _this select 1; };
_maxtoCreate = 99; if (count _this > 2) then { _maxtoCreate = _this select 2; };
_spawnAreaRatio = 4; if (count _this > 3) then { _spawnAreaRatio = _this select 3; };
// _spawnAreaRatio = 40 -> 1 Z per 500m radius
// _spawnAreaRatio = 10 -> 2 Z per 125m radius
// _spawnAreaRatio = 4  -> 10 Z per 50m radius

_type = typeOf _obj;
_config = configFile >> dayzNam_buildingLoot >> _type;
if ((!isClass(_config)) OR {(typeName(_config) != "CONFIG")}) then {
	_type = "(Default) "+str(_obj); // for logging purpose only
	_config = configFile >> dayzNam_buildingLoot >> "Default"; // spawn even on non lootable building
};
_unitTypes = getArray (_config >> "zombieClass");
_min = getNumber (_config >> "minRoaming");
_max = getNumber (_config >> "maxRoaming");
_zombieChance = getNumber (_config >> "zombieChance");

_num0 = _min + floor(random(_max - _min + 1));
// we control the overall density, in order to prevent to many spawns on the same small area
// be careful: all human models are taken, but player excluded
_num0 = _num0 min (0 max (ceil(dayz_maxMaxModels / _spawnAreaRatio / _spawnAreaRatio * 2) - (count(((getPosATL _obj) nearEntities ["CAManBase", dayz_spawnArea / 4 * (_spawnAreaRatio / 4)]) - [player]))));
_num = _num0;
/*
diag_log (format["%1 _unitTypes/_min/_max/_zombieChance %2 %3 %4 %5  config:%6   density: %7/%8^2  qty2spawn:%9", __FILE__,
 _unitTypes,_min,_max,_zombieChance, configName _config,
 ceil (dayz_maxMaxModels / _spawnAreaRatio / _spawnAreaRatio * 2),
 dayz_spawnArea / 4 * (_spawnAreaRatio / 4),
 _num0
]);
*/

_halfBuildingSize = (sizeOf _type) / 3; // I put 3 because sizeOf is very loose
_rnd = random 1;
if ((_rnd < _zombieChance) AND {(_num0 > 0)}) then {
	//Add Internal Zombies
	_clean = {alive _x} count (getPosATL _obj nearEntities ["zZombie_Base", _halfBuildingSize]) == 0;
	if (_clean) then {
		_posList = [] + (getArray (_config >> "lootPos"));
		if ((!isNil "_posList") AND {(count _posList > 0)}) then {
			for [{_num = _num0}, {(count _posList > 0) AND (_num >= 2 * _num0 / 3) AND (_num > 0)}, {}] do {
			_bsz_pos = _posList call BIS_fnc_selectRandom;
			_posList = _posList - [_bsz_pos];
			if (count _bsz_pos >= 2) then { // sometime pos from config is empty :(
				_bsz_pos = _obj modelToWorld _bsz_pos;
				if ([_bsz_pos, dayz_cantseefov, dayz_safeDistPlr, dayz_cantseeDist] call _cantSee) then { // check that player won't see the spawning zombie
					_tmp = [_bsz_pos, false, _unitTypes, _recyAgt, _maxtoCreate];
					if (_tmp call zombie_generate) then {
						//diag_log(format["%1 Zombie spawned at %2 inside %3  (%4/%5) recy/crea:%6/%7",__FILE__,
						//				_bsz_pos, _type, 1+_num0-_num, _num0, count (_tmp select 3), _tmp select 4]);
						_num = _num - 1;
						_recyAgt = _tmp select 3;
						_maxtoCreate = _tmp select 4;
					};
				};
			};
		};
		};
	};

	// Add remaining Z as walking Zombies (outside the building)
	_wholeAreaSize = 40; // for external walking zombies, area size around building where zombies can spawn
	_minSector = 5; // in degree. Only the opposite sector of the building, according to Player PoV, will be used as spawn. put 360 if you want they spawn all around the building
	_spawnSize = (sizeOf "zZombie_Base") max (_halfBuildingSize / 2); // smaller area size inside the sector where findEmptyPosition is asked to find a spot
	_minRadius = _halfBuildingSize + _spawnSize + (player distance _obj);
	_rangeRadius = _spawnSize max (_wholeAreaSize - _spawnSize);
	_rangeAngle = _minSector max (2 * ((_halfBuildingSize - _spawnSize) atan2 (player distance _obj)));
	_minAngle = ([_obj, player] call BIS_fnc_dirTo) + 180 - _rangeAngle / 2;
	//diag_log(format["%1 _wholeAreaSize:%2 _minRadius:%3 _rangeRadius:%4 _rangeAngle:%5, _halfBuildingSize:%6", __FILE__, _wholeAreaSize, _minRadius, _rangeRadius, _rangeAngle, _halfBuildingSize]);
	for [{_i = _num * 10}, {(_num > 0) AND (_i > 0)}, {_i = _i - 1}] do {
		_deg = _minAngle + random _rangeAngle;
		_radius = _minRadius + random _rangeRadius;
		_bsz_pos = getPosATL player;
		_bsz_pos = [(_bsz_pos select 0) + _radius * sin(_deg), (_bsz_pos select 1) + _radius * cos(_deg), 0];
		_bsz_pos = (_bsz_pos) findEmptyPosition [0, _spawnSize, "zZombie_Base"];
		if (((count _bsz_pos >= 3) // check that findEmptyPosition found something for us
			AND {(!([_bsz_pos, true] call fnc_isInsideBuilding) // check position is outside any buildings
			AND {({alive _x} count (_bsz_pos nearEntities ["zZombie_Base", 1]) == 0)})}) // check position is empty
			AND {([_bsz_pos, dayz_cantseefov, dayz_safeDistPlr, dayz_cantseeDist] call _cantSee)}) then { // check that player won't see the spawning zombie
			_bsz_pos set [2, 0]; // force on the ground
			_tmp = [_bsz_pos, true, _unitTypes, _recyAgt, _maxtoCreate];
			if (_tmp call zombie_generate) then {
				//diag_log(format["%1 Zombie spawned at %2 near %3  (%4/%5) recy/crea:%6/%7",__FILE__,
				//				_bsz_pos, _type, 1+_num0-_num, _num0, count (_tmp select 3), _tmp select 4]);
				_num = _num - 1;
				_recyAgt = _tmp select 3;
				_maxtoCreate = _tmp select 4;
			}/*
			else {
				diag_log("??");
			}*/;
		}/*
		else {
		diag_log(format["%1 %2 %3",
			_bsz_pos,
		//	(!([_bsz_pos, true] call fnc_isInsideBuilding)),
			([_bsz_pos, dayz_cantseefov, dayz_safeDistPlr, dayz_cantseeDist] call _cantSee)
			]);
		}*/;
	};
	
	//Add bloodsuckers
	if (_type == "Land_bspawn" && dzn_ns_bloodsucker && ((random 400) < dzn_ns_bloodsucker_den)) then {
		private["_content", "_originalPos"];
		_rnd = random 1;
		if (_rnd < 0.18562) then {
			_content = "this addMagazine 'ItemBloodbag'";
		} else {
			_content = "";
		};
		_originalPos = getPos _obj;
		"ns_bloodsucker" createUnit [[(_originalPos select 0) + (random 60), (_originalPos select 1) - (random 60), 0], group sefik, _content, 1, "CORPORAL"];
	};
}/*
else {
	diag_log(format["%1 %2 %3",_rnd,  _zombieChance, _num0]);
}*/;
if (_num < _num0) then {
	dayz_buildingMonitor set [count dayz_buildingMonitor,_obj];
};
/*
if (_num > 0) then {
	diag_log(format["%1 Failed to find a nice spot for %2 Zombies at %3 %4",__FILE__,
					_num, typeOf _obj, getPosATL _obj]);
};
*/
_this set [1, _recyAgt];
_this set [2, _maxtoCreate];

(_num0 - _num)

