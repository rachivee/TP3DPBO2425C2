#pragma once
#include <iostream>
#include <string>
#include "Person.cpp"

// This class represents a Customer, inheriting from Person
class Customer : public Person {
    // Attributes specific to Customer
    private:
        string customerId;
        string handphoneNumber;
        string favoriteGroup;

    public:
        // Default constructor
        Customer(){
        }

        // Parameterized constructor
        Customer(string name, int age, string gender, string customerId, string handphoneNumber, string favoriteGroup)
            : Person(name, age, gender) {
            this->customerId = customerId;
            this->handphoneNumber = handphoneNumber;
            this->favoriteGroup = favoriteGroup;
        }

        // Setters and Getters
        void setcustomerId(string customerId){
            this->customerId = customerId;
        } 

        string getcustomerId(){
            return this->customerId;
        }

        void sethandphoneNumber(string handphoneNumber){
            this->handphoneNumber = handphoneNumber;
        } 

        string gethandphoneNumber(){
            return this->handphoneNumber;
        }

        void setfavoriteGroup(string favoriteGroup){
            this->favoriteGroup = favoriteGroup;
        } 

        string getfavoriteGroup(){
            return this->favoriteGroup;
        }

        ~Customer(){
        }
        
        // For printing customer details
        void showDetails() override {
            cout << getcustomerId() << "\t" << gethandphoneNumber() << "\t" << getName() << "\t" << getAge() << "\t" << getfavoriteGroup() << endl;
        }
};
