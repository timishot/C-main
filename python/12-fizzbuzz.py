#!/usr/bin/python3

def fizzbuzz():
    for i in range(1, 30):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end= ", ")
        elif i % 3 == 0:
            print("Fizz", end=", ")
        elif i % 5 == 0:
            print("buzz", end=", " )
        else:
            print(i, end=", " )

    print()

fizzbuzz()
