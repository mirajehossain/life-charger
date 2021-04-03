-- https://www.hackerrank.com/challenges/weather-observation-station-8/problem

select distinct(city) from station where city REGEXP '^a|^e|^i|^o|^u' and city REGEXP 'a$|e$|i$|o$|u$';
