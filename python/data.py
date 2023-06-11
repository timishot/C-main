#!/usr/bin/python3

from dataclasses import dataclass


@dataclass
class Employee:
    name: str
    dept:str
    salary:int

if __name__ == "__main__":
    john = Employee('john', 'computer lap', 1000)
    print(john.dept)
    print(john.salary)
