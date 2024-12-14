# Write your MySQL query statement below
select name
from Customer
# WHERE referee_id IS NULL OR referee_id <>2;
WHERE COALESCE(referee_id,0) <>2;

