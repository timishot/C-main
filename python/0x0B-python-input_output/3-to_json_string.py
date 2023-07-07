#!/usr/bin/python3
"""Writing a function that a encode a string (serialization)"""
import json

def to_json_string(my_obj):
    """Serialized a object"""
    return json.dumps(my_obj)


