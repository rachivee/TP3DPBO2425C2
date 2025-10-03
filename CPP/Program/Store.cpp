#pragma once
#include <vector>
#include "Album.cpp"
#include "Customer.cpp"
#include "Employee.cpp"
#include "Vip.cpp"

// This class represents a Store that contains albums, customers, employees, and VIP customers
class Store {
    private:
        // Vectors to hold albums, customers, employees, and VIP customers
        vector<Album> albums;
        vector<Customer> customers;
        vector<Employee> employees;
        vector<VIPCustomer> vipCustomers;
        // Address of the store
        string address; 

    public:
        // Setters and Getters for address
        void setAddress(string address){
            this->address = address;
        }

        string getAddress(){
            return this->address;
        }
        
        // Methods to add albums
        void addAlbum(Album album) {
            albums.push_back(album);
        }
         // Methods to add customers
        void addCustomer(Customer customer) {
            customers.push_back(customer);
        }
        // Methods to add employees
        void addEmployee(Employee employee) {
            employees.push_back(employee);
        }
        // Methods to add VIP customers
        void addVIPCustomer(VIPCustomer vip) {
            vipCustomers.push_back(vip);
        }
        // Method to print all data in the store
        void printAllData() {
            cout << "\n=== Album List ===" << endl; // Print album list
            if(albums.empty()){ // Check if albums vector is empty or not to show different output
                cout << "Belum ada data album\n";
            }else{
                cout << "--------------------------------------------------" << endl;
                cout << left << setw(20) << "Title"
                    << setw(15) << "Group"
                    << setw(10) << "Price"
                    << setw(5)  << "Stock" << endl; // Print headers for album details
                cout << "--------------------------------------------------" << endl;
                for (int i = 0; i < albums.size(); i++) { // Loop through albums vector and print each album
                    albums[i].printAlbum();
                }
                cout << "--------------------------------------------------" << endl;
            }

            cout << "\n=== Customer List ===\n"; // Print customer list
            if(customers.empty()){ // Check if customers vector is empty or not to show different output
                cout << "Belum ada data customer\n";
            }else{
                cout << "--------------------------------------------------" << endl;
                cout << "ID\tPhone Number\tName\tAge\tFav. Group" << endl; // Print headers for customer details
                cout << "--------------------------------------------------" << endl;
                for (int i = 0; i < customers.size(); i++) { // Loop through customers vector and print each customer
                    customers[i].printCustomer();
                }
                cout << "--------------------------------------------------" << endl;
            }

            cout << "\n=== VIP Customer List ===\n"; // Print VIP customer list
            if(vipCustomers.empty()){ // Check if vipCustomers vector is empty or not to show different output
                cout << "Belum ada data customer VIP\n";
            }else{
                cout << "-----------------------------------------------------------------------------------------------" << endl;
                cout << "ID\tPhone Number\tName\t  Age\t  Fav. Group\t Membership\tDiscount(%) Total Spent" << endl; // Print headers for VIP customer details
                cout << "-----------------------------------------------------------------------------------------------" << endl;
                for (int i = 0; i < vipCustomers.size(); i++) { // Loop through vipCustomers vector and print each VIP customer
                    vipCustomers[i].printVIPCustomer();
                }
                cout << "-----------------------------------------------------------------------------------------------" << endl;
            }

            cout << "\n=== Employee List ===\n"; // Print employee list
            if(employees.empty()){ // Check if employees vector is empty or not to show different output
                cout << "Belum ada data employee\n"; 
            }else{
                cout << "--------------------------------------------------------" << endl;
                cout << "ID\tName\tJenis Kelamin\tUmur\tPosition" << endl; // Print headers for employee details
                cout << "--------------------------------------------------------" << endl;
                for (int i = 0; i < employees.size(); i++) { // Loop through employees vector and print each employee
                    employees[i].printEmployee();
                }
                cout << "--------------------------------------------------------" << endl;
            }
        }
};
