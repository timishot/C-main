#!/usr/bin/python3

import unittest

class TestMath(unittest.TestCase):

    def test_addition(self):
        result = 2 + 3
        self.assertEqual(result, 5)

    def test_substraction(self):
        result = 5 - 3
        self.assertEqual(result, 2)


