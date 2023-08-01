import cmd

class MyCommandInterpreter(cmd.Cmd):
    def preloop(self):
        print("Initializing command prompt...")
        # Perform any necessary setup or initialization here

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '

    myInterpreter.preloop()  # Custom initialization
    myInterpreter.cmdloop("Welcome to the command prompt!")

