-- Last updated: 7/19/2026, 10:23:51 PM
select Name as Customers
from Customers
where Id not in (select CustomerId from Orders)