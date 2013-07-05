
/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

USE `dayz`;


-- Dumping structure for table dayz.spawns
DROP TABLE IF EXISTS `spawns`;
CREATE TABLE IF NOT EXISTS `spawns` (
  `id` int(2) unsigned NOT NULL AUTO_INCREMENT,
  `pos` varchar(128) NOT NULL COMMENT 'Spawn location',
  `otype` varchar(128) NOT NULL DEFAULT 'Smallboat_1' COMMENT 'Type of the spawning object',
  `uuid` int(2) unsigned NOT NULL,
  `descr` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=41 DEFAULT CHARSET=utf8;

-- Dumping data for table dayz.spawns: 0 rows
DELETE FROM `spawns`;
/*!40000 ALTER TABLE `spawns` DISABLE KEYS */;
INSERT INTO `spawns` (`pos`, `otype`, `uuid`, `world`, `chance`) VALUES
	('[219,[4186.09,6606.66,0]]', 'Ka60_GL_NAC', 4578512, 'namalsk',0.25),
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
	('[34,[2197.75,5762.33,0.00141096]]', 'Old_bike_TK_CIV_EP1', 4578547, 'namalsk',0.95),
	('[88,[2144.77,5754.73,1.84505]]', 'PBX', 4578541, 'namalsk',0.55),
	('[245,[5031.6,6100.52,5.8214]]', 'PBX', 4578542, 'namalsk',0.55),
	('[6,[4877.88,6215.15,0.00143814]]', 'Old_bike_TK_CIV_EP1', 4578543, 'namalsk',0.95),
	('[228,[6044.81,6760.48,2.24013]]', 'PBX', 4578544, 'namalsk',0.55),
	('[126,[7647.15,7406.74,0.00144958]]', 'UralCivil2', 4578545, 'namalsk',0.55),
	('[1,[4991.09,8165.97,0.00148773]]', 'UralCivil', 4578546, 'namalsk',0.55),
/*!40000 ALTER TABLE `spawns` ENABLE KEYS */;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;