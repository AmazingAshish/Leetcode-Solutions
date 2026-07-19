-- Last updated: 7/19/2026, 10:17:02 PM
# Write your MySQL query statement below
select tweet_id
from Tweets 
where CHAR_LENGTH(content)>15;