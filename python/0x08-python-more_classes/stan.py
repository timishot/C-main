#!/usr/bin/python3

class Pet:
    __class_info = "pet animals"

    @staticmethod
    def about ():
        print("This class is about " + Pet.__class_info + "!")


class Dog(Pet):
    __class_info = "man's best friends"
class Cat(Pet):
    __class_info = "all kinds of cats"

Pet.about()
Dog.about()
Cat.about()

