import doctest

def multiply(a, b):
    """
    Multiply two numbers.

    >>> multiply(2, 3)
    6
    >>> multiply(0, 4)
    0
    >>> multiply(5, 0)
    0
    >>> multiply(1, 1)
    1
    >>> multiply(1, True)
    1
    """
    return a * b

if __name__ == "__main__":
    doctest.testmod(optionflags=doctest.DONT_ACCEPT_TRUE_FOR_1)
    print(1 + True)
    print(1 + False)

