-- https://www.hackerrank.com/challenges/weather-observation-station-4/problem

SELECT (count(*) - count(distinct(city))) as c from STATION;
