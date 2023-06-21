#!/usr/bin/python3

from math import pi


def circle_area(r):
    if type(r) not in [int, float]:
        raise TypeError("The radiud must be a non-negative real number.")
    if r < 0:
        raise ValueError("The radius cannot be negative.")
    return pi*(r**2)

if __name__ == "__main__":# Test function
    radii = [1, 0, -3, 2 + 5j, True, "radius"]
    message = "Area of circles with r = {radius} is {area}."

    for r in radii:
        A = circle_area(r)
        print(message.format(radius = r, area =A))
