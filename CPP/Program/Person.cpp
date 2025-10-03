#pragma once
#include <iostream>
#include <string>

using namespace std;

// Base class for Person
class Person {
    // Attributes common to all persons
    private:
        string name;
        int age;
        string gender;

    public:
        // Default constructor
        Person(){
            this->name = "";
            this->age = 0;
            this->gender = "";
        }
        // Parameterized constructor
        Person(string name, int age, string gender){
            this->name = name;
            this->age = age;
            this->gender = gender;
        }
        
        // Setters and Getters
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }

        void setAge(int age){
            this->age = age;
        }

        int getAge(){
            return this->age;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        string getGender(){
            return this->gender;
        }

        ~Person(){
        }
};