import cmd

class MyCommandInterpreter(cmd.Cmd):
    def default(self, line):
        print("Unknown command:", line)

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")


