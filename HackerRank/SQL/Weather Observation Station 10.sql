select distinct(city)
from station
where substr(city, length(city), length(city)) not in ('a', 'e', 'i', 'o', 'u');