import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg + "!")
        print("Last command:", self.lastcmd)

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

