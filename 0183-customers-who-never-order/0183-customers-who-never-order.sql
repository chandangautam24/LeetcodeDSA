# Write your MySQL query statement below
SELECT name as CUSTOMERS
FROM customers a
LEFT JOIN orders b
ON a.id=b.customerId
Where b.customerId is NULL;