#!/usr/bin/python3

import sys
from calculator_1 import sub, add, mul, div

if __name__ == '__main__':
    args = sys.argv[1:]

    #check if the correct number of argument was provided

    if len(args) != 3:
        print("Usage : ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)


        #parse the arguments
    a, operator, b = args

        #Check if the operator is valid 
    if operator  not in ['+', '-', '*', '/']:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)


    #convert the argument to integers

    a, b = int(a), int(b)

    #perform the operation
    if operator == '+':
         result = add(a, b)
    elif operator == '-':
        result = sub(a, b)
    elif operator == '*':
        result = mul(a, b)
    elif operator == '/':
        result = div(a, b)

    print("{} {} {} = {}".format(a, operator, b, result))
