#!/usr/bin/python3

pi = __import__('math').pi

class MagicClass:
    def __init__(self, radius):
        if not isinstance(radius, (int, float)):
            raise TypeError('radius must be a number')

        self.__radius = radius

    def radius(self, value):
        if not isinstance(value, (int , float)):
            raise TypeError('radius must be a number')
        self.__radius = value

    def area(self):
        return pi *self.__radius ** 2

    def circumference(self):
        return 2 * pi * self.__radius **2

    def __str__(self):
        return f"MagicClass: radius={self.__radius}"

mg = MagicClass(2)
print(mg.circumference())
print(repr(mg))


