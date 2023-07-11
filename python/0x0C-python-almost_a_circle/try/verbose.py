#!/usr/bin/python3

import unittest

class TestFoo(unittest.TestCase):

    def test_foo(self):

        self.assertTrue(True)

    def test_bar(self):

        self.assertFalse(False)

suite = unittest.TestLoader().loadTestsFromTestCase(TestFoo)

runner=unittest.TextTestRunner(verbosity=6)
runner.run(suite)
