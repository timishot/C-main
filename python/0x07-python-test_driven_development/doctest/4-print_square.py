#!/usr/bin/python3

def print_square(size):
    if not isinstance(size, int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    if not isinstance(size, float) and size < 0:
        raise TypeError("sizemust be an integer")

    for i in range(size):
        print("#"*size)


if __name__ == "__main__":
    print_square(5)


