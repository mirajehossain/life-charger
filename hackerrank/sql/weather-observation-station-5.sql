-- https://www.hackerrank.com/challenges/weather-observation-station-5/problem


SELECT city, LENGTH(city) from STATION order by LENGTH(city), city limit 1;
SELECT city, LENGTH(city) from STATION order by LENGTH(city) desc, city limit 1;
