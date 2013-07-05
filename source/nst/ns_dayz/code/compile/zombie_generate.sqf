
// create a Zombie agent, or recycle an existing one.
// returns true if agent is not null
// "_this select 3" and "_this select 4"  may be modified

private ["_position","_this","_doLoiter","_unitTypes","_recyAgt","_maxtoCreate","_agent","_list","_x","__FILE__","_agtPos","_type","_radius","_method","_loot","_array","_rnd","_lootType","_index","_weights","_myDest","_newDest","_id", "_recycled", "_distance", "_favStance"];

_position = _this select 0;
_doLoiter = _this select 1; // wander around
_unitTypes = _this select 2; // class of wanted models
_recyAgt = []; if (count _this > 3) then { _recyAgt = _this select 3; };
_maxtoCreate = 99; if (count _this > 4) then { _maxtoCreate = _this select 4; };

_isNoone = 	{isPlayer _x} count (_position nearEntities [["AllVehicles","CAManBase"],30]) == 0;
//Exit if no one is nearby
if (!_isNoone) exitWith {
	diag_log(format["%1: won't do that, too close from player (%2m), _this:%3", __FILE__, round(_distance), _this]);
	false
};

_distance = [_position, getPosATL player] call BIS_fnc_distance2D;
/*
if (_distance < dayz_safeDistPlr) exitWith {
	diag_log(format["%1: won't do that, too close from player (%2m), _this:%3", __FILE__, round(_distance), _this]);
	false
};
*/

_agent = objNull;
if (count _unitTypes == 0) then {
	_unitTypes = []+ getArray (configFile >> dayzNam_buildingLoot >> "Default" >> "zombieClass");
};

_unitTypes = _unitTypes + _unitTypes + _unitTypes + DayZ_NewZeds;

// Build _list so that it contains 2 samples of unitTypes (zombie model)
_list = [
	_unitTypes select (floor(random(count _unitTypes))),
	_unitTypes select (floor(random(count _unitTypes)))
];
// search available recyclable zombies which type is among these samples
{
	if (typeOf (_x getVariable ["agentObject",objNull]) IN _list) exitWith {
		_agent = _x;
		_recyAgt = _recyAgt - [_agent];
	};
} forEach _recyAgt;
_recycled = false;
if (!isNull _agent) then { // we have found a recyclable agent
	//diag_log(format["%1 Found 1 agent to recycle: %2", __FILE__, _agent]);
	// sometime Z can be seen flying in very high speed while tp. Its altitude is set underground to hide that.
	_agtPos = getPosASL _agent; _agtPos set [2, -3];
	_agent setPosASL _agtPos; sleep 0.001;
	_agtPos = +(_position); _agtPos set [2, -3];
	_agent setPosASL _agtPos; sleep 0.001;
	_recycled = true;
}
else {
	if (_maxtoCreate > 0) then {
		// let's create an agent from scratch
		_type = _unitTypes call BIS_fnc_selectRandom;
		_radius = 4;
		_method = "NONE";
		_agent = createAgent [_type, _position, [], _radius, _method]; sleep 0.001;
		dayz_spawnZombies = dayz_spawnZombies + 1;
		dayz_CurrentZombies = dayz_spawnZombies + 1;
		//Add some loot
		_loot = "";
		_array = [];
		_rnd = random 1;
		if (_rnd > 0.3) then {
			_lootType = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
			if (isText _lootType) then {
				_array = [];
				{
					_array set [count _array, _x select 0]
				} foreach getArray (configFile >> "cfgLoot" >> getText(_lootType));
				if (count _array > 0) then {
					_index = dayz_CLBase find getText(_lootType);
					_weights = dayz_CLChances select _index;
					_loot = _array select (_weights select (floor(random (count _weights))));
					if(!isNil "_array") then {
						_agent addMagazine _loot;
					};
				};
			};
		};
		_agent setVariable["agentObject",_agent];
		_maxtoCreate = _maxtoCreate -1;
	};
};

if (!isNull _agent) then {
	_agent setDir random 360;
	_agent setvelocity [0, 0, 1]; // avoid stuck zombies legs
	_agent setPosATL _position; sleep 0.001;

	_position = getPosATL _agent;

	_distance = _position distance (getPosATL player);
	//if (_distance < dayz_safeDistPlr) exitWith {
	//	diag_log(format["%1: zombie distance: %2m (model:%3, stance:%4, ATL:%5)", __FILE__, round(_distance), typeOf _agent, unitPos _agent, _position]);
	//	false
	//};

	_favStance = (switch ceil(random(3^0.5)^2) do {
		//case 3: {"DOWN"}; // prone
		case 2: {"Middle"}; // Kneel
		default {"UP"} // stand-up
	});
	_agent setUnitPos _favStance;

	_agent setVariable ["stance", _favStance];
	_agent setVariable ["BaseLocation", _position];
	_agent setVariable ["doLoiter", _doLoiter]; // true: Z will be wandering, false: stay still
	_agent setVariable ["myDest", _position];
	_agent setVariable ["newDest", _position];
	if (_doLoiter) then {
		[_agent, _position] call zombie_loiter;
	};

	if (!_recycled) then {
		//Start behavior only for freshly created agents
		_id = [_position,_agent] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
		_agent setVariable [ "fsmid", _id ];
	}
	else {
		_id = _agent getVariable [ "fsmid", -1 ];
		if (!isNil "_id") then {
			_id setFSMVariable ["_entityTime", 0];
		};
	};
};

_this set [3, _recyAgt];
_this set [4, _maxtoCreate];

(!isNull _agent)
