#!/usr/bin/python3
import random
number = random.randint(-10000, 1000000)

lastDigit = number % 10

if lastDigit == 0:
    print("Last digit of {} is {} and is 0".format(number, lastDigit))
elif lastDigit > 5:
    print("last digit of {} is {} is greater than 5".format(number, lastDigit))
elif lastDigit < 5 :
    print("Last digit of {} is {} and is less then 6 and not 0".format(number, lastDigit))

