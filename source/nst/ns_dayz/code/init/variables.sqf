disableSerialization;

// Enable
// 0=False/off, 1=True/on
dayz_Trash = 1;

//
fps_safty_check = diag_fpsmin;

//Model Variables
Bandit1_DZ = 	"Bandit1_DZ";
BanditW1_DZ = 	"BanditW1_DZ";
Survivor1_DZ = 	"Survivor2_DZ";
Survivor2_DZ = 	"Survivor2_DZ";
SurvivorW2_DZ = "SurvivorW2_DZ";
Sniper1_DZ = 	"Sniper1_DZ";
Camo1_DZ = 		"Camo1_DZ";
Soldier1_DZ	=		"Soldier1_DZ";
Rocket_DZ	=		"Rocket_DZ";

AllPlayers = ["Soldier_Crew_PMC","Sniper1_DZ","Camo1_DZ","Soldier1_DZ","Rocket_DZ","CamoWinter_DZN","CamoWinterW_DZN","Sniper1W_DZN"];
AllPlayersVehicles = ["GER_Soldier_EP1","Soldier_Crew_PMC","Sniper1_DZ","Camo1_DZ","Soldier1_DZ","Rocket_DZ","CamoWinter_DZN","CamoWinterW_DZN","Sniper1W_DZN","AllVehicles"];

MeleeWeapons = ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeBaseball","MeleeBaseBallBat","MeleeBaseBallBatBarbed","MeleeBaseBallBatNails"];
MeleeMagazines = ["hatchet_swing","crowbar_swing","Machete_swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing"];

//New Zeds
DayZ_NewZeds = ["z_new_milSoldier2","z_new_milSoldier3","z_new_milSoldier4","z_new_milSoldier5","z_new_milWorker2","z_new_milworker3","z_new_milworker4"];
//Bags
DayZ_Backpacks = ["DZ_Patrol_Pack_EP1","DZ_Assault_Pack_EP1","DZ_Czech_Vest_Puch","DZ_ALICE_Pack_EP1","DZ_TK_Assault_Pack_EP1","DZ_British_ACU","DZ_CivilBackpack_EP1","DZ_Backpack_EP1","BAF_AssaultPack_DZN"];

SafeObjects = ["Land_Fire_DZ", "TentStorage", "Wire_cat1", "Sandbag1_DZ", "Hedgehog_DZ", "StashSmall", "StashMedium"];


//Cooking
meatraw = [
    "FoodSteakRaw",
    "FoodmeatRaw",
    "FoodbeefRaw",
    "FoodmuttonRaw",
    "FoodchickenRaw",
    "FoodrabbitRaw",
    "FoodbaconRaw",
    "FoodgoatRaw"
];
meatcooked = [
    "FoodSteakCooked",
    "FoodmeatCooked",
    "FoodbeefCooked",
    "FoodmuttonCooked",
    "FoodchickenCooked",
    "FoodrabbitCooked",
    "FoodbaconCooked",
    "FoodgoatCooked"
];
//Eating
no_output_food = [
	"FoodMRE",
	"FoodPistachio",
	"FoodNutmix",
	"FoodCandyAnders",
	"FoodCandyLegacys",
	"FoodCandyMintception"
]+meatcooked+meatraw;
food_with_output=[
    "FoodCanBakedBeans",
    "FoodCanSardines",
    "FoodCanFrankBeans",
    "FoodCanPasta",
	"FoodCanGriff",
	"FoodCanBadguy",
	"FoodCanBoneboy",
	"FoodCanCorn",
	"FoodCanCurgon",
	"FoodCanDemon",
	"FoodCanFraggleos",
	"FoodCanHerpy",
	"FoodCanDerpy",
	"FoodCanOrlok",
	"FoodCanPowell",
	"FoodCanTylers",
	"FoodCanUnlabeled",
	"FoodCanRusUnlabeled",
	"FoodCanRusPork",
	"FoodCanRusPeas",
	"FoodCanRusMilk",
	"FoodCanRusCorn",
	"FoodCanRusStew",
	"FoodChipsSulahoops",
	"FoodChipsMysticales"
];

