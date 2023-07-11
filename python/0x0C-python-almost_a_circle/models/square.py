#!/usr/bin/python3
from models.rectangle import Rectangle

class Square(Rectangle):
    "define square class"
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        return self.width

    @size.setter
    def size(self, value):
        self.width= value
        self.height= value

    def area(self):
        return self.width * self.height

    def update(self, *args, **kwargs):
        if args and len(args) != 0:
            a=0
            for arg in args:
                if a == 0:
                    if arg == None:
                        self.__init__(self.size, self.x, self.y)
                    else:
                        self.id = arg
                elif a == 1:
                    self.size = arg
                elif a == 2:
                    self.x = arg
                elif a == 3:
                    self.y=arg
                a += 1

        elif kwargs and len(kwargs) != 0:
            for key, value in kwargs.items():
                if key == "id":
                    if value == None:
                        self.__init__(self.size, self.x, self.y)
                    else:
                        self.id = value

                elif key == "size":
                    self.size = value
                elif key == "x":
                    self.x = value
                elif key == "y":
                    self.y = value


    def __str__(self):
        return "[square] ({}) {}/{} - {}".format(self.id, self.x, self.y, self.width)
