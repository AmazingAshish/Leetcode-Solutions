-- Last updated: 7/19/2026, 10:23:57 PM
# Write your MySQL query statement below
SELECT firstName, lastName, city, state
FROM Person
LEFT JOIN Address
    USING(personId)