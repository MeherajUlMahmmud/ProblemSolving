select *
from (select city, length(city)
    from station
    order by length(city), city)
where rownum = 1
union
select *
from (select city, length(city)
    from station
    order by length(city) desc, city)
where rownum = 1;

-- It is outside as you want to return just rownum = 1 from the inner query. The inner query is getting all the city and lengths, then orders it, the outside query is selecting all and then grabbing rownum = 1 from the inner query. If you do rownum = 1 in the inner query it will return the first row before it does the order by clause so you will not get the desired results.

-- https://www.periscopedata.com/blog/sql-query-order-of-operations for more details