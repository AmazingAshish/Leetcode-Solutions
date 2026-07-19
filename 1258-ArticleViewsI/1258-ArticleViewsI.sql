-- Last updated: 7/19/2026, 10:19:34 PM
# Write your MySQL query statement below
select DISTINCT author_id as id 
from Views
where author_id=viewer_id
ORDER BY id;