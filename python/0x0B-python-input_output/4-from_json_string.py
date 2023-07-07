#!/usr/bin/python3
"""Defines a function that returns an objects"""
import json

def from_json_string(my_str):
    """the function decodes a json string"""
    return json.loads(my_str)
