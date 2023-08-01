import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def postcmd(self, stop, line):
        if line == 'exit':
            print("Exiting...")
            return True  # Stop the command prompt loop
        else:
            print("Command executed successfully.")
            return False  # Continue the command prompt loop

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")
