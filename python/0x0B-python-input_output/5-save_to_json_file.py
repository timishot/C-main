#!/usr/bin/python3
""" a fuction that writes an object to text file, using  json representation"""
import json

def save_to_json_file(my_obj, filename):
    """function that put serialized string into  file"""
    with open(filename, "w") as f:
        json.dump(my_obj, f)

