#!/usr/bin/python3

import re 
import pyperclip as clip

websiteRegex = re.compile(r'''^(
        (https://|https://\.)?
        (\w+)
        (\.)
        (\w+))''', re.VERBOSE)

text = str(clip.paste())
matches = []

for groups in websiteRegex.findall(text):
    email = ''.join(groups)
    matches.append(email)

if len(matches) > 0:
    print('copied to clipboard:')
    print('\n'.join(matches))
else:
    print('No website found')




