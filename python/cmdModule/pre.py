import cmd

class MyCommandInterpreter(cmd.Cmd):
    def precmd(self, line):
        # Preprocessing logic or validation can be performed here
        if not line:
            print("Invalid command")
            return ''
        return line

    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")
