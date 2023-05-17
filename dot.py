#!/usr/bin/python3

import re

nongreedyRedex = re.compile(r'<.*?>')

mo = nongreedyRedex.search('<To serve man> for dinner.>')

print(mo.group())

greedyRegex = re.compile(r'<.*>')
mo2 = greedyRegex.search('<To serve man> fpr dinner.>')

print(mo2.group())




