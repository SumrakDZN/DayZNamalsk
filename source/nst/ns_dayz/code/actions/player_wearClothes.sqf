private["_item"];
_item = _this;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

if (typeOf player == "SurvivorW2_DZ") exitWith {cutText ["Currently Female Characters cannot change skins. This will change in a future update.", "PLAIN DOWN"]};
if (typeOf player == "BanditW1_DZ") exitWith {cutText ["Currently Female Characters cannot change skins. This will change in a future update.", "PLAIN DOWN"]};

player removeMagazine _item;
_humanity = player getVariable ["humanity",0];

switch (_item) do {
	case "Skin_Sniper1_DZ": {
		[dayz_playerUID,dayz_characterID,"Sniper1_DZ"] spawn player_humanityMorph;
	};
	case "Skin_Camo1_DZ": {
		[dayz_playerUID,dayz_characterID,"Camo1_DZ"] spawn player_humanityMorph;
	};
	case "Skin_Survivor2_DZ": {
		_model = "Survivor2_DZ";
		if (_humanity < -2000) then {
			_model = "Bandit1_DZ";
		};
		if (_humanity > 5000) then {
			_model = "Survivor3_DZ";
		};
		[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
	};
	case "Skin_Soldier1_DZ": {
		[dayz_playerUID,dayz_characterID,"Soldier1_DZ"] spawn player_humanityMorph;
	};
	//DayZ: Namalsk
	case "Skin_CamoWinter_DZN": {
		[dayz_playerUID,dayz_characterID,"CamoWinter_DZN"] spawn player_humanityMorph;
	};
};

_myModel = (typeOf player);

if (_myModel == "Bandit1_DZ") then {
	_myModel = "Survivor2_DZ";
};
if (_myModel == "Survivor3_DZ") then {
	_myModel = "Survivor2_DZ";
};
_itemNew = "Skin_" + _myModel;

_config = 		configFile >> "CfgMagazines" >> _itemNew;
_isClass = 		isClass (_config);

if (_isClass) then {
	player addMagazine _itemNew;
};
player setVariable ["humanity",_humanity,true];