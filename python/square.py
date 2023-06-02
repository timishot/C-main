#!/usr/bin/python3


class Square:

    def __init__(self, height = "0.0", width = "0.0"):
        self.height = height
        self.width = width

    @property
    def height(self):
        print("Retieving the height")

        return self.__height



    @height.setter
    def height(self, value):

        if isinstance(value, float):
            self.__height = value
        else:
            print("Please only enter float for height")

    @property
    def width(self):
        print("Retieving the height")

        return self.__width
    
    
    
    @width.setter
    def width(self, value):
        
        if isinstance(value, float):
            self.__width = value
        else:
            print("Please only enter float for height")

    def getArea(self):
        return int(self.__width) * int(self.__height)


def main():
    aSquare = Square()

    height = float(input("Enter Height : "))
    width = float(input("Enter Width : "))


    aSquare.height = height
    aSquare.width = width

    print("Height : ", aSquare.height)
    print("Width : ", aSquare.width)


    print("The Area is : ", aSquare.getArea())

main()


