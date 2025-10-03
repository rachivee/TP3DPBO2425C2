class Membership:
    # Constructor
    def __init__(self, level="", discount=0.0):
        self._level = level
        self._discount = discount

    # Getter and Setter methods for level
    def set_level(self, level):
        self._level = level

    def get_level(self):
        return self._level

    # Getter and Setter methods for discount
    def set_discount(self, discount):
        self._discount = discount

    def get_discount(self):
        return self._discount

    # Method to print membership details
    def show_membership(self):
        print(f"{self.get_level()}\t{self.get_discount()}")
