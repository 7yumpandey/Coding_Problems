# Write your MySQL query statement below
Select author_id as id
from views
Where author_id= viewer_id
Group By author_id
Order By author_id;