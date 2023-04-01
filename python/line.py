#!/usr/bin/python3

import sys

if len(sys.argv) == 1:
    print("No command line arguments given")
else:
    print(f"command-line arguments: {sys.argv[1:]}")
