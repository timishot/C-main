#!/usr/bin/python3

class Mapping:
    def __init__(self, iterable):
        self.items_list = []
        self.__update(iterable)

    def update(self, iterable):
        for item in iterable:
            self.items_list.append(item)

    __update = update # private copy of original update() method

class MappingSubClass(Mapping):

    def update(self, keys, values):
        #Provides new signature for update()
        #But does not break __init__()
        for item in zip(keys, values):
            self.items_list.append(item)

if __name__ == "__main__":
    mapping = Mapping(['apple', 'banana', 'orange'])

    #update the mapping with additional items
    mapping.update(['grape', 'kiwi', 'pinapple'])

    # Print the items  in the mapping
    print(mapping.items_list)

