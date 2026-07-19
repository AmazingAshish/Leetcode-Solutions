-- Last updated: 7/19/2026, 10:18:31 PM
# Write your MySQL query statement below
select t2.unique_id, t1.name 
from Employees as t1
left Join EmployeeUNI as t2 
on t1.id=t2.id;