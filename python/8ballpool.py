#!/usr/bin/python3
import random

messages = ['it is certain', 'it is decided so', 'yes, definitely', 'Reply hazy try again', 'Ask again later', 'Concentrate and ask again', 'my reply is no', 'Outlook  not so good', 'very doubtful']

print(messages[random.randint(0, len(messages) -1)])