food_output = [
    "TrashTinCan",
    "TrashTinCan",
    "TrashTinCan",
    "TrashTinCan",
	"FoodCanGriffEmpty",
	"FoodCanBadguyEmpty",
	"FoodCanBoneboyEmpty",
	"FoodCanCornEmpty",
	"FoodCanCurgonEmpty",
	"FoodCanDemonEmpty",
	"FoodCanFraggleosEmpty",
	"FoodCanHerpyEmpty",
	"FoodCanDerpyEmpty",
	"FoodCanOrlokEmpty",
	"FoodCanPowellEmpty",
	"FoodCanTylersEmpty",
	"FoodCanUnlabeledEmpty",
	"FoodCanRusUnlabeledEmpty",
	"FoodCanRusPorkEmpty",
	"FoodCanRusPeasEmpty",
	"FoodCanRusMilkEmpty",
	"FoodCanRusCornEmpty",
	"FoodCanRusStewEmpty",
	"FoodChipsSulahoopsEmpty",
	"FoodChipsMysticalesEmpty"
];
//Drinking
no_output_drink = ["ItemWaterbottle", "ItemWaterbottleBoiled"];
drink_with_output = [
    "ItemSoda",  //just to define item for ItemSodaEmpty
    "ItemSodaCoke",
    "ItemSodaPepsi",
    "ItemSodaMdew",
    "ItemSodaMtngreen",
    "ItemSodaR4z0r",
    "ItemSodaClays",
    "ItemSodaSmasht", 
    "ItemSodaDrwaste", 
    "ItemSodaLemonade", 
    "ItemSodaLvg", 
    "ItemSodaMzly", 
    "ItemSodaRabbit"
];
drink_output = [
    "ItemSodaEmpty", 
    "ItemSodaCokeEmpty",
    "ItemSodaPepsiEmpty",
    "ItemSodaMdewEmpty",
    "ItemSodaMtngreenEmpty",
    "ItemSodaR4z0rEmpty",
    "ItemSodaClaysEmpty",
    "ItemSodaSmashtEmpty", 
    "ItemSodaDrwasteEmpty", 
    "ItemSodaLemonadeEmpty", 
    "ItemSodaLvgEmpty", 
    "ItemSodaMzlyEmpty", 
    "ItemSodaRabbitEmpty"
];
boil_tin_cans = [
    "TrashTinCan",
	"FoodCanGriffEmpty",
	"FoodCanBadguyEmpty",
	"FoodCanBoneboyEmpty",
	"FoodCanCornEmpty",
	"FoodCanCurgonEmpty",
	"FoodCanDemonEmpty",
	"FoodCanFraggleosEmpty",
	"FoodCanHerpyEmpty",
	"FoodCanDerpyEmpty",
	"FoodCanOrlokEmpty",
	"FoodCanPowellEmpty",
	"FoodCanTylersEmpty",
	"FoodCanUnlabeledEmpty",
	"FoodCanRusUnlabeledEmpty",
	"FoodCanRusStewEmpty",
	"FoodCanRusPorkEmpty",
	"FoodCanRusPeasEmpty",
	"FoodCanRusMilkEmpty",
	"FoodCanRusCornEmpty",
    "ItemSodaEmpty",
    "ItemSodaCokeEmpty",
    "ItemSodaPepsiEmpty",
    "ItemSodaMdewEmpty",
    "ItemSodaMtngreenEmpty",
    "ItemSodaR4z0rEmpty",
    "ItemSodaClaysEmpty",
    "ItemSodaSmashtEmpty",
    "ItemSodaDrwasteEmpty",
    "ItemSodaLemonadeEmpty",
    "ItemSodaLvgEmpty",
    "ItemSodaMzlyEmpty",
    "ItemSodaRabbitEmpty"
];

dayz_combatLog = "";
canRoll = true;
canPickup = false;
pickupInit = false;

