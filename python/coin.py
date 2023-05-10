#!/usr/bin/python3

import random
numberOfStreaks = 0
totalExperiments = 10000

for  experimentNumber  in range(totalExperiments):
    #Code that creates a list of 100 'heads'or 'tails' values
    coinFlips= []
    for flip in range(100):
        if random.randint(0, 1) == 0:
            coinFlips.append('H')
        else:
            coinFlips.append('T')

    #Code that checks if there is a streak of 6 heads or tails in a row.

    for i in range(len(coinFlips) -5):
        if coinFlips[i:i+6] == ['H', 'H', 'H', 'H', 'H', 'H'] or coinFlips==['T','T','T','T','T','T']:
            numberOfStreaks+= 1
            break

# Calculate the percentage of coin flips that contain a streak

print(numberOfStreaks)

percentage = (numberOfStreaks / totalExperiments) * 100
print('Chance of streak: %s%%' % percentage)
