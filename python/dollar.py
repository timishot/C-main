#!/usr/bin/python3

import re 

beginWithHello = re.compile(r'^Hello')
mo = beginWithHello.search('Hello, world!')
print(mo)
mo2 = beginWithHello.search('he haid hello.') == None
print(mo2)



