#!/usr/bin/python3
import json
import csv

class Base:
    __nb_objects = 0

    def __init__(self, id=None):
        if id != None:
            self.id=id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects


    @staticmethod
    def to_json_string(list_dictionaries):
        if list_dictionaries == [] and list_dictionaries is none:
            return []
        return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        filename=cls.__name__+ ".json"

        with open(filename, "w") as jsonfile:
            if list_objs is None:
                jsonfile.write([])
            else:
                list_dicts = [o.to_dictionary() for o in list_objs]
                jsonfile.write(Base.to_json_string(list_dicts))

    @staticmethod
    def from_json_string(json_string):
        if json_string is None or json_string == "[]":
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        if dictionary or dictionary != {}:
            if cls.__name__ == "Rectangle":
                new = cls(1, 1)
            else:
                new=cls(1)
            new.update(**dictionary)
            return new


    @classmethod
    def load_from_file(cls):
        filename = str(cls.__name__) + ".json"
        try:
            with open(filename, "r", encoding = "utf-8") as jsonfile:
                json_data = jsonfile.read()
                data = cls.from_json_string(json_data)
                instance = [cls.create(**a)  for a in data]
                return instance
        except FileNotFoundError:
            return []
    @classmethod
    def save_to_file_csv(cls, list_objs):
        filename = cls.__name__ + ".csv"

        with open(filename, "w", newline='') as csvfile:
            writer = csv.writer(csvfile)

            if list_objs is None or len(list_objs) == 0:
                writer.writerow(["[]"]) # Writing the empty list as a single row

            else:
                if cls.__name__ == "Rectangle": 
                    for obj in list_objs:
                        data = [obj.id, obj.width, obj.height, obj.x, obj.y]
                        writer.writerow(data)
                elif cls.__name__ == "Square":
                    for obj in list_objs:
                        data = [obj.id, obj.size, obj.x, obj.y]
                        writer.writerow(data)

    @classmethod
    def load_from_file_csv(cls):
        filename = cls.__name__ + ".csv"
        object = []
        try:
            with open(filename, "r") as file:
                reader = csv.reader(file)
                for row in reader:
                    if cls.__name__ ==  "Rectangle":
                        obj = Rectangle(int(row[0]), int(row[1]), int(row[2]), int(row[3]), int(row[4]))
                    elif cls.__name__ == "Square":
                        obj = Square(int(row[0]), int(row[1]), int(row[2]), int(row[3]))
                    object.append(obj)
        except FileNotFoundError:
            return []

        return objects




