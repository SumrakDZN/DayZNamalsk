class CfgPatches
{
	class ns_dayz
	{
		units[] =
	{
		"Mi17_Civilian_Nam",
		"Ka60_GL_NAC",
		"Ka60_NAC"
	};
		weapons[] =
    {
		"57mmLauncher_NAC",
		"M32_heli_NAC"
    };
		requiredVersion = 0.100000;
		requiredAddons[] = 
	{
		//"dayz_code"
	};
	author[] = {
		"Sumrak"
	};
	};
};

/*
INSERT INTO `spawns` (`pos`, `otype`, `uuid`, `world`, `chance`) VALUES
	('[219,[4148.12,6579.55,3.866]]', 'Ka60_GL_NAC', 4578512, 'namalsk',0.25),
	('[182,[4127.6,6703.51,0.00146484]]', 'UAZ_RU', 4578513, 'namalsk',0.65),
	('[93,[3552.5,6675.55,0.00143433]]', 'UAZ_RU', 4578514, 'namalsk',0.65),
	('[220,[3941.47,7595.37,0.00143814]]', 'UralCivil2', 4578515, 'namalsk',0.55),
	('[180,[5849.93,8659.4,0.00143814]]', 'UralCivil2', 4578516, 'namalsk',0.55),
	('[90,[4837.61,6145.8,0.00143814]]', 'UralCivil', 4578517, 'namalsk',0.55),
	('[90,[7051.95,5777.77,0.00144196]]', 'hilux1_civil_3_open_EP1', 4578518, 'namalsk',0.55),
	('[180,[7894.81,7718.42,0.00142384]]', 'UralCivil', 4578519, 'namalsk',0.55),
	('[52,[7358.11,7984.73,0.00138092]]', 'hilux1_civil_3_open_EP1', 4578520, 'namalsk',0.55),
	('[351,[7685.47,8729.3,0.00157166]]', 'UralCivil2', 4578521, 'namalsk',0.55),
	('[23,[5975.07,6690.23,0.00141525]]', 'UAZ_RU', 4578522, 'namalsk',0.65),
	('[255,[5748.33,9844.07,0.00140762]]', 'hilux1_civil_3_open_EP1', 4578523, 'namalsk',0.55),
	('[296,[8252.9,10792.1,0.00143909]]', 'tractor', 4578524, 'namalsk',0.75),
	('[22,[8957.08,10629.1,0.00132465]]', 'Old_bike_TK_CIV_EP1', 4578525, 'namalsk',0.95),
	('[110,[9134.51,10091.7,4.11368]]', 'Fishing_Boat', 4578526, 'namalsk',0.55),
	('[81,[7209.53,10848.4,0.00142956]]', 'Old_bike_TK_CIV_EP1', 4578527, 'namalsk',0.95),
	('[270,[6739.51,11323.5,0.00143909]]', 'UralCivil', 4578528, 'namalsk',0.55),
	('[74,[7029.23,11540.7,0.00143909]]', 'hilux1_civil_3_open_EP1', 4578529, 'namalsk',0.55),
	('[11,[6665.94,11022.5,0.00143909]]', 'Old_bike_TK_CIV_EP1', 4578530, 'namalsk',0.95),
	('[278,[5796.78,10761.3,0.00142288]]', 'hilux1_civil_3_open_EP1', 4578532, 'namalsk',0.55),
	('[203,[4849.06,10858.9,0.00143909]]', 'UAZ_RU', 4578533, 'namalsk',0.65),
	('[280,[4418.92,10748.9,0.00143909]]', 'UAZ_RU', 4578534, 'namalsk',0.65),
	('[47,[4521,11230,3.81583]]', 'Mi17_Civilian_Nam', 4578535, 'namalsk',0.25),
	('[55,[4525.93,11255.1,0.001692]]', 'PBX', 4578536, 'namalsk',0.55),
	('[92,[4387.41,11293.1,7.2188]]', 'Fishing_Boat', 4578537, 'namalsk',0.55),
	('[0,[4430.48,11303.5,8.4149]]', 'Fishing_Boat', 4578538, 'namalsk',0.55),
	('[250,[4090.02,9225.91,0.00144958]]', 'UAZ_RU', 4578539, 'namalsk',0.65),
	('[180,[4306.51,4719.16,5.83564]]', 'Fishing_Boat', 4578540, 'namalsk',0.55),
	('[34,[2197.75,5762.33,0.00141096]]', 'Old_bike_TK_CIV_EP1', 4578541, 'namalsk',0.95),
	('[88,[2144.77,5754.73,1.84505]]', 'PBX', 4578541, 'namalsk',0.55),
	('[245,[5031.6,6100.52,5.8214]]', 'PBX', 4578542, 'namalsk',0.55),
	('[6,[4877.88,6215.15,0.00143814]]', 'Old_bike_TK_CIV_EP1', 4578543, 'namalsk',0.95),
	('[228,[6044.81,6760.48,2.24013]]', 'PBX', 4578544, 'namalsk',0.55),
	('[126,[7647.15,7406.74,0.00144958]]', 'UralCivil2', 4578545, 'namalsk',0.55),
	('[1,[4991.09,8165.97,0.00148773]]', 'UralCivil', 4578546, 'namalsk',0.55),
*/

/*class CfgVehicleClasses {
 class zombie {
  displayName = "Zombie";
 };
};*/

class CfgAmmo {
 class Default;
 class RocketCore_NAC: Default
 {
  simulation = "shotRocket";
  simulationStep = 0.05;
  timeToLive = 20;
  maneuvrability = 0.0;
  maxControlRange = 0;
  initTime = 0.05;
  thrustTime = 1;
  thrust = 1500;
  visibleFire = 32;
  audibleFire = 32;
  visibleFireTime = 20;
  cost = 2000;
  deflecting = 5;
 };
 class RocketBase_NAC: RocketCore_NAC
 {
	model = "\ca\weapons\AT1";
	hit = 500;
	indirectHit = 150;
	indirectHitRange = 2;
	soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",44.668358,1,1800};
	soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.1,1.5,400};
	soundEngine[] = {"Ca\sounds\Weapons\explosions\noise",0.0031622776,1,20};
	supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,150};
	supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,250};
	maxSpeed = 1;
	initTime = 0;
	thrustTime = 0.2;
	thrust = 2000;
	CraterEffects = "HERocketCrater";
	explosionEffects = "HERocketExplosion";
	muzzleEffect = "BIS_Effects_Rocket";
	effectsMissile = "missile1";
 };
 class R_x57mm_HE_NAC: RocketBase_NAC
 {
	model = "\ca\air\70mmRocket";
	hit = 150;
	indirectHit = 40;
	indirectHitRange = 12;
	cost = 200;
	maxSpeed = 580;
	thrustTime = 1.1;
	thrust = 450;
	sideAirFriction = 0.15;
	fuseDistance = 40;
		timeToLive = 20;
		whistleDist = 24;
	};
};

class CfgMagazines {
	class 1Rnd_HE_M203;
	class 6Rnd_HE_M203_NAC: 1Rnd_HE_M203 {
		count = 6;
		displayName = "$STR_EP1_DN_6Rnd_HE_M203";
		descriptionShort = "$STR_EP1_DSS_6Rnd_HE_M203";
		type = "2*		256";
		picture = "\CA\weapons_E\Data\icons\m_6x40mmHP_CA.paa";
	};
	class 6Rnd_HE_M203_heli_NAC: 6Rnd_HE_M203_NAC {
		maxLeadSpeed = 170;
	};

	class VehicleMagazine;
	class 64Rnd_57mm_NAC: VehicleMagazine {
		scope = 2;
		displayName = "$STR_MN_S5KO";
		ammo = "R_x57mm_HE_NAC";
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"\ca\Weapons\Data\Sound\Rockets\rocketLauncher_Shot21",1.0,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
		count = 64;
	};
	class 14Rnd_57mm_NAC: 64Rnd_57mm_NAC {
		count = 14;
	};
	
	class SkinBase;
	
	class Skin_CamoWinter_DZN: SkinBase {
		scope = 2;
		displayName = "$STR_DZN_CAMOWINTER_SHORT";
		descriptionShort = "$STR_DZN_CAMOWINTER_DESC";
	};
};

class CfgWeapons {
 class Default;
 class MGunCore: Default
 {
  type = "1	+	4";
  dexterity = 0.5;
  aiRateOfFire = 0.5;
  aiRateOfFireDistance = 400;
 };
 class MGun: MGunCore
 {
  type = 65536;
  cursor = "MGCursor";
  cursoraim = "\ca\Weapons\Data\clear_empty";
  cursorSize = 1;
  displayName = "$STR_DN_MGUN";
  nameSound = "mgun";
  reloadTime = 0.25;
  autoFire = 1;
  reloadAction = "ManActReloadMagazine";
  sound[] = {"\ca\Weapons\Data\Sound\M60_SS",1.0,1,1400};
  soundContinuous = 0;
  reloadSound[] = {"",1,1};
  initSpeed = 900;
  flash = "gunfire";
  flashSize = 0.5;
  optics = 0;
 };
 class M32_heli_NAC: MGun
 {
  scope = 1;
  displayName = "$STR_EP1_DN_M32_EP1";
  magazines[] = {"6Rnd_HE_M203_heli_NAC"};
  reloadTime = 0.5;
  magazineReloadTime = 3;
  cursor = "Vehicle_Grenade_E";
  cursoraim = "\ca\Weapons\Data\clear_empty";
  cursorSize = 2;
  sound[] = {"\Ca\sounds\Weapons\cannon\AGS30_shot1_a",3.1622777,1,1200};
  dispersion = 0.007;
  minRange = 8;
  minRangeProbab = 0.6;
  midRange = 450;
  midRangeProbab = 0.7;
  maxRange = 1500;
  maxRangeProbab = 0.1;
  aiRateOfFire = 2.0;
  aiRateOfFireDistance = 500;
  canLock = 0;
 };


 class LauncherCore;
 class RocketPods_NAC: LauncherCore {
  scope = 1;
  cursorAim = "\ca\Weapons\Data\clear_empty";
  cursor = "Rocket";
  cursorSize = 1;
  type = 65536;
  reloadTime = 0.2;
  autoFire = 1;
  minRange = 50;
  minRangeProbab = 0.1;
  midRange = 600;
  midRangeProbab = 0.25;
  maxRange = 2500;
  maxRangeProbab = 0.05;
  canLock = 2;
  nameSound = "rockets";
 };
 class 57mmLauncher_NAC: RocketPods_NAC {
  magazines[] = {"14Rnd_57mm_NAC"};
  modes[] = {"Far_AI","Burst"};
  
  class Far_AI: RocketPods_NAC {
   displayName = "$STR_DN_57MMLAUNCHER_SINGLE";
   minRange = 50;
   minRangeProbab = 0.15;
   midRange = 600;
   midRangeProbab = 0.25;
   maxRange = 2500;
   maxRangeProbab = 0.05;
   reloadTime = 0.08;
   sound[] = {"\ca\Sounds\weapons\cannon\S_5",31.622776,1,1000};
   soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.2,800};
   burst = 2;
   autoFire = 0;
   showToPlayer = 0;
  };
  class Burst: RocketPods_NAC {
   displayName = "$STR_DN_57MMLAUNCHER_BURST";
   burst = 2;
   reloadTime = 0.08;
   autoFire = 1;
   sound[] = {"\ca\Sounds\weapons\cannon\S_5",31.622776,1,1000};
   soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.2,800};
   soundContinuous = 0;
   minRange = 250;
   minRangeProbab = 0.25;
   midRange = 400;
   midRangeProbab = 0.5;
   maxRange = 600;
   maxRangeProbab = 0.1;
  };
 };
};

class WeaponCloudsMGun;
class CfgVehicles {
 /*class RUS_Soldier1;
 class CamoWinter_DZN: RUS_Soldier1 {
  displayName = "$STR_DZN_SPECNAZ_OPERATOR_WINTER";
  model = "\nst\ns_dayz\characters\cw\camowinter_dzn.p3d";
 };*/
 class Man;
 class CAManBase: Man
 {
  class TalkTopics;
  class HitPoints
  {
   class HitHead;
   class HitBody;
  };
 };
 class SoldierEB: CAManBase {
  class TalkTopics: TalkTopics{};
 };
 class CamoWinter_DZNBase: SoldierEB {
  scope = 1;
  faction = "RU";
  genericNames = "RussianMen";
  vehicleClass = "MenRUS";
  cost = 200000;
  enableGPS = 1;
  camouflage = 0.8;
  accuracy = 2.0;
  minFireTime = 2.5;
  class SpeechVariants
  {
   class Default
   {
    speechSingular[] = {"veh_SpecialForce"};
    speechPlural[] = {"veh_SpecialForces"};
   };
   class EN: Default{};
   class CZ
   {
    speechSingular[] = {"veh_SpecialForce_CZ"};
    speechPlural[] = {"veh_SpecialForces_CZ"};
   };
   class CZ_Akuzativ
   {
    speechSingular[] = {"veh_SpecialForce_CZ4P"};
    speechPlural[] = {"veh_SpecialForces_CZ4P"};
   };
   class RU
   {
    speechSingular[] = {"veh_SpecialForce_RU"};
    speechPlural[] = {"veh_SpecialForces_RU"};
   };
  };
  TextPlural = "$STR_DN_SpecialForces";
  TextSingular = "$STR_DN_SpecialForce";
  nameSound = "veh_SpecialForce";
  picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
  icon = "\Ca\characters2\data\icon\i_special_CA.paa";
  portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_ca";
  identityTypes[] = {"Head_RU_Camo","RU_Glasses"};
  faceType = "Man";
  model = "\ca\characters2\Rus\Specnaz";
  threat[] = {1,0.5,0.1};
  class HitPoints: HitPoints
  {
   class HitHead: HitHead
   {
    armor = 0.85;
   };
   class HitBody: HitBody
   {
    armor = 1;
    passThrough = 0.8;
   };
  };
  class Wounds
  {
   tex[] = {};
   mat[] = {"ca\characters2\rus\data\soldier_specnaz_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_speccom.RVmat","ca\characters2\rus\data\soldier_speccom_w1.RVmat","ca\characters2\rus\data\soldier_speccom_w2.RVmat"};
  };
  class TalkTopics: TalkTopics
  {
   core_en = "Core_Full";
   core_cz = "Core_Full";
   core_ru = "Core_Full";
  };
  languages[] = {"RU","CZ","EN"};
 };
 
