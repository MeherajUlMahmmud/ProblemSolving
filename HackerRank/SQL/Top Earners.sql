select *
from (select months * salary, count(*)
    from employee
    group by (months * salary)
    order by months * salary desc)
where rownum = 1;