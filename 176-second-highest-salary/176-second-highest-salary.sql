# Write your MySQL query statement below
SELECT MAX(Salary) AS SecondHighestSalary  FROM Employee WHERE Salary<(SELECT MAX(Salary) from Employee);
# SELECT max(Salary)
# FROM Employee
# WHERE Salary < (SELECT max(Salary) FROM Employee)