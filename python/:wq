#!/usr/bin/python3

import re

phoneNumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
mo = phoneNumRegex.search('Cell: 415-555-9999 work: 212-555-0000')
print(mo.group())
phoneNumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d') # has no groups
mo2 = phoneNumRegex.findall('Cell: 415-555-9999 Work: 212-555-0000')
print(mo2)


