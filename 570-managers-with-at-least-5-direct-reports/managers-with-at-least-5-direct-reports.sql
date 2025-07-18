# Write your MySQL query statement below
SELECT e.name FROM employee e
JOIN Employee e2 ON e.id = e2.managerId
GROUP BY e.id
HAVING COUNT(*) >= 5;

