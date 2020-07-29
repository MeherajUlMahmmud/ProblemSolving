select distinct(city)
from station
where lower(substr(city, 1, 1)) not in ('a', 'e', 'i', 'o', 'u') and
substr(city, length(city), length(city)) not in ('a', 'e', 'i', 'o', 'u');