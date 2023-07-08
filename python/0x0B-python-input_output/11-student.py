#!/usr/bin/python3
"""class Student that defines a student by: (based on 10-student.py)"""

class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name=first_name
        self.last_name=last_name
        self.age=age

    def to_json(self, attrs=None):
        if isinstance(attrs, list) and all(isinstance(elem, str) for elem in attrs):
            return {attr: getattr(self, attr) for attr in attrs if hasattr(self, attrs)}
        return self.__dict__

    def reload_from_json(self, json):
        """Replace all attributes of the Student.
        Args:
            json (dict): The key/value pairs to replace attributes
        """
        for k, v in json.items():
            setattr(self, k, v)