 class CamoWinter_DZN: CamoWinter_DZNBase {
  scope = 2;
  accuracy = 3.9;
  displayName = "$STR_DZN_SPECNAZ_OPERATOR_WINTER";
  model = "\nst\ns_dayz\characters\cw\camowinter_dzn.p3d";
  faceType = "HeadMask1Black";
  
  class HitPoints: HitPoints
  {
   class HitHead: HitHead
   {
    armor = 0.6;
   };
  };
  canCarryBackPack = 1;
  weapons[] = {"Throw","Put"};
  backpack = "";
  magazines[] = {};
  respawnWeapons[] = {"Throw","Put"};
  respawnMagazines[] = {};
  weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
  canHideBodies = 1;
 };
 
 
 class Air;
 class Helicopter: Air
 {
  class Turrets
  {
   class MainTurret;
  };
  class AnimationSources;
  class HitPoints
  {
   class HitVRotor;
  };
 };
 
 class Mi17_Civilian_base_Ru;
 class Mi17_Civilian_Nam: Mi17_Civilian_base_Ru
 {
  scope = 2;
  vehicleClass = "Air";
  side = 3;
  displayName = "$STR_DN_MI17CIV";
  faction = "CIV";
  model = "\ca\air\Mi_8AMT";
  crew = "Pilot";
  typicalCargo[] = {"Pilot"};
  weapons[] = {};
  accuracy = 1000;
  magazines[] = {};
  hasGunner = 0;
  class Turrets{};
  threat[] = {0.0,0.0,0.0};
  hiddenSelectionsTextures[] = {"\CA\air\data\mi8civil_body_g_CO.paa","\CA\air\data\mi8civil_det_g_CO.paa","ca\air\data\clear_empty.paa","ca\air\data\mi8_decals_ca.paa"};
 };
 
 class Ka60_Base_NAC: Helicopter
 {
  expansion = 4;
  destrType = "DestructWreck";
  armor = 30;
  displayName = "$STR_PMC_DN_KA60";
  model = "\Ca\Air_PMC\Ka60\Ka60_PMC.p3d";
  icon = "\Ca\Air_PMC\data\ui\Icon_ka60_PMC_ca.paa";
  picture = "\Ca\Air_PMC\data\ui\picture_ka60_PMC_ca.paa";
  driverAction = "UH1H_Pilot_EP1";
  driverInAction = "UH1H_Pilot_EP1";
  transportSoldier = 8;
  cargoAction[] = {"UH1H_Cargo_EP1","UH60_Cargo02"};
  cargoIsCoDriver[] = {1,0};
  weapons[] = {"57mmLauncher_NAC"};
  magazines[] = {"14Rnd_57mm_NAC"};
  enableManualFire = 0;
  class HitPoints: HitPoints
  {
   class HitVRotor: HitVRotor
   {
    armor = 1;
   };
  };
  class Turrets: Turrets
  {
   class MainTurret: MainTurret
   {
    body = "mainTurret";
    gun = "mainGun";
    minElev = -50;
    maxElev = 30;
    initElev = 11;
    minTurn = 20;
    maxTurn = 155;
    initTurn = 80;
    soundServo[] = {"",0.01,1.0};
    animationSourceHatch = "";
    stabilizedInAxes = "StabilizedInAxesNone";
    gunBeg = "muzzle_1";
    gunEnd = "chamber_1";
    weapons[] = {"M32_heli_NAC"};
    maxHorizontalRotSpeed = 1.6;
    maxVerticalRotSpeed = 1.6;
    magazines[] = {"6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC","6Rnd_HE_M203_heli_NAC"};
	//magazines[] = {"6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli"};
    gunnerName = "$STR_POSITION_DOORGUNNER";
    gunnerOpticsModel = "\ca\weapons\optika_empty";
    gunnerAction = "Mi8_Gunner";
    gunnerInAction = "Mi8_Gunner";
    commanding = -2;
    primaryGunner = 1;
    class GunFire: WeaponCloudsMGun
    {
     interval = 0.01;
    };
    class ViewOptics
    {
     initAngleX = 0;
     minAngleX = -30;
     maxAngleX = 30;
     initAngleY = 0;
     minAngleY = -100;
     maxAngleY = 100;
     initFov = 0.7;
     minFov = 0.25;
     maxFov = 1.1;
    };
    gunnerCompartments = "Compartment2";
   };
  };
  class Damage
  {
   tex[] = {};
   mat[] = {"Ca\Air_PMC\Ka60\Data\ka60_ext.rvmat","Ca\Air_PMC\Ka60\Data\ka60_ext_damage.rvmat","Ca\Air_PMC\Ka60\Data\ka60_ext_destruct.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass_damage.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
  };
  soundGetIn[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door",0.31622776,1};
  soundGetOut[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door",0.31622776,1,40};
  soundDammage[] = {"Ca\Sounds_PMC\Air_PMC\int-alarm_loop",0.56234133,1};
  soundEngineOnInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_int_1",0.1,1.0};
  soundEngineOnExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_ext_1",0.56234133,1.0,800};
  soundEngineOffInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_int_1",0.1,1.0};
  soundEngineOffExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_ext_1",0.56234133,1.0,800};
  class Sounds
  {
   class Engine
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_r_ext",3.1622777,1.4,800};
    frequency = "rotorSpeed";
    volume = "camPos*((rotorSpeed-0.72)*4)";
   };
   class RotorLowOut
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig",3.1622777,1.0,1400};
    frequency = "rotorSpeed";
    volume = "camPos*(0 max (rotorSpeed-0.1))";
    cone[] = {1.8,3.14,2.0,0.9};
   };
   class RotorHighOut
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist",5.623413,1.0,1500};
    frequency = "rotorSpeed";
    volume = "camPos*10*(0 max (rotorThrust-0.95))";
    cone[] = {1.1,3.14,2.0,0.9};
   };
   class EngineIn
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_int_1",3.1622777,1.0};
    frequency = "rotorSpeed";
    volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
   };
   class RotorLowIn
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig",0.56234133,1.0};
    frequency = "rotorSpeed";
    volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
   };
   class RotorHighIn
   {
    sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist",0.31622776,1.0};
    frequency = "rotorSpeed";
    volume = "(1-camPos)*3*(rotorThrust-0.9)";
   };
  };
  class Library
  {
   libTextDesc = "$STR_PMC_LIB_KA60";
  };
  class AnimationSources: AnimationSources
  {
   class Doors
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class HideWeapon
   {
    source = "user";
    animPeriod = 1e-005;
    initPhase = 0;
   };
  };
 };
 class Ka60_GL_BASE_NAC: Ka60_Base_NAC
 {
  side = 2;
  faction = "NAC";
  crew = "nac_soldier_crew";
  class AnimationSources: AnimationSources
  {
   class ReloadAnim
   {
    source = "reload";
    weapon = "M32_heli_NAC";
   };
   class ReloadMagazine
   {
    source = "reloadmagazine";
    weapon = "M32_heli_NAC";
   };
   class Revolving
   {
    source = "revolving";
    weapon = "M32_heli_NAC";
   };
   class Doors: Doors
   {
    initPhase = 1;
   };
  };
 };
 class Ka60_GL_NAC: Ka60_GL_BASE_NAC
 {
  scope = 2;
  displayName = "$STR_PMC_DN_KA60_GL";
  accuracy = 1000;
 };
 class Ka60_NAC: Ka60_Base_NAC {
  scope = 2;
  side = 2;
  faction = "NAC";
  crew = "nac_soldier_crew";
  displayName = "Ka-60";
  class AnimationSources: AnimationSources
  {
   class HideWeapon: HideWeapon
   {
    initPhase = 1;
   };
   class MainTurret
   {
    source = "user";
    animPeriod = 1e-007;
    initPhase = 0;
   };
   class MainGun
   {
    source = "user";
    animPeriod = 1e-007;
    initPhase = 0;
   };
   class ReloadAnim
   {
    source = "user";
    animPeriod = 1e-005;
    initPhase = 0;
   };
   class ReloadMagazine
   {
    source = "user";
    animPeriod = 1e-005;
    initPhase = 0;
   };
   class Revolving
   {
    source = "user";
    animPeriod = 1e-005;
    initPhase = 0;
   };
  };
  class Turrets{};
  transportSoldier = 9;
 };

 class Citizen1;
 class zZombie_Base: Citizen1
 {
  scope = 1;
  glassesEnabled = 0;
  //vehicleClass = "Zombie";
  displayName = "Zombie";
  fsmDanger = "";
  fsmFormation = "";
  zombieLoot = "civilianNamalsk";
  moves = "CfgMovesZombie";
  isMan = 0;
  weapons[] = {};
  magazines[] = {};
  sensitivity = 4;
  sensitivityEar = 2;
  identityTypes[] = {"zombie1","zombie2"};
  class TalkTopics{};
  languages[] = {};
  class Eventhandlers
  {
   init = "_this call zombie_initialize;";
   local = "diag_log ('Locality Event');if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
  };
  class HitPoints
  {
   class HitHead
   {
    armor = 0.3;
    material = -1;
    name = "head_hit";
    passThrough = 1;
    memoryPoint = "pilot";
   };
   class HitBody: HitHead
   {
    armor = 1.6;
    name = "body";
    memoryPoint = "aimPoint";
   };
   class HitSpine: HitHead
   {
    armor = 1.6;
    name = "Spine2";
    memoryPoint = "aimPoint";
   };
   class HitHands: HitHead
   {
    armor = 0.5;
    material = -1;
    name = "hands";
    passThrough = 1;
   };
   class HitLArm: HitHands
   {
    name = "LeftArm";
    memoryPoint = "lelbow";
   };
   class HitRArm: HitHands
   {
    name = "RightArm";
    memoryPoint = "relbow";
   };
   class HitLForeArm: HitHands
   {
    name = "LeftForeArm";
    memoryPoint = "lwrist";
   };
   class HitRForeArm: HitHands
   {
    name = "RightForeArm";
    memoryPoint = "rwrist";
   };
   class HitLHand: HitHands
   {
    name = "LeftHand";
    memoryPoint = "LeftHandMiddle1";
   };
   class HitRHand: HitHands
   {
    name = "RightHand";
    memoryPoint = "RightHandMiddle1";
   };
   class HitLegs: HitHands
   {
    name = "legs";
    memoryPoint = "pelvis";
   };
   class HitLLeg: HitHands
   {
    name = "LeftLeg";
    memoryPoint = "lknee";
   };
   class HitLLegUp: HitHands
   {
    name = "LeftUpLeg";
    memoryPoint = "lfemur";
   };
   class HitRLeg: HitHands
   {
    name = "RightLeg";
    memoryPoint = "rknee";
   };
   class HitRLegUp: HitHands
   {
    name = "RightUpLeg";
    memoryPoint = "rfemur";
   };
  };
 };

 class z_soldier: zZombie_Base
 {
  displayName = "Zombie Soldier";
  model = "\ca\characters2\Blufor\Soldier_Light";
  zombieLoot = "military";
  class HitPoints: HitPoints
  {
   class HitHead
   {
    armor = 0.3;
    material = -1;
    name = "head_hit";
    passThrough = 1;
   };
   class HitBody
   {
    armor = 2.4;
    material = -1;
    name = "body";
    passThrough = 1;
   };
   class HitHands
   {
    armor = 1;
    material = -1;
    name = "hands";
    passThrough = 1;
   };
   class HitLegs
   {
    armor = 1;
    material = -1;
    name = "legs";
    passThrough = 1;
   };
  };
  class Wounds
  {
   tex[] = {};
   mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat","ca\characters2\Blufor\data\Soldier_W1.RVmat","ca\characters2\Blufor\data\Soldier_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_W1.RVmat","ca\characters2\Blufor\data\Soldier_Light_W2.RVmat","ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL.RVmat","ca\characters2\Blufor\data\Soldier_GL_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL_W2.RVmat","ca\characters2\Blufor\data\Soldier_NCO.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat","ca\characters2\Blufor\data\Soldier_MG.RVmat","ca\characters2\Blufor\data\Soldier_MG_W1.RVmat","ca\characters2\Blufor\data\Soldier_MG_W2.RVmat","ca\characters2\Blufor\data\Soldier_AT.RVmat","ca\characters2\Blufor\data\Soldier_AT_W1.RVmat","ca\characters2\Blufor\data\Soldier_AT_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO.RVmat","ca\characters2\Blufor\data\Soldier_CO_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
  };
 };
 
 class z_soldier_heavy: z_soldier
 {
  displayName = "Zombie Soldier (Heavy)";
  model = "\ca\characters2\Blufor\Soldier";
  class HitPoints: HitPoints
  {
   class HitHead
   {
    armor = 1;
    material = -1;
    name = "head_hit";
    passThrough = 1;
   };
   class HitBody
   {
    armor = 2.4;
    material = -1;
    name = "body";
    passThrough = 1;
   };
   class HitHands
   {
    armor = 1;
    material = -1;
    name = "hands";
    passThrough = 1;
   };
   class HitLegs
   {
    armor = 1;
    material = -1;
    name = "legs";
    passThrough = 1;
   };
  };
 };
 // US
 class z_us_soldier: z_soldier_heavy {
  displayName = "Zombie Soldier USMC (Heavy)";
  model = "\CA\characters2\USMC\USMC_soldier";
 };
 class z_us_soldier_light: z_soldier {
  displayName = "Zombie Soldier USMC (Light)";
  model = "\CA\characters2\USMC\USMC_soldier_Light";
 };
 
 // RU
 class z_ru_soldier: z_soldier_heavy {
  displayName = "Zombie Soldier RU (Heavy)";
  model = "\CA\characters2\Rus\Soldier";
 };
 class z_ru_soldier_light: z_soldier {
  displayName = "Zombie Soldier RU (Light)";
  model = "\CA\characters2\Rus\Soldier_Light";
 };
 class z_ru_soldier_pilot: z_soldier {
  displayName = "Zombie Pilot RU (Light)";
  model = "\CA\characters2\Rus\Soldier_Pilot";
 };
 
 // NAC
 class z_nac_soldier: z_soldier {
  displayName = "Zombie Soldier NAC (Light)";
  model = "\nst\ns_fraction\nac\nac_soldier_2";
 };
  class z_nac_soldier_heavy: z_soldier_heavy {
  displayName = "Zombie Soldier NAC (Heavy)";
  model = "\nst\ns_fraction\nac\nac_soldier_1";
 };
 
 
};

