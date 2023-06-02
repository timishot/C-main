#!/usr/bin/python3

class Node:
    """initialize the data"""

    def __init__(self, data, next_node = None):
        self.__data = data
        self.__next_node = next_node

    @property
    def data(self):
        """getter for a private attribute"""
        return self.__data

    @data.setter
    def data(self, value):
        if not isinstance(value , int):
            raise TypeError("data must be an integer")

        self.__data = value
    
    @property
    def next_node(self):
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        if value is not None and not isinstance(value, Node):
            raise TypeError("next node must be a Node object")
        self.__next_node = value


class SinglyLinkedList:

    def __init__(self):
        self.__head = None

    def sort_insert(self, value):
        new_node = Node(value)


        if self.__head is None or value < self.__head.data:
            new_node.next_node = self.__head
            self.__head = new_node
        else:
            current = self.__head
            while current.next_node is not None and current.next_node.data < value:
                curent = current.next.node
            new_node.next_node = currenr.next_node
            currenr.next_node = new_node

    def __str__(self):
        result = ""
        currenr = self.__head
        while current is not None:
            result += str(current.data) +"\n"
            current = current.next.next_node
        return result



