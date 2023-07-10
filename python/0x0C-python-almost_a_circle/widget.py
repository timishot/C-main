import unittest

class Widget:
    def __init__(self, name):
        self.name = name
        self.resources = []

    def setup_resources(self):
        # SImulate resource setup
        self.resources.append("Resource 1")
        self.resources.append("Resource 2")

    def teardown_resources(self):
        #Simulate widget disposal
        self.resources = []

    def dispose(self):
        # Simulate widget disposal
        print("Disposing widget:", self.name)

class SimpleWigdetTestCase(unittest.TestCase):
    def setUp(self):
        self.widget = Widget("The Widget")
        self.widget.setup_resources()

    def test_widget_creation(self):
        # Test Widget creation
        self.assertEqual(self.widget.name, 'The Widget')
        self.assertEqual(len(self.widget.resources), 2)


    def test_widget_disposal(self):
        # Test widget disposal
        self.widget.teardown_resources()
        self.assertEqual(len(self.widget.resources), 0)

    def tearDown(self):
        self.widget.teardown_resources()
        self.widget.dispose()


if __name__ == '__main__':
    unittest.main()
