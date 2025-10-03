#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "Customer.cpp"
#include "Membership.cpp"

// This class represents a VIP Customer, inheriting from Customer and Membership
class VIPCustomer : public Customer, public Membership {
    // Attributes specific to VIP Customer
    private:
        int totalSpent;
    
    public:
        // Default constructor
        VIPCustomer() : Customer(), Membership() {}

        // Parameterized constructor
        VIPCustomer(string name, int age, string gender, string customerId, string handphoneNumber, string favoriteGroup, string level, double discount, int totalSpent = 0)
                    : Customer(name, age, gender, customerId, handphoneNumber, favoriteGroup), Membership(level, discount) {
                        this->totalSpent = totalSpent;
        }

        // Setters and Getters
        void setTotalSpent(int total) {
            this->totalSpent = total;
        }

        int getTotalSpent() {
            return this->totalSpent;
        }

        // For printing VIP customer details
        void printVIPCustomer() {
            cout << left 
                << setw(8)  << getcustomerId()
                << setw(16) << gethandphoneNumber()
                << setw(10) << getName()
                << setw(8)  << getAge()
                << setw(15) << getfavoriteGroup()
                << setw(15) << getLevel()
                << setw(12) << getDiscount()
                << setw(12) << getTotalSpent() << endl;
        }
};
