# Write your MySQL query statement below
Select Department.name AS Department, e.name as Employee, e.Salary as Salary FROM Employee e
JOIN Department ON Department.id = e.departmentid
WHERE e.salary IN (
    Select MAX(e2.salary) FROM Employee e2 WHERE e2.departmentid = e.departmentid
);