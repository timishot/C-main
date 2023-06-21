#!/usr/bin/python3

import unittest
from uniq import Uniq

class TestUniq(unittest.TestCase):

    def test_list_with_more_than_2_same_elements(self):
        # Arrange
        input_list = [1, 2, 3, 2, 4, 4, 2, 5]
        expected_output = [1, 2, 3, 4, 5]

        # Act
        result = Uniq(input_list)

        # Assert
        self.assertEqual(result, expected_output)


    def test_empty_list(self):
        # Arrange
        input_list = []
        expected_output = []

        # Act
        result = Uniq(input_list)

        # Assert
        self.assertEqual(result, expected_output)

    def test_list_with_one_element(self):
        # Arrange
        input_list = [1]
        expected_output = [1]

        # Act
        result = Uniq(input_list)

        # Assert
        self.assertEqual(result, expected_output)

    def test_non_list_argument(self):
        #arrange
        input_list ={"a": 1, "b": 2}#Not a list

        # Act and Assert
        with self.assertRaises(TypeError):
            Uniq(input_list)

    def test_list_with_2_different_elements(self):
        # Arrange
        input_list = [1, 2]
        expected_output = [1, 2]

        # Act
        result = Uniq(input_list)

        # Assert
        self.assertEqual(result, expected_output)

    def test_list_with_multiple_types(self):
        # Arrange
        input_list = [1, 'a', True, 2.5, 'b' ]
        expected_output = [1, 'a', 2.5, 'b']

        # Act
        result = Uniq(input_list)

        #Assert
        self.assertEqual(result, expected_output)

    def test_list_with_twice_same_element(self):
        # Arrange
        input_list = [1, 1]
        expected_output = [1]

        # Act
        result = Uniq(input_list)

        # Assert
        self.assertEqual(result, expected_output)

if __name__ == '__main__':
    unittest.main()