//Hunting Variables
dayZ_partClasses = [
	"PartFueltank",
	"PartWheel",
	//"PartGeneric",	//No need to add, it is default for everything
	"PartEngine"
];
dayZ_explosiveParts = [
	"palivo",
	"motor"
];
//Survival Variables
SleepFood =				2160; //minutes (48 hours)
SleepWater =			1440; //minutes (24 hours)
SleepTemperatur	= 		90 / 100;	//Firs Value = Minutes untill Player reaches the coldest Point at night (without other effects! night factor expected to be -1)			//TeeChange

//Server Variables
allowConnection = 		false;
isSinglePlayer =		false;
dayz_serverObjectMonitor = [];

//Streaming Variables (player only)
dayz_Locations = [];
dayz_locationsActive = [];

//GUI
Dayz_GUI_R = 0.38; // 0.7
Dayz_GUI_G = 0.63; // -0.63
Dayz_GUI_B = 0.26; // -0.26

//actions blockers
a_player_cooking = false;
a_player_boil = false;
a_player_jerryfilling = false;
a_player_repairing = false;

//Player self-action handles
dayz_resetSelfActions = {
	s_player_dragbody = -1;
	s_player_fire =			-1;
	s_player_cook =			-1;
	s_player_boil =			-1;
	s_player_fireout =		-1;
	s_player_butcher =		-1;
	s_player_packtent = 	-1;
	s_player_fillwater =	-1;
	s_player_fillwater2 = 	-1;
	s_player_fillfuel = 	-1;
	s_player_grabflare = 	-1;
	s_player_removeflare = 	-1;
	s_player_painkiller =	-1;
	s_player_studybody = 	-1;
	s_build_Sandbag1_DZ = 	-1;
	s_build_Hedgehog_DZ =	-1;
	s_build_Wire_cat1 =		-1;
	s_player_deleteBuild =	-1;
	s_player_forceSave = 	-1;
	s_player_flipveh = 		-1;
	s_player_stats =		-1;
	s_player_sleep =		-1;
	s_player_movedog =		-1;
	s_player_speeddog =		-1;
	s_player_calldog = 		-1;
	s_player_feeddog = 		-1;
	s_player_waterdog = 	-1;
	s_player_staydog = 		-1;
	s_player_trackdog = 	-1;
	s_player_barkdog = 		-1;
	s_player_warndog = 		-1;
	s_player_followdog = 	-1;
	s_player_fillfuel20 = -1;
	s_player_fillfuel5 = -1;
};
call dayz_resetSelfActions;

//Engineering variables
s_player_lastTarget =	objNull;
s_player_repairActions = [];

//Initialize Medical Variables
force_dropBody = false;
r_interrupt = 			false;
r_doLoop = 				false;
r_self = 				false;
r_self_actions = 		[];
r_drag_sqf = 			false;
r_action = 				false;
r_action_unload = 		false;
r_player_handler = 		false;
r_player_handler1 = 	false;
r_player_dead = 		false;
r_player_unconscious =	false;
r_player_infected =		false;
r_player_injured = 		false;
r_player_inpain = 		false;
r_player_loaded = 		false;
r_player_cardiac = 		false;
r_fracture_legs =		false;
r_fracture_arms =		false;
r_player_vehicle =		player;
r_player_blood = 		12000;
//Blood Regen
r_player_bloodregen = 0;
//Blood Gain Per Sec
r_player_bloodgainpersec = 0;
//Blood Loss Per Sec
r_player_bloodlosspersec = 0;
//Blood Per Sec (gain - loss)
r_player_bloodpersec = 0;
//Food Stack
r_player_foodstack = 1;
//player skill
r_player_lowblood = 	false;
r_player_timeout =		0;
r_player_bloodTotal = 	r_player_blood;
r_public_blood =		r_player_blood;
r_player_bloodDanger =	r_player_bloodTotal * 0.2;
r_player_actions = 		[];
r_handlerCount = 		0;
r_action_repair = 		false;
r_action_targets = 		[];
r_pitchWhine = 			false;
r_isBandit =			false;

