select round(sqrt(power(abs(min(lat_n) - max(lat_n)), 2) + power(abs(min(long_w) - max(long_w)), 2)), 4)
from station;


-- Euclidian DIstance

-- dist((x, y), (a, b)) = √(x - a)² + (y - b)²