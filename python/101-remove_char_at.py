#!/usr/bin/python3

def remove_char_at(str, n):
    str = input("Enter Text: ")
    n = int(input("Enter number: "))
    reinput = str.replace(str[n-1], "", 1)

    print(reinput)

remove_char_at(str, 3)

