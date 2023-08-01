import cmd

class MyCommandInterpreter(cmd.Cmd):
    intro = "Welcome to the command prompt! Type 'help' for assistance."

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop()  # No need to pass the intro message as an argument

