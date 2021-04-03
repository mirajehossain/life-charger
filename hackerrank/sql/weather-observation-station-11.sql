-- https://www.hackerrank.com/challenges/weather-observation-station-11/problem

select distinct(city) from station where city not REGEXP '^a|^e|^i|^o|^u' or city not REGEXP 'a$|e$|i$|o$|u$';
