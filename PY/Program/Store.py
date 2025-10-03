from Album import Album
from Customer import Customer
from Employee import Employee
from Vip import VIPCustomer

class Store: # Store composite with Album, Customer, Employee, VIPCustomer
    def __init__(self): # Constructor
        self.albums = []
        self.customers = []
        self.employees = []
        self.vip_customers = []
        self._address = ""

    # Getter and Setter methods for address
    def set_address(self, address):
        self._address = address

    def get_address(self):
        return self._address

    # Methods to add data to the lists
    def add_album(self, album):
        self.albums.append(album)

    # Method to add customer
    def add_customer(self, customer):
        self.customers.append(customer)

    # Method to add employee
    def add_employee(self, employee):
        self.employees.append(employee)

    # Method to add VIP customer
    def add_vip_customer(self, vip):
        self.vip_customers.append(vip)

    # Method to print all data
    def print_all_data(self):
        print("\n=== Album List ===")
        if not self.albums: # Check if album list is empty because it will show different output
            print("Belum ada data album")
        else: # If not empty, print the album list
            print("--------------------------------------------------")
            print(f"{'Title':20}{'Group':15}{'Price':10}{'Stock':5}")
            print("--------------------------------------------------")
            for album in self.albums:
                album.print_album()
            print("--------------------------------------------------")

        print("\n=== Customer List ===")
        if not self.customers: # Check if customer list is empty because it will show different output
            print("Belum ada data customer")
        else: # If not empty, print the customer list
            print("--------------------------------------------------")
            print("ID\tPhone Number\tName\tAge\tFav. Group")
            print("--------------------------------------------------")
            for c in self.customers:
                c.print_customer()
            print("--------------------------------------------------")

        print("\n=== VIP Customer List ===")
        if not self.vip_customers: # Check if VIP customer list is empty because it will show different output
            print("Belum ada data customer VIP")
        else: # If not empty, print the VIP customer list
            print("-----------------------------------------------------------------------------------------------")
            print("ID\tPhone Number\tName \t  Age\t  Fav. Group\t Membership\tDiscount(%) Total Spent")
            print("-----------------------------------------------------------------------------------------------")
            for v in self.vip_customers:
                v.print_vip_customer()
            print("-----------------------------------------------------------------------------------------------")

        print("\n=== Employee List ===")
        if not self.employees: # Check if employee list is empty because it will show different output
            print("Belum ada data employee")
        else: # If not empty, print the employee list
            print("--------------------------------------------------------")
            print("ID\tName\tJenis Kelamin\tUmur\tPosition")
            print("--------------------------------------------------------")
            for e in self.employees:
                e.print_employee()
            print("--------------------------------------------------------")
