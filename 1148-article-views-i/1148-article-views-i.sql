# Write your MySQL query statement below
Select Distinct author_id as id
from views
Where author_id= viewer_id
Order By author_id;