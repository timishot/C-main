#!/usr/bin/python3

import pyinputplus as pyip

#Dictionary to store the prices of differet sandwitch optionss

prices = {'wheat': 1.0, 'white': 0.8, 'sourdough': 1.2, 'chicken': 2.5, 'turkey': 2.0, 'ham': 1.8, 'tofu': 2.2, 'cheddar': 0.5, 'swiss': 0.7, 'mozzarella': 0.6, 'mayo': 0.3, 'mustard': 0.2, 'lettuce': 0.4, 'tomato': 0.4}

#Ask for bread type
bread = pyip.inputMenu(['wheat', 'white', 'sourdough'], prompt= 'Select the bread type: ')


#Ask for protein type 
protein= pyip.inputMenu(['chicken', 'turkey', 'ham', 'tofu'], prompt='Select a protein type: ')

# Ask if they want cheese
cheese = pyip.inputYesNo('Do you want cheese? (yes/no): ')

if cheese == 'yes':
    #aSK FOR CHEESE TYPE
    cheese_type = pyip.inputMenu(['cheddar', 'swiss', 'mozzarella'], prompt= 'select a cheese type: ')
else:
    cheese_type = None

#Ask if they want mayo, mustard, lettuse, or tomato
condiments = pyip.inputYesNo('Do you want mayo, mustard, lettuce, or tomato? (yes/no):')
#Ask for the number of sandwithes
num_sandwitches = pyip.inputInt('How many sandwitches do you want? (min=1):', min=1)

#calculate the total cost

total_cost = prices[bread] + prices[protein]
if cheese_type:
    total_cost += prices [cheese_type]
if condiments == 'yes':
    total_cost += prices['mayo'] + prices['mustard'] + prices['lettuce'] + prices['tomato']

#MUltioply the total cost by the number of sandwitches
total_cost *= num_sandwitches


#Display the totalm cost
print(f'Total cost: ${total_cost:.2f}')

