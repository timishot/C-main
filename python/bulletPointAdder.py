#!/usr/bin/python3

# bullletPointerAdder.py - Adds wikipedia bullet points to the start of each line of text on the clipboard.

import pyperclip
text = pyperclip.paste()

#sperate lines and add stars
lines = text.split('\n')

for i in range(len(lines)): #loop through all the indexes in the "lines" list
    lines[i] = '* ' + lines[i] #add stara to each string in the "lines"
text = '\n'.join(lines)
#TODO: Seperate lines and add stars.
pyperclip.copy(text)
print(text)


