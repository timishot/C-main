#!/usr/bin/python3

import cmd 

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg+ "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True


if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '

    myInterpreter.onecmd("greet Alice")
