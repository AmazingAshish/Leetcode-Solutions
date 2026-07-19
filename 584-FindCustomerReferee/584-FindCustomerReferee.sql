-- Last updated: 7/19/2026, 10:21:59 PM
# Write your MySQL query statement below
select name 
from Customer
where referee_id!=2 or referee_id is null;