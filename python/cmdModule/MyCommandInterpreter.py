#!/usr/bin/python3
import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

    def help_greet(self):
        print("Greet a person by name")

    def help_exit(self):
        print("Exit the program")

    def default(self, line):
        print("Invalid command")


if __name__ == "__main__":
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '>'
    myInterpreter.cmdloop("welcome to the command prompt!")
