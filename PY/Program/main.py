from Store import Store
from Album import Album
from Customer import Customer
from Employee import Employee
from Vip import VIPCustomer

if __name__ == "__main__":
    toko = Store() # Create Store object
    toko.set_address("Jl. Gegerkalong Girang No. 113, Kota Bandung") # Set store address

    # Print output header
    print("\nKPOP ALBUM STORE")
    print("at", toko.get_address())

    # Output data before adding
    print("\n----------------------------------------------------")
    print("\nDATA SEBELUM DITAMBAHKAN\n")
    toko.print_all_data()

    # Adding data to the store
    # Albums
    toko.add_album(Album("Rich Man", "aespa", 289000, 10))
    toko.add_album(Album("Unlock My World", "fromis_9", 230000, 7))
    toko.add_album(Album("Love Dive", "IVE", 260000, 15))
    toko.add_album(Album("Youth", "TWS", 270000, 8))
    toko.add_album(Album("The Album", "BLACKPINK", 290000, 8))
    toko.add_album(Album("Midnight Guest", "fromis_9", 220000, 10))
    toko.add_album(Album("My World", "aespa", 255000, 9))
    toko.add_album(Album("IVE Secret", "IVE", 265000, 11))
    toko.add_album(Album("Between 1&2", "TWICE", 275000, 13))
    toko.add_album(Album("MAVERICK", "THE BOYZ", 265000, 6))
    toko.add_album(Album("Teddy Bear", "STAYC", 245000, 8))
    toko.add_album(Album("EXPEGO", "NMIXX", 260000, 9))
    toko.add_album(Album("Dark Blood", "ENHYPEN", 275000, 7))
    toko.add_album(Album("ASAP", "STAYC", 240000, 6))

    # Customers
    toko.add_customer(Customer("Ayu", 20, "Perempuan", "C001", "0812345678", "BLACKPINK"))
    toko.add_customer(Customer("Rina", 19, "Perempuan", "C002", "0822334455", "aespa"))
    toko.add_customer(Customer("Yanto", 24, "Laki-laki", "C003", "0877665544", "fromis_9"))
    toko.add_customer(Customer("Maya", 21, "Perempuan", "C004", "0811223344", "IVE"))
    toko.add_customer(Customer("Nina", 26, "Perempuan", "C005", "0899007788", "aespa"))
    toko.add_customer(Customer("Gita", 20, "Perempuan", "C006", "0822445566", "IVE"))
    toko.add_customer(Customer("Intan", 27, "Perempuan", "C007", "0811998877", "fromis_9"))

    # Employees
    toko.add_employee(Employee("Dimas", 25, "Laki-laki", "E001", "Kasir"))
    toko.add_employee(Employee("Sinta", 28, "Perempuan", "E002", "Manajer"))
    toko.add_employee(Employee("Budi", 30, "Laki-laki", "E003", "Stock Manager"))
    toko.add_employee(Employee("Intan", 27, "Perempuan", "E004", "Marketing"))

    # VIP Customers
    toko.add_vip_customer(VIPCustomer("Siti", 21, "Perempuan", "V001", "08211234567", "BLACKPINK", "Gold", 15.0, 500000))
    toko.add_vip_customer(VIPCustomer("Budi", 22, "Perempuan", "V002", "0833445566", "aespa", "Silver", 10.0, 350000))
    toko.add_vip_customer(VIPCustomer("Ahmad", 23, "Perempuan", "V003", "0899001122", "fromis_9", "Gold", 15.0, 480000))
    toko.add_vip_customer(VIPCustomer("Yuna", 26, "Perempuan", "V004", "0812887766", "IVE", "Platinum", 20.0, 800000))
    toko.add_vip_customer(VIPCustomer("David", 25, "Perempuan", "V005", "0855778899", "TWICE", "Gold", 15.0, 550000))
    toko.add_vip_customer(VIPCustomer("Niki", 24, "Perempuan", "V006", "0833554477", "KARD", "Silver", 10.0, 300000))
    toko.add_vip_customer(VIPCustomer("Lia", 29, "Perempuan", "V007", "0899006677", "BLACKPINK", "Gold", 15.0, 650000))
    toko.add_vip_customer(VIPCustomer("Nina", 26, "Perempuan", "V008", "0877665544", "aespa", "Silver", 10.0, 280000))
    toko.add_vip_customer(VIPCustomer("Intan", 27, "Perempuan", "V009", "0822331144", "fromis_9", "Gold", 15.0, 470000))
    toko.add_vip_customer(VIPCustomer("Sari", 25, "Perempuan", "V010", "0811998877", "IVE", "Platinum", 20.0, 900000))

    # Print output after adding
    print("\n----------------------------------------------------")
    print("\nDATA SETELAH DITAMBAHKAN\n")
    toko.print_all_data()
