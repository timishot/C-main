#!/usr/bin/python3

class Person(object):

    # Constructor
    def __init__(self, name, id):
        self.name = name
        self.id = id


    # To check if this person is an employee
    @property
    def Display(self):
        print(self.name, self.id)


# Driver code
emp = Person("Satyem", 102) #An object of person

emp.Display

class Emp(Person):
    @property
    def print(self):
        print("Emp class called")

Emp_details = Emp("Mayank", 103)

# Calling Parent class function
Emp_details.Display

#Calling child class function
Emp_details.print
