from Person import Person

class Employee(Person): # Inherit from Person
    # Constructor
    def __init__(self, name="", age=0, gender="", employee_id="", position=""):
        super().__init__(name, age, gender)
        self._employee_id = employee_id
        self._position = position

    # Getter and Setter methods for employee_id
    def set_employee_id(self, employee_id):
        self._employee_id = employee_id

    def get_employee_id(self):
        return self._employee_id

    # Getter and Setter methods for position
    def set_position(self, position):
        self._position = position

    def get_position(self):
        return self._position

    # Method to print employee details
    def print_employee(self):
        print(f"{self.get_employee_id()}\t{self.get_name()}\t{self.get_gender()}\t{self.get_age()}\t{self.get_position()}")
