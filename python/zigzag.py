#!/usr/bin/python3

import time, sys

indent = 0 #how many space to indent.

indentIncreasing = True #Whether the indentation is increase or not.

try:
    while True:
        print(' ' * indent, end="")
        print("**********")
        time.sleep(.1) #pause for 1/10 of a second.
        if indentIncreasing:
            indent = indent + 1
            if indent == 20:
                #change direction:
                indentIncreasing = False
        else:
            #Decrease the number of space:
            indent = indent - 1
            if indent == 0:
                #change direction:
                indentIncreasing = True

except KeyboardInterrupt:
    sys.exit()

