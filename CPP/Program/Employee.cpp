#pragma once
#include <iostream>
#include <string>
#include "Person.cpp"

// This class represents an Employee, inheriting from Person
class Employee : public Person {
    // Attributes specific to Employee
    private:
        string employeeId;
        string position;

    public:
        // Default constructor
        Employee(){
        }

        // Parameterized constructor
        Employee(string name, int age, string gender, string employeeId, string position)
            : Person(name, age, gender) {
            this->employeeId = employeeId;
            this->position = position;
        }

        // Setters and Getters
        void setEmployeeId(string employeeId) {
            this->employeeId = employeeId;
        }

        string getEmployeeId() {
            return this->employeeId;
        }

        void setPosition(string position) {
            this->position = position;
        }

        string getPosition() {
            return this->position;
        }

        ~Employee(){
        }

        // For printing employee details
        void printEmployee() {
            cout << getEmployeeId() << "\t" << getName() << "\t" << getGender() << "\t" << getAge() << "\t" << getPosition() << endl;
        }
};