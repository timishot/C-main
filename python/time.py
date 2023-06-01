#!/usr/bin/python

import datetime
today = datetime.datetime.now()
print(today)
repr_s = repr(today)
t = eval(repr_s)
print(t)
