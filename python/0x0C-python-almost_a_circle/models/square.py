#!/usr/bin/python3
from models.rectangle import Rectangle

class Square(Rectangle):
    "define square class"
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)

    def area(self):
        return self.width * self.height

    def __str__(self):
        return "[square] ({}) {}/{} - {}".format(self.id, self.x, self.y, self.width)
