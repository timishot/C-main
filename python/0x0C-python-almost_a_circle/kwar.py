#!/usr/bin/python3

def greet_me(**kwarg):
    for key, value in kwarg.items():
        print("{}: {}".format(key, value))



if __name__ == "__main__":
    kwargs = {"arg3": 3, "arg2": "two","arg1":5}
    greet_me(**kwargs)

