#!/usr/bin/python3

import pyinputplus as pyip

import random, time

numberOfQuestions = 10
correctAnswers = 0

for questionNumber in range (numberOfQuestions):
    #Pick two random numbers:
    num1 = random.randint(0, 9)
    num2 = random.randint(0, 9)
    prompt = '#%s: %s X %s = ' % (questionNumber, num1, num2)
    try:
        #Right answers are handled by allowReges.
        #Wrong answers are handled by blockRegexes, with a custom message.
        pyip.inputStr(prompt, allowRegexes=['^%s$' % (num1 * num2)], blockRegexes=[('.*',' Incorrect!')], timeout = 8, limit = 3)
    except pyip.TimeoutException:
        print('Out of time!')
    except pyip.RetryLimitException:
        print('out of tries')
    else:
        #This block run if no exception were raises in the try block.
        print('correct!')
        correctAnswers +=1
    time.sleep(1)#Brief pause to let user seethe result.
print('Score %s / %s' %(correctAnswers, numberOfQuestions))
