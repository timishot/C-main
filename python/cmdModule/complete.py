import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def complete(self, text, line, begidx, endidx):
        commands = ['greet', 'exit', 'help']

        if text:
            completions = [command for command in commands if command.startswith(text)]
        else:
            completions = commands[:]

        return completions

    def do_exit(self, arg):
        print("Exiting...")
        return True

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '
    myInterpreter.cmdloop("Welcome to the command prompt!")

