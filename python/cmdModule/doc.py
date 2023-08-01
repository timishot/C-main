import cmd

class MyCommandInterpreter(cmd.Cmd):
    doc_header = "Available commands (type help <command>):"

    def do_greet(self, arg):
        """Greet the specified person."""
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        """Exit the command prompt."""
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

