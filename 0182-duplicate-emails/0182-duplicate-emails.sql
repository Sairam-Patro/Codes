# Write your MySQL query statement below
select email from (select * from Person group by email having count(*) <> 1) as t;