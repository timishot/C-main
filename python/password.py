#!/usr/bin/python3

from string import ascii_lowercase, digits, ascii_uppercase

from random import choices

special_chars = "!@#$%^&*()_+"

password = ''.join(choices(ascii_lowercase + ascii_uppercase + digits + special_chars,  k=10))

print(password)
