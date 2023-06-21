#!/usr/bin/python3

def this_raises():
    """This function aways raises an exception.

    >>> this_raises()
    Traceback (most recent call last):
        File "<stdin>", line 1, in <module>
        File "/home/C-main/python/0x07-python-test_driven_development/tests/tests/doctest/doctest_tracebacks.py", line14, in this_raises
            raise RuntimeError('here is the error')
    RuntimeError: here is the error
    """

    raise RuntimeError('here is the error')


