# Write your MySQL query statement below
select name
from SalesPerson
where sales_id not in (
    select a.sales_id
    from Orders a, Company b
    where a.com_id = b.com_id
    and b.name = "RED"
)