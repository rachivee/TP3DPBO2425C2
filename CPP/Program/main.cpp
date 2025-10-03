#include <iostream>
#include "Store.cpp"

using namespace std;

int main() {
    // Create a Store object
    Store toko;

    // Set the address of the store
    toko.setAddress("Jl. Gegerkalong Girang No. 113, Kota Bandung");

    // Headers for the output
    cout << "\nKPOP ALBUM STORE" << endl;
    cout << "at " << toko.getAddress() << endl;

    // Print the initial data
    cout << "\n----------------------------------------------------" << endl;
    cout << "\nDATA SEBELUM DITAMBAHKAN\n" << endl;
    toko.printAllData();
    
    // Adding multiple albums
    toko.addAlbum(Album("Rich Man", "aespa", 289000, 10));
    toko.addAlbum(Album("Unlock My World", "fromis_9", 230000, 7));
    toko.addAlbum(Album("Love Dive", "IVE", 260000, 15));
    toko.addAlbum(Album("Youth", "TWS", 270000, 8));
    toko.addAlbum(Album("The Album", "BLACKPINK", 290000, 8));
    toko.addAlbum(Album("Midnight Guest", "fromis_9", 220000, 10));
    toko.addAlbum(Album("My World", "aespa", 255000, 9));
    toko.addAlbum(Album("IVE Secret", "IVE", 265000, 11));
    toko.addAlbum(Album("Between 1&2", "TWICE", 275000, 13));
    toko.addAlbum(Album("MAVERICK", "THE BOYZ", 265000, 6));
    toko.addAlbum(Album("Teddy Bear", "STAYC", 245000, 8));
    toko.addAlbum(Album("EXPEGO", "NMIXX", 260000, 9));
    toko.addAlbum(Album("Dark Blood", "ENHYPEN", 275000, 7));
    toko.addAlbum(Album("ASAP", "STAYC", 240000, 6));

    // Adding multiple customers
    toko.addCustomer(Customer("Ayu", 20, "Perempuan", "C001", "0812345678", "BLACKPINK"));
    toko.addCustomer(Customer("Rina", 19, "Perempuan", "C002", "0822334455", "aespa"));
    toko.addCustomer(Customer("Yanto", 24, "Laki-laki", "C003", "0877665544", "fromis_9"));
    toko.addCustomer(Customer("Maya", 21, "Perempuan", "C004", "0811223344", "IVE"));
    toko.addCustomer(Customer("Nina", 26, "Perempuan", "C005", "0899007788", "aespa"));
    toko.addCustomer(Customer("Gita", 20, "Perempuan", "C006", "0822445566", "IVE"));
    toko.addCustomer(Customer("Intan", 27, "Perempuan", "C007", "0811998877", "fromis_9"));

    // Adding multiple employees
    toko.addEmployee(Employee("Dimas", 25, "Laki-laki", "E001", "Kasir"));
    toko.addEmployee(Employee("Sinta", 28, "Perempuan", "E002", "Manajer"));
    toko.addEmployee(Employee("Budi", 30, "Laki-laki", "E003", "Stock Manager"));
    toko.addEmployee(Employee("Intan", 27, "Perempuan", "E004", "Marketing"));

    // Adding multiple VIP customers
    toko.addVIPCustomer(VIPCustomer("Siti", 21, "Perempuan", "V001", "08211234567", "BLACKPINK", "Gold", 15.0, 500000));
    toko.addVIPCustomer(VIPCustomer("Budi", 22, "Perempuan", "V002", "0833445566", "aespa", "Silver", 10.0, 350000));
    toko.addVIPCustomer(VIPCustomer("Ahmad", 23, "Perempuan", "V003", "0899001122", "fromis_9", "Gold", 15.0, 480000));
    toko.addVIPCustomer(VIPCustomer("Yuna", 26, "Perempuan", "V004", "0812887766", "IVE", "Platinum", 20.0, 800000));
    toko.addVIPCustomer(VIPCustomer("David", 25, "Perempuan", "V005", "0855778899", "TWICE", "Gold", 15.0, 550000));
    toko.addVIPCustomer(VIPCustomer("Niki", 24, "Perempuan", "V006", "0833554477", "KARD", "Silver", 10.0, 300000));
    toko.addVIPCustomer(VIPCustomer("Lia", 29, "Perempuan", "V007", "0899006677", "BLACKPINK", "Gold", 15.0, 650000));
    toko.addVIPCustomer(VIPCustomer("Nina", 26, "Perempuan", "V008", "0877665544", "aespa", "Silver", 10.0, 280000));
    toko.addVIPCustomer(VIPCustomer("Intan", 27, "Perempuan", "V009", "0822331144", "fromis_9", "Gold", 15.0, 470000));
    toko.addVIPCustomer(VIPCustomer("Sari", 25, "Perempuan", "V010", "0811998877", "IVE", "Platinum", 20.0, 900000));

    // Print all data after adding
    cout << "\n----------------------------------------------------" << endl;
    cout << "\nDATA SETELAH DITAMBAHKAN\n" << endl;
    toko.printAllData();

    return 0;
}
