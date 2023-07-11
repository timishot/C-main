#!/usr/bin/python3

import unittest

class MyTestCase(unittest.TestCase):
    def test_string_match(self):
        text = "Hello, World!"
        pattern = r"^Hello"

        self.assertRegex(text, pattern)  # Assert that the text matches the pattern

if __name__ == '__main__':
    unittest.main()

