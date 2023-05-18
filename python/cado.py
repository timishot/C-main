#!/usr/bin/python3

import re

wholeStringIsNum = re.compile(r'^\d+$')
mo= wholeStringIsNum.search('1234567890')
print(mo)

mo2=wholeStringIsNum.search('12345xyyyyy7890') == None
print(mo2)

