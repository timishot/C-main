#!/usr/bin/python3

class Dog:
    def __init__(self, name= "", height=0, weight = 0):
        self.name = name
        self.height =height
        self.weight = weight

    def run(self):
        print("{} the dog runs".format(self.name))

    def eat(self):
        print("{} the dogs eats".format(self.name))

    def bark(self):
        print("{} the dog barks".format(self.name))

def main():
    sport = Dog("sport", 66, 26)
    sport.bark()

    bowser = Dog()

    bowser.bark()
main()