//count actions
r_action_count = 0;

//ammo routine
r_player_actions2 = [];
r_action2 = false;
r_player_lastVehicle = objNull;
r_player_lastSeat = [];
r_player_removeActions2 = {
	if (!isNull r_player_lastVehicle) then {
		{
			r_player_lastVehicle removeAction _x;
		} forEach r_player_actions2;
		r_player_actions2 = [];
		r_action2 = false;
	};
};

USEC_woundHit 	= [  // limbs hit given by arma engine when fnc_usec_damageHandler is called
	"",
	"body",
	"hands",
	"legs",
	"head_hit"
];
DAYZ_woundHit 	= [
	[
		"body",
		"hands",
		"legs",
		"head_hit"
	],
	[ 0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,2,2,3]
];
DAYZ_woundHit_ok = [
	[
		"body",
		"hands",
		"legs"
	],
	[0,0,0,0,0,1,1,1,2,2]
];
DAYZ_woundHit_dog = [
	[
		"body",
		"hands",
		"legs"
	],
	[0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2]
];
USEC_MinorWounds 	= [
	"hands",
	"legs"
];
USEC_woundPoint = [ // translation table USEC_woundHit -> SV suffixes
	["Pelvis","aimpoint"],
	["aimpoint"], //,"RightShoulder","LeftShoulder"
	["lelbow","relbow"],
	["RightFoot","LeftFoot"],
	["neck","pilot"]
];
USEC_typeOfWounds = [ // used by player_sumMedical, should contains all limbs described in USEC_woundPoint. These limbs statuses are saved by server_playerSync in HIVE if they are bleeding (medical select 8)
	"Pelvis",
	"aimpoint",
	"lelbow","relbow",
	"RightFoot","LeftFoot",
	"neck","pilot"
];

//Initialize Zombie Variables
dayz_zombieTargetList = [
	["SoldierWB",50],
	["Air",500],
	["LandVehicle",200]
];
dayzHit = [];
PVDZ_obj_Publish = [];		//used for eventhandler to spawn a mirror of players tent
PVDZ_obj_HideBody = objNull;

//DayZ settings
dayz_dawn = 4; //6
dayz_dusk = 22; //18
dayz_maxAnimals = 2;
DAYZ_agentnumber = 0;
dayz_animalDistance = 800;
dayz_zSpawnDistance = 1000;

dayz_maxLocalZombies = 40; // max quantity of Z controlled by local gameclient, used by player_spawnCheck. Below this limit we can spawn Z
dayz_maxMaxModels = 80; // max quantity of Man models (player or Z, dead or alive) around players. Below this limit we can spawn Z
dayz_maxMaxWeaponHolders = 80; // max quantity of loot piles around players. Below this limit we can spawn some loot
dayz_tagDelayWeaponHolders = 20; // prevent any new loot spawn on this building during this delay (minutes)
dayz_tagDelayZombies = 20; // prevent any new zombie spawn into or near this building during this delay (minutes)
dayz_spawnArea = 200; // radius around player where we can spawn loot & Z
dayz_safeDistPlr = 50; // Any loot & Z won't be spawned closer than this distance from any player
dayz_cantseeDist = 150; // distance from which we can spawn a Z in front of any player without ray-tracing and angle checks
dayz_cantseefov = 70; // half player field-of-view. Visible Z won't be spawned in front of any near players
dayz_canDelete = 300; // Z, further than this distance from its "owner", will be deleted
dayz_lootSpawnBias = 67; // between 50 and 100. The lower it is, the lower chance some of the lootpiles will spawn
dayz_localswarmSpawned = 10;  // how many zeds will spawn around you during a combat scenario.
dayz_infectionTreshold = 1.25; // used to trigger infection, see fn_damageHandler.sqf

//init global arrays for Loot Chances
call compile preprocessFileLineNumbers "\nst\ns_dayz\code\init\loot_init.sqf";


