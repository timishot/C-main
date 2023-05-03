def get_user_info():
    name = "John Doe"
    age = 30
    gender = "Male"
    id=45
    return name ,age, gender, id
    

user_info = get_user_info()
name, age, gender = user_info

print(name)
print(age)
print(gender)
