#!/usr/bin/python3

message = 'It was a bright cold day in april, and the clocks were striking Thirteen.'
count ={}
for character in message:
    count.setdefault(character, 0)
    count[character] = count[character] + 1
print(count)
