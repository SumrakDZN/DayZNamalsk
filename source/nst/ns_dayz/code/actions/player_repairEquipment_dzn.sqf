private ["_brokenEquipType","_equipTypeStr","_reppedEquipType"];
_field = _this select 1;
_itemType = _field select 0;
switch (_itemType) do {
	case "GPS": {_brokenEquipType = "BrokenItemGPS";_equipTypeStr = "GPS";_reppedEquipType = "ItemGPS";};
	case "RAD": {_brokenEquipType = "BrokenItemRadio";_equipTypeStr = "radios";_reppedEquipType = "ItemRadio";};
	case "NVG": {_brokenEquipType = "BrokenNVGoggles";_equipTypeStr = "NVG";_reppedEquipType = "NVGoggles";};
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_bp = unitBackpack player;
_content = getWeaponCargo _bp;
_objWpnTypes = _content select 0;
_objWpnQty = _content select 1;
_y = 0;
_hasEnough = false;
{
	_wpnType = _x;
	_wpnCoun = _objWpnQty select _y;
	if ((_wpnType == _brokenEquipType) and (_wpnCoun >= 2)) then {
		_hasEnough = true;
	};
	_y = _y + 1;
} forEach _objWpnTypes;

if (_hasEnough) then {
	_hasTools = false;
	if (player hasWeapon "ItemSolder") then {
		if (player hasWeapon "ItemToolbox") then {
			_hasTools = true;
		} else {
			cutText ["You need to have a tool box to combine & repair the broken equipment.", "PLAIN DOWN"];
		};
	} else {
		cutText ["You need to have a solder to combine & repair the broken equipment.", "PLAIN DOWN"];
	};
	if (_hasTools) then {
		clearWeaponCargoGlobal _bp;
		_y = 0;
		{
			_wpnType = _x;
			_wpnCoun = _objWpnQty select _y;
			if ((_wpnType == _brokenEquipType)) then {
				if (_wpnCoun > 2) then {
					_bp addWeaponCargoGlobal [_brokenEquipType, _wpnCoun - 2];
				};
			} else {
				_bp addWeaponCargoGlobal [_wpnType, _wpnCoun];
			};
			_y = _y + 1;
		} forEach _objWpnTypes;
		player playActionNow "PutDown";
		sleep 4;
		_bp addWeaponCargoGlobal [_reppedEquipType, 1];
		cutText [format ["You successfully combined & repaired 2 broken %1 into 1 functional.", _equipTypeStr], "PLAIN DOWN"];
	};
} else {
	cutText [format ["You don't have enough broken %1 to create one functional. (make sure the broken equipment is in backpack)", _equipTypeStr], "PLAIN DOWN"];
};