import cmd

class MyCommandInterpreter(cmd.Cmd):
    prompt = '> '  # Custom prompt string

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.cmdloop("Welcome to the command prompt!")

