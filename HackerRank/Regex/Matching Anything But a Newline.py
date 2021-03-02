regex_pattern = r"...\....\....\...."	# Do not delete 'r'.

# This pattern expects strings like:

# 111.222.333.444.abd.ghj.999.1n4

# That is, it must be 4 groups of 3 "anycharacters" delimited by periods.
# We use . to match "anycharacter" in regex. It matches everything but things like line breaks.
# And \. matches actual periods in the string.
# We have to escape the . because it is a metacharacter.
# So, in the solution, we're saying that between the beginning of the string ^ and the end of the string $ there will be exactly 4 groups of 3 "anycharacters" delimited by periods

import re
import sys

test_string = input()

match = re.match(regex_pattern, test_string) is not None

print(str(match).lower())