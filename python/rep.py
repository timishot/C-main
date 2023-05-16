#!/usr/bin/python3

import re

haRegex = re.compile(r'(ha){1,5}')
mo1 = haRegex.search('haha')
print(mo1.group())

mo2=haRegex.search('ha')
print(mo2 == None)
