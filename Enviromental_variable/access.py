import os

# Get the value of an environment variable
value = os.environ.get('MY_VARIABLE')

#Check if the variable exists before accessing its value
if value is not None:
	print(f"The value of MY_VARIABLE is: {value}")
else:
	print('MY_VARIABLE is not set.')