#!/usr/bin/python3

birthdays = {'alice': 'April 1', 'Bob': 'Dec 12', 'carol': 'Mar 4'}
while True:
    print('Enter a name: (blank to quit)')
    name=input()

    if name=='':
        break
    if name in birthdays:
        print(birthdays[name] + ' is  the birthday of ' + name)
    else:
        print('I do not have birthday information for ' + name)
        print('what is their birthday?')
        bday = input()
        birthdays[name] = bday
        print('Birthday database updated.')
