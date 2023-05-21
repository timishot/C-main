#!/usr/bin/python3

import random, time
numbersOfQuestions = 10
correctAnswers = 0
for questionNumber in range(numbersOfQuestions):
    #PICK TWO RANDOM NUMBERS:
    num1= random.randint(0, 9)
    num2= random.randint(0, 9)
    for i in range(3):
        ans = int(input(f" {num1} * {num2}: "))
        actualAns = num1 * num2
        if ans == actualAns:
            correctAnswers += 1
            break
        else:
            print('invalid')
    time.sleep(1)
print(f'score {correctAnswers}/10')



