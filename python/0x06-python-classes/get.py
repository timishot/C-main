#!/usr/bin/python3

class MyClass:
    def __init__(self):
        self.attribute = "Hello, work"


my_object = MyClass()

#Accessing the attribute directly
print(my_object.attribute) #Output: Hello, world!

#Using getattr to  retrieve the attribute value
value = getattr(my_object, "attribute")
print(value)#Output: Hello, World!

#Trying to retrieve a non-existing attribute
non_existing = getattr(my_object, "non_existing", "Holas amigo")
print(non_existing)
print(my_object.__dict__)
