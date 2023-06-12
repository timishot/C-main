#!/usr/bin/python3

# A Python program to demonstrate inheritance

# Base or Super class. Note object in bracket.
# (Generally, object is made ancestor of all classes)
# In Python 3.x "class Person" is
# equivalent to "class Person(object)"

class Person(object):

    # COnstructor
    def __init__(self, name):
        self.name = name

    # To get name
    @property
    def getName(self):
        return self.name

    # To check if the person is an employee
    @property
    def isEmployee(self):
        return False


# Inherited or Subclass (Note Person in bracket)

class Employee(Person):

    #Here we return true
    @property
    def isEmployee(self):
        return True


# Drive code
emp = Person("Geek1") # An object of person
print(emp.getName, emp.isEmployee)

emp = Employee("Geek2") # An object of Employee
print(emp.getName, emp.isEmployee)


