/* Write your PL/SQL query statement below */
SELECT e1.name as Employee
FROM employee e1, employee e2
WHERE e1.managerid is not NULL
AND e1.managerid = e2.id
AND e1.salary > e2.salary;