import cmd

class MyCommandInterpreter(cmd.Cmd):
    identchars = 'abcdef'

    def do_hello(self, arg):
        print("Hello, " + arg + "!")

    def do_abc(self, arg):
        print("HEllo, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True



if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