class CfgLoot {
	civilianNamalsk[] = {
		{ "TrashTinCan","TrashJackDaniels","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","8Rnd_9x18_Makarov","7Rnd_45ACP_1911","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets","ItemBandage","ItemPainkiller" },
		{ 0.09,0.09,0.09,0.03,0.03,0.01,0.01,0.01,0.01,0.07,0.05,0.05,0.05,0.06,0.06 }};
	foodNamalsk[] = {
		{ "TrashTinCan","TrashJackDaniels","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","ItemBandage" },
		{ 0.13,0.13,0.13,0.04,0.04,0.04,0.04,0.04,0.04,0.06 }};
	genericNamalsk[] = {
		{ "TrashTinCan","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","TrashJackDaniels","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","ItemWaterbottleUnfilled","ItemWaterbottle","ItemBandage","7Rnd_45ACP_1911","5x_22_LR_17_HMR","10x_303","6Rnd_45ACP","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets","8Rnd_9x18_Makarov","15Rnd_W1866_Slug","BoltSteel","HandRoadFlare","ItemPainkiller","HandChemGreen","HandChemBlue","HandChemRed","ItemHeatPack" },
		{ 0.06,0.06,0.01,0.01,0.04,0.01,0.01,0.01,0.01,0.01,0.01,0.11,0.03,0.01,0.04,0.04,0.05,0.05,0.09,0.02,0.04,0.07,0.02,0.01,0.03,0.03,0.04 }};
	genericNamalskNoFood[] = {
		{ "TrashTinCan","ItemSodaEmpty","TrashJackDaniels","ItemBandage","7Rnd_45ACP_1911","5x_22_LR_17_HMR","10x_303","6Rnd_45ACP","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets","8Rnd_9x18_Makarov","15Rnd_W1866_Slug","BoltSteel","HandRoadFlare","ItemPainkiller","HandChemGreen","HandChemBlue","HandChemRed","ItemHeatPack" },
		{ 0.06,0.06,0.04,0.11,0.03,0.01,0.04,0.04,0.05,0.05,0.09,0.02,0.04,0.07,0.02,0.01,0.03,0.03,0.04 }};
	militaryNAC[] = {
		{ "TrashTinCan","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","ItemBandage","ItemPainkiller","ItemMorphine","nsw_er7mm","30Rnd_556x45_Stanag","20Rnd_762x51_DMR","17Rnd_9x19_glock17","15Rnd_9x19_M9SD","15Rnd_9x19_M9","30Rnd_762x39_AK47","30Rnd_545x39_AK","5Rnd_762x51_M24","10Rnd_127x99_m107","8Rnd_B_Beneli_74Slug","1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","1Rnd_Smoke_M203","200Rnd_556x45_M249","HandGrenade_west","SmokeShell","SmokeShellRed","SmokeShellGreen","8Rnd_B_Beneli_Pellets","30Rnd_556x45_StanagSD","30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","100Rnd_762x51_M240","HandChemGreen","HandChemBlue","HandChemRed","ItemHeatPack" },
		{ 0.18,0.09,0.01,0.01,0.04,0.04,0.01,0.01,0.04,0.04,0.05,0.01,0.02,0.04,0.04,0.01,0.01,0.04,0.01,0.01,0.01,0.01,0.01,0.01,0.04,0.02,0.02,0.04,0.01,0.02,0.01,0.01,0.02,0.02,0.02,0.04 }};
};

class CfgBuildingLoot {
	class Default;

	class Residential;
	class ResidentialNamalsk: Residential {
		itemType[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","genericNamalsk" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{ "CZ_VestPouch_EP1","object" },
			{ "DZ_CivilBackpack_EP1","object" },
			{ "DZ_ALICE_Pack_EP1","object" },
			{ "Winchester1866","weapon" },
			{ "WeaponHolder_ItemTent","object" },
			{ "","military" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{ "Skin_Camo1_DZ","magazine" },
			{ "Skin_Sniper1_DZ","magazine" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{ "MR43","weapon" }
		};
		// generic loot chance reduced from 2 to 0.10
		itemChance[] = {0.01,0.15,0.05,0.03,0.13,0.05,0.03,0.08,0.06,0.10,0.06,0.04,0.01,0.03,0.03,0.01,0.01,0.03,0.5,0.01,0.06,0.06,0.01,0.01,0.08,0.03};
	};
	class OfficeNamalsk: ResidentialNamalsk {
		maxRoaming = 6;
	};
	
	class Industrial;
	class IndustrialNamalsk: Industrial {
		itemType[] = {
			{ "","genericNamalskNoFood" },
			{ "","trash" },
			{ "","military" },
			{ "WeaponHolder_PartGeneric","object" },
			{ "WeaponHolder_PartWheel","object" },
			{ "WeaponHolder_PartFueltank","object" },
			{ "WeaponHolder_PartEngine","object" },
			{ "WeaponHolder_PartGlass","object" },
			{ "WeaponHolder_PartVRotor","object" },
			{ "WeaponHolder_ItemJerrycan","object" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{ "ItemTankTrap","magazine" }
		};
		// generic loot chance reduced from 0.18 to 0.10
		// trash loot chance to 0.34
		itemChance[] = {0.10,0.34,0.04,0.04,0.05,0.02,0.01,0.04,0.01,0.04,0.11,0.07,0.02,0.06,0.04};
	};
	
	class Farm ;
	class FarmNamalsk: Farm {
		itemType[] = {
			{ "WeaponHolder_ItemJerrycan","object" },
			{ "","genericNamalsk" },
			{ "huntingrifle","weapon" },
			{ "LeeEnfield","weapon" },
			{ "Winchester1866","weapon" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "PartWoodPile","magazine" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "MR43","weapon" },
			{ "TrapBear","magazine" },
			{"","foodNamalsk"}
		};
		// jerry can loot chance reduced from 0.06 to 0.02
		// generic loot chance reduced from 0.28 to 0.02
		// trash 0.22 -> 0.34
		itemChance[] = {0.02,0.02,0.01,0.04,0.03,0.34,0.03,0.11,0.17,0.06,0.01,0.01};
	};

	class HeliCrash;
	class HeliCrashNamalsk: HeliCrash {
		zombieChance = 0;
		maxRoaming = 5;
		zombieClass[] = {"z_ru_soldier_pilot","z_ru_soldier_light"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "FN_FAL","weapon" },
			{ "bizon_silenced","weapon" },
			{ "M14_EP1","weapon" },
			{ "FN_FAL_ANPVS4","weapon" },
			{ "M107_DZ","weapon" },
			{ "BAF_AS50_scoped","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M249_DZ","weapon" },
			{ "BAF_L85A2_UGL_ACOG","weapon" },
			{ "DMR","weapon" },
			{ "","military" },
			{ "","medical" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "Skin_Camo1_DZ","magazine" },
			{ "Skin_Sniper1_DZ","magazine" },
			{ "Skin_CamoWinter_DZN","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" },
			{ "BrokenItemRadio","generic" }
		};
		itemChance[] = {0.02,0.05,0.05,0.02,0.01,0.02,0.03,0.05,0.01,0.1,1,0.5,0.1,0.01,0.1,0.1,0.08,0.05,0.08,0.04,0.04,0.02};
	};

	class Hospital;
	class Military;
	class MilitaryNamalsk: Military {
		itemType[] = {
			{ "M9","weapon" },
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M9SD","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "M1014","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "MP5A5","weapon" },
			{ "MP5SD","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","genericNamalskNoFood" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" }
		};
		itemChance[] = {0.05,0.05,0.01,0.02,0.2,0.15,0.01,0.08,0.05,0.05,0.01,0.1,0.01,0.02,0.01,0.05,0.08,0.1,0.04,0.02,0.01,0.06,0.1,0.1,0.01,0.05,0.06,0.04,0.02,0.1,0.08,2.5,0.05,0.02,0.04,0.04};
		zombieClass[] = {"z_ru_soldier","z_ru_soldier_light","z_us_soldier","z_us_soldier_light"};
	};
	
	class MilitaryNamalskWinter: Military {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_ru_soldier","z_ru_soldier_light","z_us_soldier","z_us_soldier_light"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M9","weapon" },
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M9SD","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "M1014","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "MP5A5","weapon" },
			{ "MP5SD","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","genericNamalskNoFood" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" },
			{ "Skin_CamoWinter_DZN","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" }
		};
		itemChance[] = {0.05,0.05,0.01,0.02,0.2,0.15,0.01,0.08,0.05,0.05,0.01,0.1,0.01,0.02,0.01,0.05,0.08,0.1,0.04,0.02,0.01,0.06,0.1,0.1,0.01,0.05,0.06,0.04,0.02,0.1,0.08,2.5,0.05,0.02,0.08,0.03,0.03};
	};
	
	class MilitarySpecial;
	class MilitarySpecialNamalsk : MilitarySpecial {
		zombieClass[] = {"z_ru_soldier","z_ru_soldier_light","z_us_soldier","z_us_soldier_light"};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "M136","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "M107_DZ","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "NVGoggles","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","genericNamalskNoFood" },
			{ "","military" },
			{ "PipeBomb","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" }
		};
		itemChance[] = {0.1,0.05,0.01,0.02,0.01,0.2,0.1,0.02,0.1,0.1,0.1,0.01,0.01,0.2,0.01,0.02,0.1,0.03,0.2,0.1,0.2,0.01,0.04,0.05,0.02,0.01,0.08,0.04,0.02,0.01,0.1,0.05,0.15,0.01,0.03,0.01,0.02,0.03,0.02,0.3,0.08,5.0,0.01,0.03,0.03};
	};
	
