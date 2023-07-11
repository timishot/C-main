#!/usr/bin/python3
import unittest

class TestRaiseException(unittest.TestCase):
    def test_Raise_except(self):
        with self.assertRaises(SystemError):
            raise SystemError

suite_loader = unittest.TestLoader()
suite = suite_loader.loadTestsFromTestCase(TestRaiseException)
unittest.TextTestRunner().run(suite)

