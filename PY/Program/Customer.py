from Person import Person

class Customer(Person): # Inherit from Person
    # Constructor
    def __init__(self, name="", age=0, gender="", customer_id="", handphone_number="", favorite_group=""):
        super().__init__(name, age, gender)
        self._customer_id = customer_id
        self._handphone_number = handphone_number
        self._favorite_group = favorite_group

    # Getter and Setter methods for customer_id
    def set_customer_id(self, customer_id):
        self._customer_id = customer_id

    def get_customer_id(self):
        return self._customer_id

    # Getter and Setter methods for handphone_number
    def set_handphone_number(self, handphone_number):
        self._handphone_number = handphone_number

    def get_handphone_number(self):
        return self._handphone_number

    # Getter and Setter methods for favorite_group
    def set_favorite_group(self, favorite_group):
        self._favorite_group = favorite_group

    def get_favorite_group(self):
        return self._favorite_group

    # Method to print customer details
    def print_customer(self):
        print(f"{self.get_customer_id()}\t{self.get_handphone_number()}\t {self.get_name()}\t{self.get_age()}\t{self.get_favorite_group()}")
