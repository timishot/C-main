#!/usr/bin/python3

# my_module.py
def say_hello():
    print("Hello from my_module!")

print("This code is always executed, whether the module is imported or run as a script")

if __name__ == "__main__":
    print("This code is only executed when the module is run as a script, not when it's imported")

