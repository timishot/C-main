#!/usr/bin/python3
norm_string = input("Enter a string to hide in Uppercase : ")

secret_string = ""

for char in norm_string:
    secret_string += str(ord(char))

print("secret Message : ", secret_string)

norm_string = ""
for i in range(0, len(secret_string)-1, 2):
    char_code = secret_string[i] + secret_string[i+1]

    norm_string += chr(int(char_code))

print("original Message :", norm_string)
