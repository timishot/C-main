#!/usr/bin/python3

def islower(c):
    letter = ord('c')
    for i in range(ord('a'), ord('z')+1):
        if letter == i:
            return True
    else:
        return False

ans = islower('c')
print(ans)
