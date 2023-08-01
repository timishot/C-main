import cmd

class MyCommandInterpreter(cmd.Cmd):
    def emptyline(self):
        print("No command entered.")

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

