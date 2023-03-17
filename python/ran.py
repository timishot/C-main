#!/usr/bin/python3
import random

random_number = random.randint(-10, 10)
if random_number > 0:
    print("{} is positive".format(random_number))
elif random_number == 0:
    print("{} is zero".format(random_number))
else:
    print("{} is negative".format(random_number))
