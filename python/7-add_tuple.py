#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):

    a = tuple_a[:2]
    b = tuple_b[:2]


    #Add correspoing elements of the tuples, or using 0if a tuple has less than 2 elements
    result = (a[0] if len(a) >= 1 else 0) + (b[0] if len(b) >= 1 else 0),  (a[1] if len(a) >= 2 else 0) + (b[1] if len(b) >= 2 else 0)

    return result


