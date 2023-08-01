import cmd

class MyCommandInterpreter(cmd.Cmd):
    def do_greet(self, arg):
        print("Hello, " + arg + "!")

    def do_exit(self, arg):
        print("Exiting...")
        return True

    def custom_postloop(self):
        print("Exiting command prompt. Cleanup complete.")
        # Perform any necessary cleanup or finalization here

if __name__ == '__main__':
    myInterpreter = MyCommandInterpreter()
    myInterpreter.prompt = '> '

    myInterpreter.cmdloop("Welcome to the command prompt!")
    myInterpreter.custom_postloop()  # Custom cleanup or finalization

