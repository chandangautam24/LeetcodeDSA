# Write your MySQL query statement below
Select 
Person.firstname, 
Person.lastname, 
Address.city,
Address.state from Person
Left join Address On Person.personId=Address.personId;