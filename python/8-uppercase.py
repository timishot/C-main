#!/usr/bin/python3

def uppercase(s):
    diff = ord('a') - ord('A')
    for c in s:
        if ord('a') <= ord(c) <= ord('z'):
            c = chr(ord(c) - diff)
        print(c, end='')
    print()

str = input("Enter your text: ")
uppercase(str)
