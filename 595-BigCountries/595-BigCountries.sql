-- Last updated: 7/19/2026, 10:21:54 PM
# Write your MySQL query statement below
select name, population, area 
from World
where area>=3000000 or population>= 25000000;