#!/usr/bin/python3

import re

batRegex = re.compile(r'Bat(wo)?man')

mo1 = batRegex.search('The Adventures of  Batman')
mo1.group()

print(mo1.group())

mo2 = batRegex.search('The Adentures of Batwoman')
mo2.group()
print(mo2.group())

batRegex = re.compile(r'Bat(wo)*man')
mo3 = batRegex.search('The Adventures of Batwowowowoman')
print(mo3.group())




