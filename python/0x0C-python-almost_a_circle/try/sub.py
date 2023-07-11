#!/usr/bin/python3
import unittest

class MyTestCase(unittest.TestCase):
    def test_multiply(self):
        values = [(2, 6), (12, 1), (6, 2)]

        for x, y in values:
            with self.subTest(x=x, y=y):
                result = x * y
                self.assertEqual(result, 12)
