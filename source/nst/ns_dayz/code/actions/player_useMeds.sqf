private["_item"];
_item = _this;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

switch (_item) do {
	case "ItemBandage": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\bandage.sqf";
	};
	case "ItemMorphine": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\morphine.sqf";
	};
	case "ItemPainkiller": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\painkiller.sqf";
	};
	case "ItemAntibiotic": {
		_id = [0,0,0,[player]] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";
	};
	case "ItemHeatPack": {
		player removeMagazine "ItemHeatPack";
		dayz_temperatur = (dayz_temperatur + 2.5) min dayz_temperaturmax;
		cutText [localize "str_player_27", "PLAIN DOWN"];
	};
};