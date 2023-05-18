#!/usr/bin/python3

import re

endWithNumber = re.compile(r'\d$')
mo=endWithNumber.search('your number is 42')
print(mo)
mo2=endWithNumber.search('12 your number is fourty two.') == None
print(mo2)


