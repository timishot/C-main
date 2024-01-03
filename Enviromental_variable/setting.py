import os
# Set the value of an enviromment variable
os.environ['MY_VARIABLE'] = 'my_value'

#Now, you can access it
value=os.environ.get('MY_VARIABLE')
print(f'The value of MY_VARIABLE is: {value}')