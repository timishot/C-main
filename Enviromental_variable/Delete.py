import os

# Delete an environment variable
if 'MY_VARIABLE' in os.environ:
    del os.environ['MY_VARIABLE']

# Now, attempting to access it will return None
value = os.environ.get('MY_VARIABLE')
print(f'The value of MY_VARIABLE is: {value}')