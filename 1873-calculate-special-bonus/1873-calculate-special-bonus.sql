# Write your MySQL query statement below
select employee_id,
Case when employee_id%2<>0 and name not like 'M%' then salary 
else 0
end
as bonus
from Employees
order by employee_id asc