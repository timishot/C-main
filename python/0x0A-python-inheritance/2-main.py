#!/usr/bin/python3

is_same_class = __import__('2-is_same_class').is_same_class

a = 1
b= 2.5
c= object()


if is_same_class(a, int):
    print("{} is an intance of the class {}".format(a, int.__name__))
if is_same_class(b, float):
    print("{} is an instance of the class {}".format(b, float.__name__))
if is_same_class(c, object):
    print("{} is an instance of the class {}".format(c, object.__name__))
