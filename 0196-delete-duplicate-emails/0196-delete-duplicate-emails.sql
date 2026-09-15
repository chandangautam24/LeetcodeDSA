# Write your MySQL query statement below
Delete a from person as a
Join person as b
On a.email=b.email
AND a.id>b.id;