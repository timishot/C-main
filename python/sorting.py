#!/usr/bin/python3

students = [("John",80), ("Jane", 90), ("Bob", 75), ("Alice", 85)]
sorted_students = sorted(students, key=lambda x: x[1], reverse=True)

for student in sorted_students:
    print(student[0], student[1])

