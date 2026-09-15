# Write your MySQL query statement below
Select a.name as Employee 
from Employee as a
Join Employee as b 
ON a.managerId=b.id
Where a.salary>b.salary; 