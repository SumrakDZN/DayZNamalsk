
private ["_obj", "_type", "_config", "_positions", "_itemTypes", "_lootChance", "_countPositions", "_bias", "_rnd", "_iPos", "_nearBy", "_index", "_weights", "_cntWeights", "_itemType", "_qty", "_i"];

_obj = _this;
_type = typeOf _obj;
_config = configFile >> dayzNam_buildingLoot >> _type;
_positions = [] + getArray (_config >> "lootPos");
_itemTypes = [] + getArray (_config >> "lootType");
_lootChance = getNumber (_config >> "lootChance");
_countPositions = count _positions;
_qty = 0; // effective quantity of spawned weaponholder

// bias for this building. The lower it is, the lower chance some of the lootpiles will spawn
_bias = 50 max dayz_lootSpawnBias;
_bias = 100 min _bias;
_bias = (_bias + random(100-_bias)) / 100;
//diag_log(format["BIAS:%1 LOOTCHANCE:%2", _bias, _lootChance]);
{
	if (count _x == 3) then {
		_rnd = (random 1) / _bias;
	//diag_log (_type + " ][ " + str(_x));
		_iPos = _obj modelToWorld _x;
		_nearBy = nearestObjects [_iPos, ["ReammoBox"], 2];

		if (count _nearBy > 0) then {
			_lootChance = _lootChance + 0.05;
		};
			
		if (_rnd <= _lootChance) then {
			if (count _nearBy == 0) then {
	//diag_log (str(dayz_CBLBase));
	//diag_log ("_type: " +str(_type));
				//_index = dayz_CBLBase find _type;
				_i = 0;
				_index = 0;
				{
					if (_x == _type) then {
						_index = _i;
					} else {
						_i = _i + 1;
					};
				} forEach dayz_CBLBase;
	//diag_log ("index: " +str(_index));
				_weights = dayz_CBLChances select _index;
	//diag_log ("weights: " +str(_weights));
				_cntWeights = count _weights;
	//diag_log ("cntWeights: " +str(_cntWeights));
				_index = floor(random _cntWeights);
	//diag_log ("_index: " +str(_index));
				_index = _weights select _index;
	//diag_log ("_index: " +str(_index));
				_itemType = _itemTypes select _index;
	//diag_log ("_itemType: " +str(_itemType));
	//diag_log format["Item: %1, Group: %2", _itemType select 0, _itemType select 1];
				[_itemType select 0, _itemType select 1 , _iPos, 0.0] call spawn_loot;
				_qty = _qty +1;
			};
		};
		sleep ((random 3) / 1000);
	} else {
		diag_log(format["%1 Illegal loot position #%3 from %2 in building %4 -- skipped", __FILE__,
						configName _config, _forEachIndex+1, typeOf _obj]);
	};
} forEach _positions;

_qty
