#!/usr/bin/python3

def inherits_from(obj, a_class):
    obj_type = type(obj)
    return issubclass(obj_type, a_class) and obj_type is not a_class
