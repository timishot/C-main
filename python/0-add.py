#!/usr/bin/python3

from add_0 import add
a, b = input("Enter 2 value to be add : ").split()
a = int(a)
b = int(b)
print("{} + {} = {}".format(a, b, add(a,b)))




