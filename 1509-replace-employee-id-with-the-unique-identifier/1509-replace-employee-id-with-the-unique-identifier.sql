# Write your MySQL query statement below
select unique_id, name from Employees LEFT JOIN EmployeeUNI
on Employees.id = EmployeeUNI.id;