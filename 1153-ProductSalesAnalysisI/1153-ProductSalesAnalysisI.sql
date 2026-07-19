-- Last updated: 7/19/2026, 10:19:49 PM
# Write your MySQL query statement below
select t2.product_name, t1.year, t1.price
from Sales t1
join Product t2
on t1.product_id=t2.product_id;