#!/usr/bin/python3

def collatz(num):
    if num % 2 == 0:
        result = num // 2
    else:
        result = 3 * num + 1
    print(result)

    return result

#Prompt the user to enter a number
num = int(input("Enter number: "))

#Keep calling the collatz() function until the result is 1
while num != 1:
    num = collatz(num)


        

