#!/usr/bin/python3

import re, pyperclip

phoneRegex = re.compile(r'''(
        (\d{3}|\(\d{3}\))?
        (\s|-|\.)?
        (\d{3})
        (\s|-|\.)
        (\d{4})
        (\s*(ext|x|ext.)\s*(\d{2,5}))?
        )''', re.VERBOSE)

#Create email regex

emailRegex = re.compile(r'''(
        [a-zA-Z0-9._%+-]+    #username
        @
        [a-zA-Z0-9.-]+
        (\.[a-zA-Z]{2,4})
        )''', re.VERBOSE)

#Find matches in pclipboard text

text = str(pyperclip.paste())
matches = []
for groups in phoneRegex.findall(text):
    phoneNum = '-'.join([groups[1], groups[3], groups[5]])
    if groups[8] != '':
        phoneNum += ' +' + group[8]
    matches.append(phoneNum)

for groups in emailRegex.findall(text):
    matches.append(groups[0])


#Copy results to the clipboard
if len(matches) > 0:
    pyperclip.copy('\n'.join(matches))
    print('copied to clipboard:')
    print('\n'.join(matches))
else:
    print('No phone numbers or email addresses found.')

