-- Last updated: 7/19/2026, 10:23:53 PM
# Write your MySQL query statement below

SELECT email
from person 
group by email
having count(*)>1