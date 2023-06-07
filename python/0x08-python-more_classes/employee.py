#!/usr/bin/python3

class Employee:

    num_of_emps = 0
    raise_amt = 1.04

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.email = first + '_' + last + '@gmail.com'
        self.pay = pay

        Employee.num_of_emps += 1

    def fullname(self):
        return "{} {}".format(self.first, self.last)

    def apply_raise(self):
        self.pay == int (self.pay * self.raise_amt)

    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amt = amount

    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)


Employee.set_raise_amt(1.55)
emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'Employee', 60000)


"""print(Employee.raise_amt)
print(emp_1.raise_amt)
print(emp_2.raise_amt)
"""

emp_str_1 = "John-Doe-70000"
emp_str_2 = "Steve-smith-30000"
emp_str_3 = "Jane-Doe-12000000"



new_emp_1 = Employee.from_string(emp_str_1)

#new_emp_1 = Employee.from_stri

print(new_emp_1.email)
print(new_emp_1.pay)
