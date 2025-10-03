from Customer import Customer
from Membership import Membership

class VIPCustomer(Customer, Membership): # Inherit from Customer and Membership
    # Constructor
    def __init__(self, name="", age=0, gender="", customer_id="", handphone_number="", favorite_group="", level="", discount=0.0, total_spent=0):
        Customer.__init__(self, name, age, gender, customer_id, handphone_number, favorite_group)
        Membership.__init__(self, level, discount)
        self._total_spent = total_spent

    # Getter and Setter methods for total_spent
    def set_total_spent(self, total):
        self._total_spent = total

    def get_total_spent(self):
        return self._total_spent    

    # Method to print VIP customer details
    def print_vip_customer(self):
        print(f"{self.get_customer_id():<8}"
            f"{self.get_handphone_number():<16}"
            f"{self.get_name():<10}"
            f"{str(self.get_age()):<8}"
            f"{self.get_favorite_group():<15}"
            f"{self.get_level():<15}"
            f"{(self.get_discount()):<12}"
            f"{self.get_total_spent():<10}")
