#include <iostream>
#include <string>

using namespace std;

// This class represents a Membership
class Membership {
    // Attributes of the Membership
    protected:
        string level;
        double discount;

    public:
        // Default constructor
        Membership() {
            this->level = "Basic";
            this->discount = 0.0;
        }

        // Parameterized constructor
        Membership(string level, double discount) {
            this->level = level;
            this->discount = discount;
        }

        // Setters and Getters
        void setLevel(string level) {
            this->level = level;
        }

        string getLevel() {
            return this->level;
        }

        void setDiscount(double discount) {
            this->discount = discount;
        }

        double getDiscount() {
            return this->discount;
        }

        ~Membership() {
        }

        // For printing membership details
        void showMembership() {
            cout << getLevel() << "\t" << getDiscount() << endl;
        }
};