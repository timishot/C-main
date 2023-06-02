#!/usr/bin/python3

from attri import A
x = A()
print(x.pub)
x.pub = x.pub + "nd my value can be changed"
print(x.pub)

print(x._prot)

print(x.__priv)
