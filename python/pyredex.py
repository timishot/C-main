#!/usr/bin/python3

import pyinputplus as pyip
response = pyip.inputNum(allowRegexes =[r'(I|V|X|L|C|D|M)+', r'zero'])

response = pyip.inputNum(blockRegexes=[r'[02468]$'])

response = pyip.inputStr(allowRegexes=[r'caterpillar', 'category'], blockRegexes=[r'cat'])


