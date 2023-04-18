#!/usr/bin/python3

def multiple_returns(sentence):
    # Get length of sentence 

    length = len(sentence)

    #Get first character of sentence (if it exists)

    first = sentence[0] if length > 0 else None

    #Return as tuple

    return length, first