if(isServer) then {
	dayz_players = [];
	dead_bodyCleanup = [];
	needUpdate_objects = [];
	Server_InfectedCamps = [];
	dayz_spawnCrashSite_clutterCutter=0; // helicrash spawn... 0: loot hidden in grass, 1: loot lifted, 2: no grass 
};

if(!isDedicated) then {
	//Establish Location Streaming
	_funcGetLocation = 
	{
		dayz_Locations = [];
		for "_i" from 0 to ((count _this) - 1) do 
		{
			private ["_location","_config","_locHdr","_position","_size","_type"];
			//Get Location Data from config
			_config = 	(_this select _i);
			_position = getArray (_config >> "position");
			_locHdr = 	configName _config;
			_position = getArray	(_config >> "position");
			_size = 	getNumber	(_config >> "size");
			dayz_Locations set [count dayz_Locations, [_position,_locHdr,_size]];
		};
	};
	_cfgLocation = configFile >> "CfgTownGeneratorNamalsk";
	_cfgLocation call _funcGetLocation;
	
	dayz_buildingMonitor = [];	//Buildings to check
	dayz_bodyMonitor = [];
	dayz_flyMonitor = [];		//used for monitor flies
	
	dayz_baseTypes = 		getArray (configFile >> dayzNam_buildingLoot >> "Default" >> "zombieClass");

	//temperature variables
	dayz_temperatur 		= 	36;		//TeeChange
	dayz_temperaturnormal 	= 	36;		//TeeChange
	dayz_temperaturmax 		= 	42;		//TeeChange
	dayz_temperaturmin 		= 	27;		//TeeChange
	
	//player special variables
	dayZ_lastPlayerUpdate = 0;
	dayZ_everyonesTents =	[];
	dayz_hunger	=			0;
	dayz_thirst = 			0;
	dayz_combat =			0;
	dayz_preloadFinished = 	false;
	dayz_statusArray =		[1,1];
	dayz_disAudial =		0;
	dayz_disVisual =		0;
	dayz_firedCooldown = 	0;
	dayz_DeathActioned =	false;
	dayz_canDisconnect = 	true;
	dayz_damageCounter =	time;
	dayz_lastSave =			time;
	dayz_isSwimming	=		true;
	dayz_currentDay = 		0;
	dayz_hasLight = 		false;
	dayz_surfaceNoise =		0;
	dayz_surfaceType =		"None";
	dayz_noPenalty = 		[];
	dayz_heavenCooldown =	0;
	deathHandled = 			false;
	dayz_lastHumanity =		0;
	dayz_guiHumanity =		-90000;
	dayz_firstGroup = 		group player;
	dayz_originalPlayer = 	player;
	dayz_playerName =		"Unknown";
	dayz_sourceBleeding =	objNull;
	dayz_clientPreload = 	false;
	dayz_authed = false;
	dayz_panicCooldown = 0;
	dayz_areaAffect = 3.5;
	dayz_monitorPeriod = 0.6; // number of seconds between each player_zombieCheck calls
	dayz_heartBeat = 		false;
	dayzClickTime =			0;
	dayz_spawnDelay = 300;
	dayz_spawnWait = -300;
	dayz_lootDelay =		3;
	dayz_lootWait =			-300;
	dayz_spawnZombies =		0;
	dayz_swarmSpawnZombies = 0;
	//used to count global zeds around players
	dayz_CurrentZombies = 0;
	//Used to limit overall zed counts
	dayz_maxCurrentZeds = 0;
	dayz_inVehicle =		false;
	dayz_Magazines = 		[];
	dayzGearSave = 			false;
	dayz_unsaved =			false;
	dayz_scaleLight = 		0;
	dayzDebug = false;
	dayzState = -1;
	//uiNamespace setVariable ['DAYZ_GUI_display',displayNull];
	//if (uiNamespace getVariable ['DZ_displayUI', 0] == 2) then {
	//	dayzDebug = true;
	//};
};