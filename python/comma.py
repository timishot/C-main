#!/usr/bin/python3

def comma(list):
    if len(list) == 0:
        return ""
    elif len(list) == 1:
        return list[0]
    elif len(list) >= 2 :
        for i in range (0, len(list)-1):
            print(list[i], end =", ")
        print(list[-1])
    else:
        return 1


loop = ['time', 6, 3, 7, 'ban', 'ff']

comma(loop)
