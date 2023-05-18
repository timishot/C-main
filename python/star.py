#!/usr/bin/python3

import re

nameRegex = re.compile(r'First Name: (.*) Last Name: (.*)')

mo = nameRegex.search('First Name: AL Last Name: Sweigart')
print(mo.group())
print(mo.group(1))
print(mo.group(2))

