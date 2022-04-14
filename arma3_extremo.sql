-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 18, 2022 at 10:35 PM
-- Server version: 10.4.20-MariaDB
-- PHP Version: 8.0.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `arma3_extremo`
--
CREATE DATABASE IF NOT EXISTS `arma3_extremo` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `arma3_extremo`;

-- --------------------------------------------------------

--
-- Table structure for table `characters`
--

DROP TABLE IF EXISTS `characters`;
CREATE TABLE `characters` (
  `ID` int(11) NOT NULL,
  `BEGuid` varchar(64) NOT NULL,
  `S64ID` varchar(17) NOT NULL,
  `LastKnownName` varchar(255) NOT NULL DEFAULT '""',
  `LastPosition` text NOT NULL DEFAULT '"[]"',
  `LastHealthState` int(5) NOT NULL DEFAULT 0,
  `LastLoadout` text NOT NULL DEFAULT '"[]"',
  `Wallet` int(11) NOT NULL,
  `WorldName` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4; 


--
-- Table structure for table `vehicles`
--

DROP TABLE IF EXISTS `vehicles`;
CREATE TABLE `vehicles` (
  `ID` int(11) NOT NULL,
  `BEGuid` varchar(64) NOT NULL,
  `Class` varchar(255) NOT NULL,
  `VIN` varchar(255) NOT NULL,
  `LockState` tinyint(1) NOT NULL DEFAULT 0,
  `Spawned` tinyint(1) NOT NULL DEFAULT 1,
  `Spawned_At` datetime NOT NULL DEFAULT current_timestamp(),
  `Dead` tinyint(1) NOT NULL DEFAULT 0,
  `Position` text NOT NULL DEFAULT '"[]"',
  `Fuel` int(1) NOT NULL DEFAULT 1,
  `Damage` int(1) NOT NULL DEFAULT 0,
  `Hitpoints` text NOT NULL DEFAULT '"[]"',
  `WorldName` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `characters`
--
ALTER TABLE `characters`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `vehicles`
--
ALTER TABLE `vehicles`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `characters`
--
ALTER TABLE `characters`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

--
-- AUTO_INCREMENT for table `vehicles`
--
ALTER TABLE `vehicles`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
