-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT year FROM crime_scene_reports;
SELECT month, day FROM crime_scene_reports WHERE month = 07 AND day = 28;
SELECT month, day, street FROM crime_scene_reports WHERE month = 07 AND day = 28 AND street = "Humphrey Street";
SELECT description FROM crime_scene_reports WHERE year = 2021 AND month = 7 AND day = 28;
SELECT transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28 AND transcript LIKE "%bakery%";