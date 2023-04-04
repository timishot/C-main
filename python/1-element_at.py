#!/usr/bin/python3

def element_at(idx, my_list):

    listnum = len(my_list)
    if idx < 0 or idx >=listnum:
        return None
    

    print(my_list[idx])

my_list = [1, 3, 4, 6, 7,8, 8]
element_at(3, my_list)
