import unittest


from max_integer import max_integer

class TestMaxInteger(unittest.TestCase):
    def test_max_integer(self):
        # Test case 1: Regular list of integers
        self.assertEqual(max_integer([1, 2, 3, 4]), 4)

        # Test case 2: List with negativr numbers
        self.assertEqual(max_integer([-1, -2, -3, -4]), -1)

        #Test cse #: List with repeated maximum values
        self.assertEqual(max_integer([1, 2, 3, 4, 4, 4]), 4)

        #Test case 4: list with one element
        self.assertEqual(max_integer([5]), 5)

        #Test case 5: empty list
        self.assertIsNone(max_integer([]))


if __name__ == "__main__":
    unittest.main()


