import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_add(self, arg):
        values = arg.split()
        result = sum(map(int, values))
        print("Sum:", result)

    def postcmd(self, stop, line):
        print("Command executed successfully.")
        return False  # Continue the command prompt loop

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

