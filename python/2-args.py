#!/usr/bin/python3

import sys

args = sys.argv[1:]

n = len(args)

# print the number of arguments

print("Number of argument{}: {}".format ("s" if n > 1 else"", n))

if n == 0:
    print(".")
else:
    #print the list of arguments
    print("Argument{}:".format("s" if n > 1 else ""))

    for i in range(n):
        print("{}: {}".format(i+1, args[i]))
