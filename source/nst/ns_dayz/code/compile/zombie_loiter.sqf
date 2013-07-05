private["_unit","_aimingPos","_pos", "_deg", "_trip", "_maxlength"];
_unit = _this select 0; // Zed object
_aimingPos = _this select 1; // Zed will wander towards player's position...
_maxlength = 100;

_pos = [];
_deg = [_unit, _aimingPos] call BIS_fnc_relativeDirTo;
_trip = [_unit, _aimingPos] call BIS_fnc_distance2D;
if ((_trip < 2 * dayz_areaAffect) OR {(_trip > dayz_canDelete)}) then { // too close from current pos (Zed would stay still) or really too far (Zed could be deleted)
	_trip = 2*dayz_areaAffect + random _maxlength;
	_deg = -20 + random 40;
	_posList = (getPosATL _unit) nearObjects ["ReammoBox", _maxlength]; // send Zed to check a lootpile. Get busy...
	if (count _posList > 0) then {
		_pos = getPosATL (_posList call BIS_fnc_selectRandom);
	};
};
if (count _pos < 3) then { // no lootpile nearby
	_trip = _trip * ((random(2) - 1) / 5 + 1); // let's randomize the distance. +/- 20%
	if (_deg > 180) then { _deg = _deg - 360; }; // _deg in [-180, +180]
	_deg = _deg * ((random(2) - 1) / 10 + 1); // let's randomize the direction. +/- 10% (if player is behind Zed's back, Zed direction will be less precise)
	_deg = _deg + 10 * (random(2) - 1); // let's randomize the direction more again. +/- 20 degrees
	_pos = _unit modelToWorld [ sin(_deg) * _trip, cos(_deg) * _trip, 0];
};

/*
diag_log format ["%1 Want-me-to-go:%2  but-will-go: %3  (trip:%4m, error:%5m). Current/next stance:%6/%7",__FILE__, _aimingPos, _pos, round([_unit, _pos] call BIS_fnc_distance2D), round(_pos distance _aimingPos),
unitPos _agent, _unit getVariable ["stance", "unknown"]
];
*/

if(isNull group _unit) then {
	_unit moveTo _pos;
} else {
	_unit domove _pos;
};

// reset stance to favorite one
_agent setUnitPos (_unit getVariable ["stance", "UP"]);


// speed is random. 2 4 or 6, 2 being most likely.
_unit forceSpeed ceil(random(3^0.5)^2)*2;
_unit setVariable ["myDest",_pos];

_pos
