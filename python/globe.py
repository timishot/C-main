#!/usr/bin/python3

import glob

# get a list of all the text files in the current directory
text_files = glob.glob('*.txt')
print(text_files)

# get a list of all the Python files in a specified directory
python_files = glob.glob('/home/user/scripts/*.py')
print(python_files)

# get a list of all the subdirectories in a specified directory
subdirs = glob.glob('/home/user/*/')
print(subdirs)
