class Person:
    # Constructor
    def __init__(self, name="", age=0, gender=""):
        self._name = name
        self._age = age
        self._gender = gender

    # Getter and Setter methods for name
    def set_name(self, name):
        self._name = name

    def get_name(self):
        return self._name

    # Getter and Setter methods for age
    def set_age(self, age):
        self._age = age

    def get_age(self):
        return self._age

    # Getter and Setter methods for gender
    def set_gender(self, gender):
        self._gender = gender

    def get_gender(self):
        return self._gender
