class Album: 
    # Constructor
    def __init__(self, title="", group="", price=0, stock=0):
        self._title = title
        self._group = group
        self._price = price
        self._stock = stock

    # Getter and Setter methods for title
    def set_title(self, title):
        self._title = title

    def get_title(self):
        return self._title

    # Getter and Setter methods for group
    def set_group(self, group):
        self._group = group

    def get_group(self):
        return self._group

    # Getter and Setter methods for price
    def set_price(self, price):
        self._price = price

    def get_price(self):
        return self._price

    # Getter and Setter methods for stock
    def set_stock(self, stock):
        self._stock = stock

    def get_stock(self):
        return self._stock

    # Method to print album details
    def print_album(self):
        print(f"{self.get_title():20}{self.get_group():15}{self.get_price():5}{self.get_stock():6}")