	class MilitarySpecialNamalskWinter: MilitarySpecialNamalsk {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		//zombieClass[] = {"z_ru_soldier","z_ru_soldier_light","z_us_soldier","z_us_soldier_light"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "M136","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "M107_DZ","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "NVGoggles","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","genericNamalskNoFood" },
			{ "","military" },
			{ "PipeBomb","magazine" },
			{ "Skin_CamoWinter_DZN","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" },
			{ "BrokenItemRadio","generic" }
		};
		itemChance[] = {0.1,0.05,0.01,0.02,0.01,0.2,0.1,0.02,0.1,0.1,0.1,0.01,0.01,0.2,0.01,0.02,0.1,0.03,0.2,0.1,0.2,0.01,0.04,0.05,0.02,0.01,0.08,0.04,0.02,0.01,0.1,0.05,0.15,0.01,0.03,0.01,0.02,0.03,0.02,0.3,0.08,5.0,0.01,0.08,0.03,0.03,0.01};
	};
	class MilitarySpecialNAC: MilitarySpecial {
		zombieChance = 0.4;
		minRoaming = 8;
		maxRoaming = 9;
		zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "nsw_er7s","weapon" },
			{ "nsw_er7a","weapon" },
			{ "M9SD","weapon" },
			{ "M136","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "M107_DZ","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "NVGoggles","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","genericNamalskNoFood" },
			{ "","militaryNAC" },
			{ "PipeBomb","magazine" },
			{ "Skin_CamoWinter_DZN","magazine" },
			{ "BrokenItemGPS","weapon" },
			{ "BrokenNVGoggles","weapon" },
			{ "BrokenItemRadio","generic" }
		};
		itemChance[] = {0.1,0.05,0.01,0.01,0.01,0.02,0.01,0.2,0.1,0.02,0.1,0.1,0.1,0.01,0.01,0.2,0.01,0.02,0.1,0.03,0.2,0.1,0.2,0.01,0.04,0.05,0.02,0.01,0.08,0.04,0.02,0.01,0.1,0.05,0.15,0.01,0.03,0.01,0.02,0.03,0.02,0.3,0.08,5.0,0.01,0.08,0.03,0.03,0.01};
	};
	class Church;

	// END

	class Land_Mil_Barracks_i: MilitarySpecialNamalsk {
		lootPos[] = {
			{ 5.39038,-1.75684,-1.09824 },
			{ 1.46753,-0.131836,-1.09824 },
			{ 1.29395,-2.16211,-1.09824 },
			{ -1.78394,-0.168945,-1.09824 },
			{ -1.80615,-1.97656,-1.09824 },
			{ -4.77881,0.0488281,-1.09824 },
			{ -5.39258,-2.11816,-1.09824 },
			{ -5.47046,2.58105,-1.09824 },
			{ -8.32593,-0.144531,-1.09824 },
			{ -9.14966,-2.55859,-1.09824 },
			{ -1.95288,2.57715,-1.09824 },
			{ 5.46362,2.57813,-1.09824 }
		};
	};
	class Land_budova4_winter: MilitarySpecialNamalskWinter {
		minRoaming = 5;
		maxRoaming = 7;
		lootPos[] = {
			{ 5.39038,-1.75684,-1.09824 },
			{ 1.46753,-0.131836,-1.09824 },
			{ 1.29395,-2.16211,-1.09824 },
			{ -1.78394,-0.168945,-1.09824 },
			{ -1.80615,-1.97656,-1.09824 },
			{ -4.77881,0.0488281,-1.09824 },
			{ -5.39258,-2.11816,-1.09824 },
			{ -5.47046,2.58105,-1.09824 },
			{ -8.32593,-0.144531,-1.09824 },
			{ -9.14966,-2.55859,-1.09824 },
			{ -1.95288,2.57715,-1.09824 },
			{ 5.46362,2.57813,-1.09824 }
		};
	};
	
	//--------------------------------------------------------------------------
	// ns.pbo
	//--------------------------------------------------------------------------
	// ns/build/fact1
	//--------------------------------------------------------------------------
	class Land_f_b1: IndustrialNamalsk {
		zombieChance = 1;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{ -3.6084,3.56201,-3.11393 },
			{ 2.83594,3.97314,-3.11407 },
			{ 3.17285,-0.852051,-3.1124 },
			{ -3.72266,-1.16895,-2.25318 },
			{ -2.46777,-4.1709,-2.25317 }
		};
	};
	//--------------------------------------------------------------------------
	// ns/build/fact2
	//--------------------------------------------------------------------------
	class Land_f_b2: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{-7.11816,2.13281,-4.99346},
			{-2.95898,2.8457,-5.00836},
			{0.927246,-1.60645,-4.24147},
			{6.79736,-2.41211,-5.00836},
			{4.63672,3.35547,-5.00836}
		};
	};
	
	
	//--------------------------------------------------------------------------
	// ns2.pbo
	//--------------------------------------------------------------------------
	
	class Land_seb_bouda_plech: FarmNamalsk {
		zombieChance = 0;
		maxRoaming = 4;
		minRoaming = 2;
		lootChance = 0.20;
		lootPos[] = {
			{ 0.593018,-1.45215,-1.34512 },
			{ 0.39209,0.981445,-1.33693 }
		};
		hangPos[] = {
			{-4.87939,0.0661621,-1.11251}
		};
	};
	
	class land_domek_podhradi_1: FarmNamalsk {
		zombieChance = 1;
		maxRoaming = 7;
		minRoaming = 3;
		lootPos[] = {
			{-5.55652,3.28564,-2.75047},
			{-5.55786,0.138184,-2.75047},
			{-5.28076,-3.31104,-2.75047},
			{-0.597046,-2.96484,-2.75047},
			{5.40051,-3.25635,-2.75047},
			{-3.15308,4.0083,-2.73909},
			{-2.41602,2.35059,-2.73911},
			{0.406128,2.63428,-2.73911},
			{5.44421,2.96973,-2.73911},
			{4.48438,-1.0918,-2.73915},
			{-0.842651,-1.51709,-2.73916}
		};
	};
	
	class Land_cast2: IndustrialNamalsk {
		zombieChance = 0.25;
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{ 1.18555,14.562,-4.38393 },
			{ 1.37891,10.698,-4.38393 },
			{ -2.14453,10.2327,-4.38393 },
			{ -1.46484,2.30029,-4.38393 },
			{ -1.29297,-6.37109,-4.38393 },
			{ -3.73047,-7.50098,-4.38393 },
			{ 1.15723,0.933105,-1.07131 }
		};		
	};
	
	class Land_cast1: IndustrialNamalsk {
		zombieChance = 0.25;
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{1.50049,16.666,-4.38393 },
			{-4.19385,15.9736,-4.38392 },
			{-3.89575,10.541,-4.38392 },
			{1.77856,10.5762,-4.38393 },
			{ -1.77515,5.05273,-4.38392 },
			{-1.39502,-3.03027,-4.38393},
			{-1.69482,-10.4023,-4.38393},
			{1.13867,-4.04297,-1.06585},
			{1.052,0.420898,-1.06585}
			
		};
	};
	
	class Land_vstup: IndustrialNamalsk {
		zombieChance = 0.95;
		maxRoaming = 6;
		minRoaming = 2;
		lootPos[] = {
			{7.12549,-1.33887,-4.59699},
			{1.17773,-1.4834,-4.59699},
			{1.17773,-1.4834,-4.59699},
			{-17.2502,-1.67188,-4.59699},
			{1.48389,-1.48828,-1.53312},
			{-6.04932,-1.21875,-1.53312},
			{-12.7603,-1.41406,-1.53312}
		};
	};
	
	class Land_trubice: IndustrialNamalsk {
		lootChance = 0.1;
		lootPos[] = {
			{-2.80566,-2.47656,-2.47066},
			{-2.25024,1.49512,2.59438},
			{3.47534,1.54102,2.59438}
		};
	};
	
	class Land_tovarna1: IndustrialNamalsk {
		zombieChance = 0.95;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{-3.1543,7.20459,-5.75442},
			{2.99902,5.49048,-5.75442},
			{-10.0596,5.69507,-5.75442},
			{-1.34863,0.932617,-5.75442},
			{2.09961,-7.2124,-5.75442},
			{-11.1094,-3.37085,-5.75442},
			{-9.91406,-3.76904,-2.8108},
			{3.13379,-7.10693,-0.320107},
			{-11.5898,3.40259,-0.320107},
			{3.19922,-0.252197,-0.320107},
			{-10.5732,-6.38599,2.17996},
			{-4.04883,2.7605,2.17997},
			{1.83301,0.210449,2.17997},
			{-0.316406,-6.80176,2.17997},
			{3.20605,-7.06055,2.17997},
			{-0.736328,-3.0481,4.82993},
			{-2.03223,-5.41699,4.82978},
			{-9.33398,0.962891,4.82972},
			{-2.02734,0.649414,4.82983},
			{5.33301,4.79395,-0.320107},
			{-2.53125,6.92676,-3.07503},
		};
	};
	
	class Land_velkyjerab: IndustrialNamalsk {
		lootPos[] = {
			{-15.6653,1.33887,23.8359},
			{-15.4216,0.144531,-30.6613},
			{-15.6289,6.5752,-31.0776},
			{-12.8218,-5.68262,-31.0777}
		};
	};
	
	class Land_panelova: IndustrialNamalsk {
		zombieChance = 0.55;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{7.83398,12.6333,3.37141},
			{0.921875,11.8069,3.37141},
			{-0.09375,1.87793,3.37141},
			{-11.5742,-0.410645,3.34401},
			{-7.13672,-6.875,3.34401},
			{0.817383,-13.8308,3.37141},
			{13.5068,-3.95898,3.37274},
			{13.2266,-14.0635,-4.04666},
			{8.61719,-5.5498,-4.08966},
			{3.70313,2.89233,-4.08966},
			{-0.500977,13.8748,-4.08966},
			{-14.3691,0.321533,-4.08966},
			{-11.9482,-6.87549,-4.08966},
			{2.41797,-3.73071,-4.08966},
			{-1.01074,-13.5671,-4.08966},
			{15.9746,-11.2158,-11.097},
			{13.4814,-15.0759,-11.0971},
			{-1.39844,-11.2151,-11.097},
			{-5.16992,-0.561523,-11.097},
			{-15.2637,-2.92065,-11.097},
			{-4.2666,5.12207,-11.097},
			{5.87695,9.61719,-11.0965}
		};
	};
	
	class Land_garaze: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 5;
		minRoaming = 2;
		lootPos[] = {
			{-5.49023,-5.04785,-2.18587},
			{5.47363,-4.67139,-2.12658},
			{4.56348,0.874268,-2.12658},
			{4.89746,4.26172,-2.12658},
			{-0.548828,5.15161,-2.12658}
		};
	};
	
	class Land_part1: IndustrialNamalsk {
		lootPos[] = {
			{-0.632324,-6.71582,-9.17198},
			{-1.96997,-2.79883,-9.1134},
			{-1.52979,-0.792969,-8.23541},
			{0.67627,1.7959,-8.23541},
			{4.4165,4.71289,-9.1134},
			{4.70776,0.514648,-9.1134},
			{2.0061,4.71973,-4.402},
			{0.401367,3.15527,-4.402},
			{-3.59668,4.22949,-4.402}
		};
	};
	
	class Land_vez: MilitaryNamalsk {
		lootChance = 0.1;
		zombieChance = 0;
		maxRoaming = 3;
		minRoaming = 1;
		lootPos[] = {
			{ -0.214844,1.2146,1.36331 }
		};
	};
	
	class Land_mil_barracks_l: MilitaryNamalsk {
		lootChance = 0.1;
		maxRoaming = 12;
		minRoaming = 6;
		lootPos[] = {
			{ -0.249023,-5.15039,-2.1998 },
			{ -6.55469,-8.65381,-2.19978 }
		};
	};
	
	class Land_mol_cr: FarmNamalsk {
		lootPos[] = {
			{7.45459,4.25195,-3.66339}
		};
	};
	
	class Land_marsh1: FarmNamalsk {
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{-3.854,4.59521,-4.0567},
			{1.81787,4.74561,-3.95897},
			{4.85156,3.41211,-3.95897},
			{3.84375,6.85791,-3.95897},
			{4.11572,0.111816,-3.95897},
			{1.5293,-3.46436,-3.95897},
			{4.2749,-5.03223,-3.95897},
			{-0.933594,-5.70654,-3.95897}
		};
	};
	
	class Land_marsh2: FarmNamalsk {
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{5.96582,10.5786,-4.28434},
			{1.90234,10.1504,-4.28771},
			{-2.39111,10.4971,-4.29358},
			{-7.30078,8.58057,-4.3015},
			{-6.87842,1.24951,-4.30205},
			{-7.43652,-2.28467,-4.30262},
			{-7.4292,-6.58594,-4.30256},
			{-3.02051,-11.0151,-4.29419},
			{-6.02832,1.48242,-0.271424]},
			{0.791016,10.0015,-0.573923},
			{4.71875,9.60059,-0.873729}
		};
	};
	
	class Land_fuelstation_w: IndustrialNamalsk {
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{1.9585,1.40186,-2.28091},
			{1.27686,6.30518,-2.28091},
			{-6.00586,2.67871,-2.28091}
		};
	};
	
	class Land_nadrazi_nastupiste: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {
			{-22.5752,0.11377,1.04783},
			{-7.74854,0.75293,1.04783},
			{17.5366,-0.0385742,1.04783}
		};
	};
	
	class Land_leseni2x: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 0;
		lootChance = 0.35;
		lootPos[] = {
			{-2.37988,0.24707,0.548668},
			{0.181641,-0.271484,2.55466}
		};
		hangPos[] = {
			{0.705566,-2.94971,-1.50913}
		};
	};
	
	class Land_nasypka: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {
			{-1.25977,-0.0585938,6.56824}
		};
	};
	
	class Land_aii_upper_part: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {
			{-0.616211,-3.80762,-2.31434},
			{-2.62158,-1.05127,-2.32196},
			{-2.30322,2.0415,-2.32196}
		};
	};
	
	class Land_AII_middle_floor: MilitarySpecialNAC {
		zombieChance = 1;
		maxRoaming = 0;
		lootPos[] = {
			{-8.04248,2.97803,0.513313},
			{-7.43799,5.32813,0.509796},
			{-6.04932,7.77393,0.514614},
			{-8.36328,0.00341797,0.517597},
			{-14.0049,-0.404297,0.520267},
			{-13.9697,8.60498,0.513088},
			{-10.5947,5.01855,0.511402},
			{-12.9834,3.98926,-4.63377},
			{-14.6133,-1.96094,-4.63377},
			{-7.92627,0.418945,-4.63377},
			{-6.30078,7.73779,-4.63377},
			{-6.61279,16.6152,-4.63377},
			{-3.1626,10.4932,-4.63377},
			{-3.50928,16.2002,-4.63377},
			{0.759277,10.9985,-4.63377},
			{6.85645,16.7383,-4.63377},
			{5.38086,12.8862,-4.63377},
			{0.82959,0.162598,-4.63377},
			{-3.99414,-8.67432,-4.63377},
			{-2.20215,-12.4722,-4.63377},
			{-0.178711,-17.5605,-4.63377},
			{5.88232,-17.9092,-4.63377},
			{5.50195,-3.75342,-4.63377},
			{2.66748,7.82227,-4.63377},
			{6.9707,0.976563,-4.63377},
			{8.64844,-4.30127,-4.52865},
			{11.7134,3.9375,-4.63377},
			{9.25049,7.09912,-4.63377}
		};
		hangPos[] = {
			{-4.37793,0.299316,-4.63377}
		};
	};
	
	class Land_aii_last_floor: MilitarySpecialNAC {
		zombieChance = 1;
		maxRoaming = 0;
		lootPos[] = {
			{7.45215,18.2671,3.26546},
			{-3.09863,10.6309,4.62436},
			{-0.255859,6.55225,4.61291},
			{-3.78564,3.06689,5.46183},
			{-10.5859,10.2637,5.43586},
			{-12.3218,17.8242,4.61173},
			{-13.3569,21.8667,4.61024},
			{-11.9854,5.8252,5.44754},
			{-21.3906,-2.71094,5.45112},
			{-20.6099,-10.4277,5.44901},
			{-5.8208,-17.4199,5.44978},
			{-9.85449,-18.7148,3.43609},
			{5.52246,-19.4976,5.50764},
			{5.47461,-8.59082,6.4439}
		};
		hangPos[] = {
			{-6.53662,11.2119,4.60709}
		};
	};
	
	class Land_misc_waterstation: IndustrialNamalsk {
		lootPos[] = {
			{-0.213623,3.01855,-1.59381}
		};
	};
	
	class Land_vys_antena: MilitaryNamalskWinter {
		maxRoaming = 10;
		minRoaming = 7;
		lootPos[] = {
			{-2.58887,0.30957,-29.5905},
			{-0.194336,-2.19678,-29.5899},
			{2.23975,-0.194336,-29.5867},
			{-0.0415039,2.13037,-29.5873},
			{-2.14746,0.0600586,-22.9109},
			{0.108887,-2.2876,-22.9104},
			{1.88086,-0.145996,-22.9076},
			{0.112305,2.14648,-22.9078},
			{-2.52734,-0.115234,-16.8096},
			{-0.291504,-1.83594,-16.8087},
			{2.06494,-0.148926,-16.8057},
			{-0.241699,2.14697,-16.8063},
			{-0.679199,0.0893555,-11.3209},
			{-0.741211,0.0454102,-5.58041},
			{-0.741211,0.0454102,-5.58041}
		};
	};
	
	class Land_vys_budova_p1: MilitarySpecialNamalskWinter {
		maxRoaming = 10;
		minRoaming = 7;
		lootPos[] = {
			{0.661621,8.63379,-3.86072},
			{-1.24121,6.55811,-3.86069},
			{-6.1748,9.22754,-3.86072},
			{-5.38184,2.78174,-3.86072},
			{-5.40479,-1.49365,-3.87015},
			{-5.56494,-9.17041,-3.86069},
			{-4.08496,-10.9141,-3.86069},
			{-4.02686,-3.23291,-3.86871},
			{0.0966797,3.51123,-3.86072},
			{3.85352,3.39404,-3.86072},
			{-1.09521,-11.1416,-3.86069},
			{2.70947,-3.93896,-3.8566},
			{3.13135,-7.99756,-3.85718},
			{3.98193,-11.6318,-3.85632},
			{-1.23486,3.77734,-1.30765},
			{1.01709,-1.43164,-1.30765},
			{-0.540527,3.59424,1.22354},
			{1.6333,-1.36572,1.22354},
			{-1.91992,-1.67725,1.22354},
			{1.48438,-1.8252,4.64752},
			{-3.00195,3.05811,4.69885},
			{-1.81348,-6.23584,4.70062}
		};
	};
	
	class Land_vys_budova_p2: IndustrialNamalsk {
		lootPos[] = {
			{-0.838379,3.53467,-0.755798},
			{-0.500977,-0.849609,-0.720856},
			{-0.730957,-3.11719,0.742432},
			{-5.80322,0.575195,-0.755829},
			{-3.38232,-3.52539,-0.755829},
			{-5.02344,2.15869,-0.755829}
		};
	};
	
	class Land_seb_mine_near: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{8.26221,-6.49414,-8.8979},
			{4.95752,-5.74219,-8.8979},
			{6.75049,9.6665,-11.9873}
		};
	};
	
	class Land_seb_mine_main_opt: IndustrialNamalsk {
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{6.5918,-0.612793,-4.79192},
			{-5.88281,4.51221,-4.71998},
			{0.225098,4.50293,-4.72003},
			{-5.97461,-0.39502,-4.747},
			{0.21875,1.4585,-0.995667},
			{0.443359,3.97266,-0.990997},
			{-3.64307,4.96094,-0.989159},
			{4.25928,2.02979,5.09215},
			{0.400879,-0.485352,7.8684},
			{-0.702148,-4.14941,7.8684},
			{-5.52832,-2.8252,7.8684},
			{-4.75391,1.5752,7.8684},
			{-2.1416,1.20703,11.2794},
			{1.23779,1.45752,14.6913},
			{-5.53662,-2.33301,14.6913},
			{0.824219,-3.91943,14.6913},
			{2.94971,-0.760254,14.6913}
		};
	};
	
	class Land_seb_near_fac: IndustrialNamalsk {
		maxRoaming = 10;
		minRoaming = 7;
		lootPos[] = {
			{-3.58838,-21.2261,-8.50699},
			{1.86035,-21.6973,-8.507},
			{8.77832,-21.5713,-8.50808},
			{15.7319,-21.4087,-8.55051},
			{21.6479,-22.1338,-8.61447},
			{-17.9043,-27.3433,-8.5103},
			{-23.2739,-12.668,-8.50322},
			{-5.33691,-14.9141,-8.50397},
			{-3.97021,-18.1221,-8.50549},
			{-24.0117,-23.2705,-5.29639},
			{-23.9683,-19.3896,-2.8065},
			{-19.7183,-23.144,1.75552},
			{-18.5166,-16.1753,4.11495},
			{-15.4204,-23.4824,1.75552},
			{-7.76172,-19.2803,1.75552},
			{-8.28271,-23.8257,1.75552}
		};
	};
	
	class Land_bouda2_vnitrek: IndustrialNamalsk {
		lootPos[] = {
			{-1.78613,0.463867,-0.610508},
			{0.900391,-0.374023,-0.610508}
		};
	};
	
	class Land_seb_main_fac: IndustrialNamalsk {
		maxRoaming = 10;
		minRoaming = 7;
		lootPos[] = {
			{3.51758,-4.93701,-5.83689},
			{4.66016,-0.00537109,-5.83805},
			{21.6211,0.172852,-5.84076},
			{17.8408,-1.49512,-5.79222},
			{21.1563,-5.41699,-5.77856},
			{-6.87988,-0.224609,-6.03392},
			{-1.45117,-0.0161133,-5.94843},
			{26.4512,13.3154,-2.60049},
			{5.15918,16.2822,8.63872},
			{-0.5,4.12012,4.16873},
			{-7.09375,3.97266,4.16873},
			{-5.49707,11.7754,4.16873},
			{-10.1738,-24.9785,5.61401},
			{-26.1484,-14.4658,5.5868},
			{2.59277,9.88086,8.63872},
			{22.4229,4.43213,8.63872},
			{21.9668,15.8062,8.63872},
			{16.7783,17.397,4.16873},
			{9.14063,16.4912,4.16873},
			{3.62695,23.0591,4.16873}
		};
	};
	
	class Land_dulni_bs: IndustrialNamalsk {
		lootPos[] = {
			{0.535156,1.83887,-1.75205},
			{0.625,-1.51367,-1.75205}
		};
	};
	
	class Land_mil_guardhouse: MilitaryNamalsk {
		lootChance = 0.40;
		lootPos[] = {
			{-2.79834,1.54688,-1.66939}
		};
	};
	
	class Land_hut_old01: IndustrialNamalsk {
		zombieChance = 0.85;
		maxRoaming = 10;
		minRoaming = 4;
		lootPos[] = {
			{-2.46387,0.987305,-3.03214},
			{-2.73828,-4.95654,-3.03474},
			{1.6582,-6.41797,-3.03599},
			{-6.34766,-1.63721,-3.03192},
			{-6.63477,6.00146,-3.02272}
		};
	};
	
	class Land_dum_ras: FarmNamalsk {
		lootPos[] = {
			{-0.838867,-2.70898,-2.66958},
			{2.94727,-4.02734,-2.66958},
			{0.293945,-3.57324,0.272606},
			{2.17871,0.493164,0.272606},
			{-0.154297,2.90527,0.272608},
			{2.56934,2.97656,-2.66958},
			{-1.09961,2.43066,-2.66958},
			{1.21094,-0.209961,-2.66958}
		};
		hangPos[] = {
			{-5.0791,-1.52637,-2.86098}
		};
	};
	
	class Land_vysoky2: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 4;
		lootChance = 0.30;
		lootPos[] = {
			{3.875,-13.0879,-15.7645},
			{8.59961,-10.8486,-15.8005},
			{6.47217,4.13672,-15.8005},
			{1.20557,0.421875,-15.6845},
			{2.49609,0.738281,7.515},
			{0.241699,2.14941,13.0916},
			{-6.61914,-11.1514,13.0916},
			{-3.81934,4.72852,13.0916},
			{-9.81641,10.0391,13.0916},
			{10.3818,11.2988,13.0916}
		};
	};
	
	class Land_dlouhy2: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 6;
		lootChance = 0.25;
		lootPos[] = {
			{-0.75293,-5.73242,-9.31644},
			{0.761719,3.16992,-9.32053}
		};
	};
	
	class Land_kolotoc: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 2;
		lootChance = 0.1;
		lootPos[] = {
			{-0.0869141,0.144531,-0.66162}
		};
	};
	
	class Land_panelova3: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 6;
		minRoaming = 4;
		lootChance = 0.5;
		lootPos[] = {
			{-13.519,1.92578,-2.88658},
			{-1.93701,1.94629,-3.0257},
			{5.22217,1.4541,-3.0257},
			{5.62988,1.99023,0.0510063},
			{5.86035,-3.68262,0.0510063},
			{1.54248,-3.46875,0.0510063},
			{3.4834,-6.48828,0.00221825}
		};
		
	};
	
	class Land_panelova2: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{12.1597,-0.786133,-6.43709},
			{-4.97803,4.03223,0.573706},
			{6.26465,2.83789,5.67994},
			{2.29395,-6.01855,5.67995},
			{-2.61084,-2.92578,-6.53967}
		};
	};
	
	class Land_misc_gcontainer_big: IndustrialNamalsk {
		lootPos[] = {
			{-3.91504,0.296875,-0.68811}
		};
	};
	
	class Land_hotel_p1: ResidentialNamalsk {
		zombieChance = 0.75;
		maxRoaming = 12;
		minRoaming = 6;
		lootPos[] = {
			{11.1982,-9.37549,-4.93991},
			{12.4316,-3.05078,-4.93373},
			{11.6904,3.1167,-4.92771},
			{11.1943,10.3149,-4.92068},
			{12.0996,-0.190918,-3.22923},
			{12.876,-5.11084,-1.40247},
			{13.4766,4.81396,-1.39091},
			{-2.47949,3.646,-4.92429},
			{-3.5957,-0.545898,-4.92429},
			{-7.79395,3.78857,-4.92428},
			{-10.4756,-1.93018,-4.92428},
			{-14.8115,-0.187012,-4.89486}
		};
	};
	
	class Land_hotel_p2: ResidentialNamalsk {
		zombieChance = 0.75;
		maxRoaming = 12;
		minRoaming = 6;
		lootPos[] = {
			{1.7373,-1.21582,-7.29951},
			{3.5498,2.6499,-7.29951},
			{-2.84766,1.29834,-7.29951},
			{-2.84766,1.29834,-7.29951},
			{-3.00488,21.2642,0.684233},
			{-3.27148,-21.9717,0.777111},
			{2.49902,-12.6963,6.06893},
			{3.89648,-3.06299,6.06893},
			{4.45898,7.17822,6.06893}
		};
	};
	
	class Land_kostelik_final_2122: Church {
		zombieChance = 0.75;
		maxRoaming = 4;
		minRoaming = 2;
		lootPos[] = {
			{-2.57373,-0.982422,-5.57918},
			{2.58398,-1.81641,-5.57918},
			{4.28906,-0.308594,-5.57918},
			{0.134277,-7.25488,-5.57918},
			{0.643555,3.81348,-5.57918},
			{2.30859,8.36914,-5.55281},
			{-1.29248,8.80762,-5.2312},
			{-0.166016,7.44531,1.55548}
		};
	};
	
	class Land_dum_zboreny_total: FarmNamalsk {
		lootPos[] = {
			{-3.94531,2.23975,-2.41236},
			{-4.29688,-2.37012,-2.25509},
			{4.71484,-1.97314,-2.31708}
		};
	};
	
	class Land_jzd_stodola2: FarmNamalsk {
		zombieChance = 0.25;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{-6.25391,3.50586,-2.0262},
			{-2.98242,-2.08789,-2.0262},
			{4.01953,3.93652,-2.0262},
			{6.02832,9.0166,-2.0262},
			{6.71191,14.1958,-2.0262},
			{3.11426,-6.2749,-2.0262},
			{7.2002,-13.9512,-2.0262},
			{3.31934,-13.8149,-2.0262},
			{3.90332,1.81006,1.31123}
		};
	};
	
	class Land_jzd_vodojem: IndustrialNamalsk {
		lootPos[] = {
			{-1.08301,1.00488,-6.87932}
		};
	};
	
	class Land_jzd_bezstrechy: IndustrialNamalsk {
		zombieChance = 0.25;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{-10.1636,-2.58008,-5.22504},
			{-2.09375,2.94141,-4.78171},
			{-1.70752,0.267578,-5.22504},
			{4.99951,2.21875,-5.1327},
			{6.8125,-2.10352,-4.95347},
			{0.582031,2.18359,-5.22504},
			{0.856445,2.25195,-3.02945}
		};
	};
	
	class Land_jzd_silo_tes: IndustrialNamalsk {
		zombieChance = 0.25;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{18.8076,4.33105,-16.3024},
			{17.8701,-5.7832,-16.2631},
			{23.5005,-3.00977,-16.3059},
			{0.386719,0.525391,-15.7414},
			{-2.14893,-0.666992,-15.6274},
			{-2.61621,-0.568359,-5.94484},
			{-2.37939,-0.59375,0.223288},
			{0.419922,-2.00684,0.214373},
			{0.975098,1.16699,0.214373},
			{3.57324,5.94336,0.214748},
			{9.21777,-4.52148,0.214748},
			{9.69482,1.50098,0.214748},
			{-2.56641,-0.398438,3.66999},
			{-2.65088,-0.541016,6.89711},
			{-2.59912,-0.638672,10.224}
		};
	};
	
	class Land_jzd_kr2: FarmNamalsk {
		zombieChance = 0.75;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{2.05469,-22.6787,-6.30976},
			{4.6167,-14.7969,-6.2563},
			{4.57813,-7.0498,-6.2563},
			{4.81689,1.52637,-6.2563},
			{4.82764,9.57129,-6.2563},
			{-0.981445,9.54004,-6.2563},
			{-0.960938,3.1582,-6.2563},
			{-0.893066,-1.23926,-6.2563},
			{-1.11768,-5.60547,-6.2563},
			{-0.829102,-10.8086,-6.2563},
			{-0.936523,-15.4551,-6.2563},
			{6.52002,-18.2988,-6.2829},
			{-2.69775,-18.7676,-6.30976},
			{6.20459,18.043,-6.30976},
			{-2.07275,17.1738,-6.30976},
			{-2.41895,20.5078,-6.30976},
			{3.49268,22.2773,-6.30976},
			{-8.9751,23.5059,-6.30976},
			{6.12158,22.8994,-2.3676},
			{2.15723,18.5342,-2.36761},
			{5.31738,17.9688,-2.3676},
			{-2.29492,13.8438,-2.05339},
			{0,9.20313,-2.05339},
			{4.50684,9.62305,-2.05339},
			{7.01221,13.0479,-2.05339},
			{-3.2915,6.43555,-2.05339},
			{-1.45068,-0.238281,-2.05339},
			{-2.10156,-10.334,-2.0534},
			{5.11523,-8.0332,-2.05339},
			{6.37061,-16.7949,-2.0534},
			{-1.29053,-17.5859,-2.0534},
			{1.07568,-23.4375,-2.07886},
			{2.14063,-23.1641,-0.364729},
			{2.43994,-4.01953,1.44413},
			{3.00098,5.36719,1.44413},
			{-7.13525,17.793,1.47602},
			{-6.3667,22.3008,1.47603},
			{0.934082,21.8857,1.47603},
			{5.146,23.9922,1.47602}
		};
	};
	
	class Land_rozvodna: IndustrialNamalsk {
		lootPos[] = {
			{-6.86133,-1.61133,-0.369419},
			{-1.271,7.63672,-4.72946},
			{4.41211,7.4043,-4.72946},
			{5.80322,-7.35938,-4.72946}
		};
	};
	class Land_b_small1: IndustrialNamalsk {
		lootPos[] = {
			{-2.60498,0.757813,-1.51656},
			{-2.47778,-4.64063,-1.51656},
			{0.00610352,-3.22168,-1.51656}, 
			{0.382324,-4.0332,2.71902},
			{-2.32227,-1.91699,2.71902},
			{0.0273438,1.84277,2.71902}
		};
	};
	class Land_kominaa: MilitaryNamalsk {
		lootChance = 0.55;
		maxRoaming = 5;
		lootPos[] = {
			{1.59644,2.83008,-24.3887},
			{-1.60107,0.953125,26.9504},
			{-0.945801,-2.69727,-31.5389}
		};
		hangPos[] = {
			{-1.81372,-5.51758,-31.496}
		};
	};
	class Land_2: IndustrialNamalsk {
		lootPos[] = {
			{-2.60815,3.11035,-4.94934},
			{-3.99536,-2.29199,3.62535},
			{-16.7122,-9.35059,-4.94287}
		};
	};
	class Land_1: IndustrialNamalsk {
		lootPos[] = {
			{13.2627,9.18042,-5.30632},
			{-3.55078,8.26465,-5.30632},
			{1.46094,11.1074,-5.30632},
			{-11.9551,8.21118,-5.30632},
			{-17.748,3.8877,-6.66462},
			{18.4111,6.27734,-6.66632},
			{19.7266,12.8542,-6.52198},
			{1.84082,13.1543,-6.53632},
			{-30.6426,10.4514,-6.46947},
			{3.28906,8.27783,-5.30632},
			{18.4668,-3.76123,-6.66378}
		};
	};
	class Land_pozorovatelna: MilitaryNamalsk {
		zombieChance = 0;
		maxRoaming = 10;
		minRoaming = 6;
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
		lootChance = 0.42;
		lootPos[] = {
			{-2.66626,-0.748047,-12.4575},
			{-0.736328,2.47852,-2.49767},
			{-2.04199,-3.02148,-2.49767},
			{2.53052,-2.48242,7.54509},
			{-0.887695,1.46973,7.54509},
			{-1.78467,-3.13867,-12.4624},
			{-2.39526,-2.1543,-2.49767},
			{0.973145,-2.98047,-2.49767},
			{0.946289,2.81738,-2.49767},
			{-2.11914,2.41797,7.54509},
			{-0.0822754,-2.45215,7.54509}
		};
	};
	class Land_x_vez_tex: MilitaryNamalsk {
		zombieChance = 0.75;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{-1.56934,0.317871,-4.6044},
			{1.10449,3.09595,-4.58655},
			{1.63379,0.377441,-4.6045},
			{3.68164,-3.55127,-0.270306},
			{-0.0449219,2.55957,-0.272751},
			{2.30566,5.50293,-0.272091},
			{1.34375,-0.89624,-0.274002},
			{-4.11328,-1.73633,-0.27364},
			{0.947266,6.20459,-5.0261}
		};
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
	};
	class Land_par1: IndustrialNamalsk {
			lootPos[] = {
				{4.8374,-5.70117,-9.87618},
				{-1.07642,-1.0127,-9.87618},
				{1.60059,11.6045,-9.1134},
				{-2.21655,-0.130859,1.17582},
				{4.49756,-0.265625,1.17588}
			};
		};
	class Land_hlaska: MilitaryNamalsk {
		zombieChance = 0;
		maxRoaming = 4;
		minRoaming = 2;
		lootChance = 0.1;
		lootPos[] = {
			{-1.0918,1.27783,3.77092},
			{1.06152,0.755371,3.77092}
		};
		hangPos[] = {
			{ -0.046875,-4.02637,-3.14249 }
		};
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
	};
	class Land_syp_r: FarmNamalsk {
		lootPos[] = {
			{3.99951,3.47363,-6.60277},
			{-1.4917,-2.16846,-6.59029},
			{-4.29053,3.41699,-6.59774},
			{-1.13037,0.408203,-6.59616}
		};
	};
	class Land_seb_bouda3: IndustrialNamalsk {
		lootPos[] = {
			{-2.58301,4.31689,-1.72871},
			{2.05566,3.63965,-1.72863},
			{-0.115723,1.41992,-1.72852},
			{-1.86914,-0.695801,-1.72861},
			{1.56445,-2.13721,-1.72857},
			{-2.09131,-3.86621,-1.72864},
			{-0.354004,-3.11377,-1.72852}
		};
	};
	class Land_rail_semafor: IndustrialNamalsk {
		lootChance = 0.1;
		lootPos[] = {
			{-0.234619,1.66406,-3.32906}
		};
	};
	class Land_most_blok: IndustrialNamalsk {
		lootChance = 0.1;
		lootPos[] = {
			{-19.3564,3.39258,15.7188},
			{-26.459,-3.23242,15.6942},
			{-1.98145,-3.05176,15.6783}, 
			{5.47461,3.15381,15.7188}
		};
	};
	class Land_leseni4x: IndustrialNamalsk {
		zombiechance = 0;
		maxRoaming = 0;
		lootChance = 0.35;
		lootPos[] = {
			{-1.19531,-0.0805664,-3.85519},
			{-2.00488,0.467285,-1.57877},
			{-0.337891,0.100098,0.612961},
			{0.14209,0.0932617,5.04139},
			{-3.16016,0.240723,-3.85651},
			{1.55371,-0.192871,-1.57876},
			{-3.07031,0.203613,2.81885},
			{-0.261719,-0.0917969,2.81885},
			{-3.22852,0.12207,5.04139}
		};
		hangPos[] = {
			{ -1.42285,-2.8457,-3.8553 }
		};
	};
	class Land_x_skladiste_low_tex: IndustrialNamalsk {
		lootPos[] = {
			{15.7334,-9.3374,-2.68663},
			{5.61377,0.204102,-2.804},
			{1.79834,9.87256,-2.84953},
			{-1.62646,9.15967,-1.62391},
			{-8.78174,10.124,-6.29279},
			{-7.67725,-9.79248,-2.85112},
			{-10.8838,-2.07861,-2.88977},
			{-16.3638,5.5166,0.24292},
			{-15.0391,-0.641602,4.04017},
			{-13.2251,-10.8081,4.67189},
			{17.3628,-9.65674,4.03506},
			{17.4922,10.8369,4.03583},
			{2.54541,0.719727,-2.81997},
			{18.3887,1.21289,-2.7095},  
			{8.98047,-6.62793,-2.5975},
			{-2.59375,-5.56592,-2.5975},
			{-2.98193,9.05566,-2.8505},
			{-1.48926,0.302734,-2.84092},
			{-16.2119,-6.83057,-2.82303},
			{-7.92041,-13.2988,-2.86635},
			{-16.0503,2.6626,-3.64257},
			{-15.915,-4.55957,4.03981},
			{1.92676,-11.8584,4.03753},
			{-0.0078125,13.5493,-0.427788},
			{-17.5679,-0.393555,4.03772},
			{0.574707,10.5,3.6865}
		};
	};
	class Land_x_vetraci_komin: IndustrialNamalsk {
		minRoaming = 5;
		maxRoaming = 7;
		lootPos[] = {
			{-2.93799,0.154297,-8.64914},
			{0.773438,0.284668,15.1518},
			{-3.20166,0.662109,-8.64914},
			{0.00683594,-2.87744,-8.64914},
			{2.82617,1.55127,-8.64914}
		};
	};
	class Land_heliport: MilitaryNamalsk {
		minRoaming = 5;
		maxRoaming = 7;
		lootPos[] = {
			{-2.93091,11.3804,8.95621}
		};
	};
	class Land_st_vez: MilitaryNamalsk {
		lootChance = 0.42;
		minRoaming = 5;
		maxRoaming = 7;
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
		lootPos[] = {
			{3.84082,3.39502,-8.50825},
			{3.729,-3.9126,-3.45279},
			{0.943359,-3.87988,-3.31476},
			{-2.68115,-3.57764,-3.31476},
			{-4.99219,-0.102051,-3.31476},
			{-3.49414,3.22412,-3.31476},
			{0.818359,3.8667,-3.31476},
			{4.0498,3.74756,2.42811},
			{4.66406,-1.20264,5.54123},
			{0.180664,-1.61865,6.40833},
			{-3.41699,-0.699219,6.40833},
			{-2.37158,1.76318,6.40833},
			{0.382813,0.995605,6.40833},
			{-1.66016,0.290527,-11.0637}
			
		};
	};
	class Land_seb_vod_vez: IndustrialNamalsk {
		minRoaming = 5;
		maxRoaming = 7;
		lootPos[] = {
			{-2.93799,0.154297,-8.64914},
			{0.773438,0.284668,15.1518},
			{-3.20166,0.662109,-8.64914},
			{0.00683594,-2.87744,-8.64914},
			{2.82617,1.55127,-8.64914}
		};
	};
	class Land_seb_residental: ResidentialNamalsk {
		minRoaming = 5;
		maxRoaming = 12;
		lootPos[] = {
			{0.669922,-11.666,-3.99231},
			{-5.16357,5.55957,-3.70433},
			{-0.185547,0.272461,-3.68759},
			{-4.46777,9.34277,-3.71631},
			{-5.95508,5.86914,0.530693},
			{-1.67285,4.03809,0.539707},
			{-4.5918,-3.29883,0.575962},
			{0.692871,-0.916016,0.564178},
			{-4.26611,-6.93652,0.503304},
			{-3.01221,-4.44434,3.92254},
			{-3.771,6.74219,3.87591},
			{-4.13623,3.08105,3.89119},
			{-5.31934,-9.13281,-3.6578},
			{-4.17773,-5.625,-3.66891},
			{5.81152,6.41895,-4.00906},
			{6.47852,11.9746,-4.32829},
			{-8.30078,10.0146,-3.99837},
			{-8.37988,3.38574,-4.08735},
			{-3.1377,6.41992,0.527946},
			{-5.3623,-3.59668,0.577412},
			{-5.52002,-1.35938,0.566383},
			{-5.79883,-8.70703,0.390427},
			{1.04053,3.57227,0.542007},
			{-5.97314,9.75293,3.86338},
			{-4.54395,-11.5918,-4.32829},
			{-4.625,-5.09473,5.55345},
			{-6.74561,-6.10547,-3.66533}
		};
	};
	class Land_seb_bouda1: FarmNamalsk {
		lootPos[] = {
			{2.69678,1.41602,-3.28989},
			{-2.11133,1.73926,-3.28989},
			{-2.55762,1.0791,0.572044},
			{2.61377,-2.34668,1.13067},
			{-5.38037,-2.4707,-3.28587},
			{-2.99023,4.60742,-3.28926},
			{2.91211,2.10449,-1.23185}
		};
	};
	class Land_lodenice: FarmNamalsk {
		lootPos[] = {
			{-1.57422,-12.4058,-1.12817},
			{-4.30664,5.30615,-4.1706},
			{-0.453125,-2.80322,-2.46568},
			{5.19141,18.8901,-2.43314},
			{2.20508,-12.2168,-1.80866},
			{-6.54688,-16.4331,-0.864244},
			{-6.25977,-2.62402,-2.49717},
			{-1.80273,1.86865,-2.86232},
			{4.48926,5.44824,-4.80951},
			{2.07031,-2.79541,-2.7193},
			{4.58203,10.9131,-2.17065}
		};
	};
	class Land_repair_center: IndustrialNamalsk {
		lootPos[] = {
			{-2.4209,2.52197,-1.52847},
			{0.743164,-3.74268,-2.5266},
			{-0.681641,6.12891,-2.49475},
			{4.12402,-2.20605,-2.51056},
			{-2.52832,-1.88574,-1.52847}
		};
	};
	class Land_plynom: IndustrialNamalsk {
		lootPos[] = {
			{-0.102539,-0.294922,-12.5784},
			{0.0966797,0.100586,-2.60304},
			{-1.3042,-0.489258,2.21929},
			{1.7998,0.0449219,2.21929},
			{-2.8335,1.69434,-12.7057}
		};
	};
	class Land_vysoky1: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 10;
		minRoaming = 8;
		lootPos[] = {
			{8.81641,-17.2803,-15.5254},
			{-0.660156,-2.63379,13.25},
			{-7.39355,-13.4785,13.25},
			{11.2715,-0.967773,13.25},
			{6.90039,6.90723,13.25},
			{-9.56348,6.26123,13.25},
			{-9.90576,11.7939,-15.5769},
			{3.35693,13.1055,-15.4161},
			{14.9209,8.21875,-15.3368},
			{11.5151,-4.53906,-15.387},
			{-2.26367,2.88477,13.25},
			{0.880127,8.7168,13.25},
			{-6.36328,-7.15039,13.25}
		};
	};
	class Land_dlouhy1: ResidentialNamalsk {
		zombieChance = 0.55;
		maxRoaming = 10;
		minRoaming = 8;
		lootPos[] = {
			{6.10156,8.16602,-9.6134},
			{-1.64209,-3.69824,-9.60817},
			{-6.97021,-1.43652,-9.60457},
			{-17.2271,-3.07715,-9.59765},
			{-9.56738,2.30176,-9.60282},
			{-0.0454102,2.50293,-9.60925},
			{1.771,8.78418,-9.61047},
			{-12.0161,6.76074,-9.60117},
			{-4.39893,11.292,-9.75261},
			{4.07275,9.44336,-5.09157},
			{8.53418,-0.450195,-5.09157},
			{10.1885,1.9873,-5.08908},
			{14.1284,10.3623,-5.08491},
			{18.8442,3.70996,-5.08822},
			{20.6367,-2.41504,-5.09127},
			{23.73,-0.420898,-5.09028},
			{29.4438,-5.03516,-5.09258},
			{27.1226,3.19629,-5.08848},
			{23.4067,8.59277,-5.08579},
			{26.4009,11.4326,-5.08438},
			{-0.242188,-0.936523,-5.09048},
			{-5.21729,-2.86621,-5.09144},
			{-11.4795,-0.895508,-5.09046},
			{-16.2632,-5.09473,-5.09255},
			{-12.4653,2.17871,-5.08892},
			{-2.07568,2.55176,-5.08874},
			{-5.65674,6.21094,-5.08692},
			{1.41748,5.69629,-5.08717},
			{-13.0376,8.62891,-5.08571},
			{-21.9346,8.7666,-5.27299},
			{-21.2212,-1.68359,-9.59496},
			{7.27002,4.95508,-9.61419},
			{5.94824,-1.6748,-9.61329},
			{-7.30029,-5.04785,-9.75131},
			{0.384766,-5.03418,-9.74776},
			{-16.2104,-5.21582,-9.783},
			{-17.8677,2.31543,-9.59722},
			{-18.2222,7.4502,-9.59698},
			{-9.87646,11.3154,-9.75717},
			{0.619141,9.45801,-9.6097},
			{-6.54834,11.4922,-9.79061},
			{-1.34912,2.73535,-9.60837},
			{7.15039,-0.229492,-9.61411},
			{-7.22705,-5.12988,-5.09257},
			{-1.88916,-5.21387,-5.09261},
			{-17.3149,-5.26855,-5.09264},
			{-21.5688,3.52637,-6.71953},
			{-9.31885,11.332,-5.08436},
			{-0.0810547,11.4736,-5.08429},
			{2.17529,8.93848,-5.09157},
			{0.491699,3.05762,-5.08848},
			{19.3364,11.3838,-5.0844},
			{11.7261,-4.9873,-5.09256},
			{22.4751,11.376,-5.0844}
		};
	};
	class Land_dr_2: FarmNamalsk {
		lootPos[] = {
			{3.84473,-1.55664,-1.57052},
			{-1.44531,-3.70703,-1.54819},
			{-0.0913086,-0.916992,-1.57358},
			{3.14941,-3.70313,-1.51609}
		};
	};
	class Land_dr_1: IndustrialNamalsk {
		lootPos[] = {
			{-1.80225,0.794922,-1.43609},
			{0.362793,-2.5,-1.32233}
		};
	};
	class Land_zd_1: FarmNamalsk {
		lootPos[] = {
			{2.8623,-1.95117,-3.67255},
			{-0.777832,2.30664,-3.67255},
			{-3.94629,-2.54395,-4.04225},
			{-4.33154,3.67871,-4.04225},
			{-7.88916,-4.12891,-4.32732},
			{0.486328,-2.38867,-3.67255},
			{-1.60742,-3.43066,-3.67255}
		};
	};
	class Land_zd_2: FarmNamalsk {
		lootPos[] = {
			{-1.51172,1.96484,-1.86447},
			{1.20703,1.57959,-1.86447},
			{-2.44922,-2.19336,-2.19731},
			{3.30859,1.84961,-2.09365},
			{-2.00293,2.63281,-1.86447}
		};
	};
	class Land_senik: FarmNamalsk {
		lootPos[] = {
			{13.2969,-6.50684,-4.28282},
			{9.70801,3.75293,-4.17685},
			{-1.22168,-0.25,-4.13157},
			{-0.162109,-7.76465,-4.14709},
			{-5.07813,0.874512,-4.12925},
			{-8.55469,3.72852,-4.12336},
			{-17.7842,-0.162598,-3.42879},
			{13.9297,-0.743164,-4.28553},
			{5.57422,-0.395508,-4.13188},
			{4.08203,-7.15479,-4.14584},
			{-9.41016,-7.8584,-4.1473},
			{-4.47461,-3.33008,-4.13795},
			{-17.7725,-6.17676,-3.71188},
			{-9.18555,-0.203613,-4.13148},
			{-20.2949,-0.304199,-3.26254},
			{0.539063,-10.7695,-4.44321},
			{14.2373,-10.3706,-4.44321}
			};
	};
	class Land_jzd_stodola1: FarmNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{-3.70947,-14.4727,-2.0262},
			{0.915527,-5.84473,-2.0262},
			{-1.78857,4.88379,-2.0262},
			{0.88916,12.8643,-2.0262},
			{-3.30518,-8.11523,-2.0262},
			{-3.80664,10.9365,-2.0262},
			{-3.31738,-0.101563,-2.0262},
			{3.67676,13.4238,-2.20501},
			{-5.84619,-2.69043,-2.20501},
			{3.32324,-15.874,-2.20501}
		};
	};
	class Land_najezd: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{-3.54395,-4.09766,-0.321308},
			{6.87891,0.510742,0.214717},
			{3.44092,-2.0332,0.212883},
			{3.21582,-0.881836,-0.755862}
		};
	};
	class Land_jzd_4silka: FarmNamalsk {
		zombieChance = 0;
		maxRoaming = 10;
		minRoaming = 4;
		lootPos[] = {
			{0.436523,7.02881,1.64133},
			{2.19238,-0.454102,1.64133},
			{3.6582,-0.00195313,-1.18437},
			{5.8418,-3.90674,5.51407},
			{5.74609,8.50098,5.66072},
			{-5.92871,-3.08496,5.51407},
			{-7.20703,6.82129,5.61013},
			{7.47754,0.577637,-5.73756},
			{-0.761719,-2.31104,-5.73756},
			{-8.66992,1.01807,-5.73756},
			{-3.57715,0.600098,-1.18449},
			{-0.119141,1.40674,1.64133},
			{0.0449219,-5.26758,1.64133},
			{3.39648,0.368652,1.64133},
			{-2.9668,-0.400391,1.64133},
			{-3.83984,-7.38281,5.51407},
			{-3,5.68506,5.51407},
			{4.88086,-5.61865,5.51407},
			{6.48926,4.58105,5.51407}
		};
	};
	class Land_jzd_kr1: IndustrialNamalsk {
		zombieChance = 0.75;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{3.68066,-14.3789,-2.15298},
			{-3.69043,-8.89648,-2.15298},
			{-3.29248,-3.38184,-2.15298},
			{3.92139,-1.38086,-2.15298},
			{-1.47656,6.12891,-2.15298},
			{-0.408691,18.8975,-2.17845},
			{-4.36133,13.8408,-2.15298},
			{0.266602,19.0723,-0.214865},
			{0.991699,-8.06055,1.34455},
			{-0.280762,16.752,-6.40935},
			{-2.90771,11.5244,-6.35588},
			{1.45459,1.76074,-6.27279},
			{3.70752,-10.7207,-6.35588},
			{0.917969,-18.1875,-6.33955}, 
			{-2.9541,-15.7461,-6.35588},
			{-2.95703,-5.04688,-6.35588},
			{-4.36377,13.6768,-6.40935},
			{4.55615,13.6719,-6.40935},
			{1.13379,18.6133,-6.40935},
			{4.4209,13.7324,-2.15298},
			{0.403809,-15.6182,1.34455},
			{-3.9043,-6.2998,-2.15298},
			{-5.29492,3.19238,-2.15298},
			{1.53955,5.05469,-2.15298},
			{-0.983887,16.3301,-2.16645},
			{-1.21729,16.9063,-0.214865},
			{2.48047,21.5938,-6.47893},
			{3.76807,17.0225,-6.47893},
			{7.30029,-15.0381,-6.47893},
			{-7.23047,-17.248,-6.47893}
		};
	};
	class Land_molovabud1: IndustrialNamalsk {
		zombieChance = 0;
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{-9.1084,-4.02734,1.72723},
			{-6.00342,-5.75391,1.72723},
			{0.859375,-9.11621,0.648797},
			{-8.47656,-0.711914,1.72723},
			{-9.18555,5.74219,1.72723},
			{-5.09619,4.7207,1.72723},
			{-3.84033,0.447266,1.72723},
			{-6.23926,8.00293,1.72723},
			{-2.1792,11.3682,-0.559257},
			{0.664063,6.36426,3.44651},
			{2.61084,-3.39258,4.92294},
			{2.97852,2.52246,4.56126},
			{-1.20752,1.2832,5.61}
		};
	};
	
	class Land_molovabud2: IndustrialNamalsk {
		maxRoaming = 6;
		minRoaming = 4;
		lootPos[] = {
			{4484.78,11222.7,0.00362277},
			{4489.96,11222.5,0.0122168},
			{4490.68,11217.5,0.0173063},
			{4484.78,11216.6,0.101094},
			{4484.6,11211.4,0.280702},
			{4489.45,11210.8,0.272269}
		};
	};
	
	class Land_kontejner_des: IndustrialNamalsk {
		lootPos[] = {
			{-0.518555,-0.0117188,-0.625989}
		};
	};
	
	class Land_bunka: ResidentialNamalsk {
		zombieChance = 0;
		maxRoaming = 6;
		minRoaming = 2;
		lootPos[] = {
			{1.92871,0.451172,-1.51244},
			{2.14453,2.10742,-1.51244},
			{-0.941406,1.75195,-1.51244},
			{-4.58496,3.20703,-1.73301},
			{-1.94531,6.04883,-1.73301}
		};
	};
	
	class Land_dum_zboreny: FarmNamalsk {
		lootPos[] = {
			{-4.8252,-1.85547,-2.37674},
			{-5.12451,-4.35645,-2.37675},
			{-5.12451,-4.35645,-2.37675},
			{0.125977,3.12793,-2.37675},
			{-2.18066,-2.69238,-2.37674},
			{2.45752,-4.27051,-2.37675},
			{4.77246,-0.46582,-2.37675},
			{3.08936,4.06836,-2.37675},
			{6.08545,4.64746,-0.373516},
			{2.35986,1.83105,1.39426},
			{-2.88037,1.77734,1.40392},
			{-6.18506,3.86621,1.4098},
			{-5.00781,-1.73828,1.41304},
			{-5.28418,-4.37598,1.41661},
			{-2.32861,-2.21875,1.40696},
			{0.265625,-4.5293,1.42328},
			{2.02393,-0.520508,1.39534}
		};
	};
	
	class Land_bud2: FarmNamalsk {
		lootPos[] = {
			{-1.46094,1.78418,-1.79692},
			{2.05908,0.480469,-1.79291},
			{-0.447266,-2.32617,-1.78519},
			{-3.6936,-1.18359,-1.79216}
		};
	};
	
	class Land_mi8_crashed: HeliCrashNamalsk {
		maxRoaming = 12;
		minRoaming = 6;
		lootPos[] = {
			{ -0.449707,-6.29248,-1.75586 },
			{ -0.349609,-4.49512,-1.74481 },
			{ -0.269531,-2.96631,-1.76636 },
			{ 0.418457,-3.12744,-1.60449 }
		};
	};
	
	class Land_provoz2: IndustrialNamalsk {
		lootPos[] = {
			{-5.49414,-0.737305,-2.51849},
			{-5.53809,2.23926,-2.51849},
			{-2.85742,1.41846,-2.51849},
			{1.0459,1.97266,-2.51849},
			{4.73145,-1.0166,-2.51849},
			{5.30078,1.33984,-2.51849}
		};
	};
	
	class Land_provoz1: IndustrialNamalsk {
		lootPos[] = {
			{-2.69238,2.81836,-2.31387},
			{-0.743164,1.47266,-2.31387},
			{3.49219,2.2832,-2.31387},
			{4.45898,-1.95801,-2.31387},
			{0.693848,-2.4834,-2.31387},
			{-4.25,-1.30371,-2.31387}
		};
	};
	
	class Land_sklad2: IndustrialNamalsk {
		lootPos[] = {
			{-3.52637,-3.24463,-2.42452},
			{0.222656,-2.30371,-2.42414},
			{-0.21582,2.78711,-2.41983},
			{3.53711,2.09766,-2.42081},
			{5.03613,-2.56299,-2.42489},
			{3.06445,0.760254,-2.42189}
		};
	};
	
	class Land_hala1: IndustrialNamalsk {
		lootPos[] = {
			{-0.0751953,-7.0127,-4.02072},
			{-0.223633,-2.86621,-4.02072},
			{-4.64063,0.868164,-4.02072},
			{4.60986,-2.17969,-4.02072},
			{5.71338,1.13086,-4.02072},
			{-4.49609,4.7998,-4.02072},
			{4.55566,4.79199,-4.02072}
		};
	};
	
	class Land_naklad: IndustrialNamalsk {
		lootPos[] = {
			{4.53955,-5.32129,-1.51689},
			{4.15381,-2.51367,-1.51689},
			{5.39844,2.93457,-1.51689},
			{1.85547,4.12402,-1.51689},
			{-1.94238,4.11328,-1.51689},
			{-4.60693,2.38086,-1.51689},
			{-4.88867,-1.75391,-1.51689},
			{-4.93213,-6.0166,-1.51689},
			{-2.21094,-6.01367,-2.50666},
			{-1.45313,-1.50977,-2.50666},
			{-0.733887,0.65625,-2.50666}
		};
	};
	
	class Land_hlidac: ResidentialNamalsk {
		lootPos[] = {
			{0.519531,-0.0332031,-1.37757}
		};
	};
	
	class Land_bmp2_wrecked: MilitarySpecialNamalsk {
		lootPos[] = {
			{0.708984,3.3667,-0.584229}
		};
	};
	
	class Land_seb_mine_maringotka: ResidentialNamalsk {
		lootPos[] = {
			{0.291992,0.46582,-0.644005},
			{-0.0292969,-1.37817,-0.644009}
		};
	};
	
	class Land_ural_wrecked: MilitaryNamalsk {
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{1.84521,-0.853027,-1.20325}
		};
	};
	
	class Land_uralt_prevraceny: IndustrialNamalsk {
		maxRoaming = 6;
		minRoaming = 2;
		lootPos[] = {
			{-1.82227,2.77295,-1.34504},
			{-2.12012,1.51563,-1.34504},
			{-2.16016,0.135742,-1.34504},
			{-1.80664,-2.17822,-1.34504}
		};
	};
	
	class Land_seb_nasypka: IndustrialNamalsk {
		minRoaming = 5;
		maxRoaming = 8;
		lootPos[] = {
			{-10.7129,-3.50684,-6.21072},
			{-6.35498,-3.34082,-5.58379},
			{2.63965,-3.43848,-4.24003},
			{3.51807,-4.03809,-6.66288},
			{10.7227,0.880859,-6.52378},
			{0.810547,0.793945,-6.59387},
			{3.58057,0.791016,-6.46273},
			{0.589355,4.42676,-6.59387},
			{0.221191,8.44336,-6.59387},
			{6.27295,8.85938,-6.48577},
			{10.4683,8.11816,-6.52163},
			{10.564,5.39551,-6.52245},
			{2.76221,-10.583,-0.134289},
			{2.77832,-4.2002,-0.134289},
			{2.55518,-2.23242,-0.134289},
			{5.60693,-2.36621,1.30363},
			{8.78809,-2.25195,-0.134289},
			{9.08643,-6.68262,-0.134289},
			{6.56641,0.311523,1.30363},
			{6.14795,5.20996,1.30363},
			{4.19971,8.96875,1.30363},
			{7.37891,9.10156,1.30363},
			{5.5791,9.14551,3.27461}
		};
	};
	
	class Land_seb_mine_near_bordel: IndustrialNamalsk {
		zombieChance = 0;
		lootPos[] = {
			{2.39819,0.980469,-1.59698}
		};
	};
	
	class Land_part3: IndustrialNamalsk {
		lootPos[] = {
			{4.75635,4.22852,-9.7823},
			{3.47852,1.49902,-9.7823},
			{-0.621826,-4.76563,-9.7823},
			{-2.77124,-4.96875,-9.7823}
		};
	};
	
	class Land_chat_tr: FarmNamalsk {
		lootPos[] = {
			{-4.92725,2.23877,-2.32338},
			{-1.75439,-2.23438,-2.47102},
			{-1.05566,2.29297,-2.40262},
			{1.4248,-1.81201,-2.57769},
			{1.4248,-1.81201,-2.57769},
			{3.58594,-2.01172,-2.35669}
		};
	};
	
	class Land_seb_rozvodna: IndustrialNamalsk {
		lootPos[] = {
			{-5.91113,0.829102,-3.83514},
			{0.397461,3.4751,-3.83169},
			{-1.27832,3.28809,0.584061}
		};
	};
	
	class Land_vor_piskoviste: ResidentialNamalsk {
		lootChance = 0.1;
		lootPos[] = {
			{0.0361328,0.0136719,0.447613}
		};
	};
	
	class Land_vysilac_fm: MilitaryNamalsk {
		lootChance = 0.25;
		maxRoaming = 8;
		minRoaming = 4;
		lootPos[] = {
			{0.195313,-0.713379,-6.11732}
		};
	};
	
	class Land_budova5_winter: MilitaryNamalskWinter {
		lootChance = 0.25;
		maxRoaming = 10;
		minRoaming = 4;
		lootPos[] = {
			{-3.81934,3.2207,-2.00615},
			{-3.89673,1.61426,-2.05548},
			{-3.98462,0.065918,-2.11169}
		};
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
	};
	
	class Land_budova2_winter: MilitaryNamalskWinter {
		lootChance = 0.1;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{-3.34717,-5.42505,-1.73134},
			{-6.07715,-7.85254,-1.73218}
		};
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
	};
	
	class Land_budova1_winter: MilitaryNamalskWinter {
		lootChance = 0.1;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{8.84448,-0.234863,-2.01427}
		};
		//zombieClass[] = {"z_nac_soldier","z_nac_soldier_heavy"};
	};
	
	class Land_budova3_winter: MilitaryNamalskWinter {
		lootChance = 0.1;
		maxRoaming = 10;
		minRoaming = 6;
		lootPos[] = {
			{5.39673,-0.0297852,-2.01859}
		};
	};
	
	class Land_ind_quarry: IndustrialNamalsk {
		lootPos[] = {
			{7023.01,5798.6,0.108322},
			{7015.61,5799.6,0.100521},
			{7007.62,5799.26,0.100498},
			{7010.8,5813.17,0.170124},
			{7014.83,5813.15,0.183861},
			{7032.61,5807.29,0.242538},
			{7037.44,5802.41,0.281284},
			{7028.89,5800.98,13.0366}
		};
	};

	class Land_ind_sawmill: IndustrialNamalsk {
		lootPos[] = {
			{7056.46,5781.25,0.00143814},
			{7049.81,5792.8,0.00143051},
			{7057.95,5809.97,0.00144196},
			{7065.66,5802.98,0.00143814}
		};
	};

	class Land_ind_expedice_1: IndustrialNamalsk {
		lootPos[] = {
			{7805.46,7723.46,7.05676},
			{7800.96,7726.27,7.06819},
			{7800.24,7720.82,7.02254},
			{7818.09,7725.84,7.10141},
			{7816.87,7721.8,7.13413},
			{7825.74,7718.32,9.22269},
			{7837.57,7711.97,9.6668},
			{7836.25,7729.8,7.29477},
			{7836.71,7736.67,7.29414},
			{7831.8,7736.95,7.10866},
			{7813.4,7726.77,9.26067},
			{7811.31,7722.13,9.23485},
			{7805.32,7722.54,9.23901},
			{7799.81,7721.08,9.17638},
			{7802.28,7723.22,22.4461},
			{7807.98,7722.92,22.445},
			{7813.75,7722.9,22.4783}
		};
	};
};

class CfgMusic {
	class ns_namalsk_coast1
	{
		name="Namalsk ambient coast 1";
		sound[]=
		{
			"\nst\ns_sounds\zonesounds\amb_namalsk_coast1.ogg",
			1.000000,
			1.000000
		};
		duration=72;
	};
	class ns_namalsk_coast2
	{
		name="Namalsk ambient coast 2";
		sound[]=
		{
			"\nst\ns_sounds\zonesounds\amb_namalsk_coast2.ogg",
			1.000000,
			1.000000
		};
		duration=62;
	};
};