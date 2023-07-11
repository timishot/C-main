import unittest

class DatabaseTestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        # Perform class-level setup actions
        cls.db = connect_to_database()
        cls.db.create_table('users')
        print("Setting up the test case class")

    def setUp(self):
        # Perform setup actions before each test method
        self.db.insert_data('users', {'name': 'John', 'age': 30})
        print("Setting up for a test")

    def test_user_count(self):
        # Test the count of users in the database
        count = self.db.get_user_count()
        self.assertEqual(count, 1)
        print("Running test_user_count")

    def test_user_data(self):
        # Test the data of a specific user in the database
        user = self.db.get_user('John')
        self.assertEqual(user['age'], 30)
        print("Running test_user_data")

    @classmethod
    def tearDownClass(cls):
        # Perform class-level teardown actions
        cls.db.drop_table('users')
        cls.db.close_connection()
        print("Tearing down the test case class")

    def tearDown(self):
        # Perform teardown actions after each test method
        self.db.delete_data('users', {'name': 'John', 'age': 30})
        print("Tearing down after a test")

if __name__ == '__main__':
    unittest.main()

