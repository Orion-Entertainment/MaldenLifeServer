/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

CREATE DATABASE IF NOT EXISTS `maldenlife2` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `maldenlife2`;

CREATE TABLE IF NOT EXISTS `ah` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `type` int(5) NOT NULL DEFAULT 0,
  `amount` int(5) NOT NULL DEFAULT 0,
  `item` text NOT NULL,
  `price` int(100) NOT NULL DEFAULT 0,
  `seller` varchar(50) NOT NULL,
  `sellername` varchar(32) NOT NULL,
  `status` int(5) NOT NULL DEFAULT 0,
  `time` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1524 DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS `containers` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `dir` varchar(128) DEFAULT NULL,
  `active` tinyint(1) NOT NULL DEFAULT 0,
  `owned` tinyint(1) DEFAULT 0,
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=1400 DEFAULT CHARSET=utf8mb4;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteDeadVehicles`()
BEGIN

  DELETE FROM `vehicles` WHERE `alive` = 0;

END//
DELIMITER ;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldContainers`()
BEGIN

  DELETE FROM `containers` WHERE `owned` = 0;

END//
DELIMITER ;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldGangs`()
BEGIN

  DELETE FROM `gangs` WHERE `active` = 0;

END//
DELIMITER ;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldHouses`()
BEGIN

  DELETE FROM `houses` WHERE `owned` = 0;

END//
DELIMITER ;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `deleteOldWanted`()
BEGIN

  DELETE FROM `wanted` WHERE `active` = 0;

END//
DELIMITER ;

CREATE TABLE IF NOT EXISTS `gangs` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `owner` varchar(32) NOT NULL,
  `name` varchar(32) NOT NULL,
  `members` text NOT NULL,
  `maxmembers` int(3) NOT NULL DEFAULT 8,
  `bank` int(100) NOT NULL DEFAULT 0,
  `active` tinyint(1) NOT NULL DEFAULT 1,
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`id`),
  UNIQUE KEY `name` (`name`)
) ENGINE=InnoDB AUTO_INCREMENT=389 DEFAULT CHARSET=utf8mb4;

CREATE TABLE IF NOT EXISTS `houses` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `pid` varchar(17) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `owned` tinyint(1) DEFAULT 0,
  `garage` tinyint(1) NOT NULL DEFAULT 0,
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=3071 DEFAULT CHARSET=utf8mb4;

CREATE TABLE IF NOT EXISTS `messages` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `fromID` varchar(50) NOT NULL,
  `toID` varchar(50) NOT NULL,
  `message` text DEFAULT NULL,
  `fromName` varchar(32) NOT NULL,
  `toName` varchar(32) NOT NULL,
  `time` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=5443 DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS `players` (
  `uid` int(6) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) NOT NULL,
  `aliases` text NOT NULL,
  `pid` varchar(17) NOT NULL,
  `cash` int(100) NOT NULL DEFAULT 20,
  `banking_pin` int(100) DEFAULT NULL,
  `bankacc` int(100) NOT NULL DEFAULT 0,
  `coplevel` enum('0','1','2','3','4','5','6','7','8','9','10') NOT NULL DEFAULT '0',
  `mediclevel` enum('0','1','2','3','4','5','6','7','8','9') NOT NULL DEFAULT '0',
  `adminlevel` enum('0','1','2','3','4','5','6','7') NOT NULL DEFAULT '0',
  `donorlevel` enum('0','1','2','3') NOT NULL DEFAULT '0',
  `civ_licenses` text NOT NULL,
  `cop_licenses` text NOT NULL,
  `med_licenses` text NOT NULL,
  `civ_gear` text NOT NULL,
  `cop_gear` text NOT NULL,
  `med_gear` text NOT NULL,
  `civ_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `cop_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `med_stats` varchar(32) NOT NULL DEFAULT '"[100,100,0]"',
  `arrested` tinyint(1) NOT NULL DEFAULT 0,
  `blacklist` tinyint(1) NOT NULL DEFAULT 0,
  `civ_alive` tinyint(1) NOT NULL DEFAULT 0,
  `civ_position` varchar(64) NOT NULL DEFAULT '"[]"',
  `playtime` varchar(32) NOT NULL DEFAULT '"[0,0,0]"',
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  `last_seen` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `exp_level` int(11) NOT NULL DEFAULT 0,
  `exp_total` int(11) NOT NULL DEFAULT 0,
  `exp_perkPoints` int(11) NOT NULL DEFAULT 0,
  `exp_perks` text DEFAULT NULL,
  `jail_time` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`uid`),
  UNIQUE KEY `pid` (`pid`),
  KEY `name` (`name`),
  KEY `blacklist` (`blacklist`),
  KEY `Tracked` (`Tracked`)
) ENGINE=InnoDB AUTO_INCREMENT=4284 DEFAULT CHARSET=utf8mb4;

DELIMITER //
CREATE DEFINER=`root`@`localhost` PROCEDURE `resetLifeVehicles`()
BEGIN

  UPDATE `vehicles` SET `active`= 0;

END//
DELIMITER ;

CREATE TABLE IF NOT EXISTS `vehicles` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `side` varchar(16) NOT NULL,
  `classname` varchar(64) NOT NULL,
  `type` varchar(16) NOT NULL,
  `pid` varchar(17) NOT NULL,
  `alive` tinyint(1) NOT NULL DEFAULT 1,
  `blacklist` tinyint(1) NOT NULL DEFAULT 0,
  `active` tinyint(1) NOT NULL DEFAULT 0,
  `plate` int(20) NOT NULL,
  `color` int(20) NOT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `fuel` double NOT NULL DEFAULT 1,
  `damage` varchar(256) NOT NULL,
  `vis` text DEFAULT NULL,
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  `insure` int(1) NOT NULL DEFAULT 0,
  `tuning_data` varchar(300) NOT NULL DEFAULT '[]',
  PRIMARY KEY (`id`),
  KEY `side` (`side`),
  KEY `pid` (`pid`),
  KEY `type` (`type`)
) ENGINE=InnoDB AUTO_INCREMENT=11935 DEFAULT CHARSET=utf8mb4;

CREATE TABLE IF NOT EXISTS `wanted` (
  `wantedID` varchar(64) NOT NULL,
  `wantedName` varchar(32) NOT NULL,
  `wantedCrimes` text NOT NULL,
  `wantedBounty` int(100) NOT NULL,
  `active` tinyint(1) NOT NULL DEFAULT 0,
  `insert_time` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`wantedID`),
  KEY `active` (`active`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;