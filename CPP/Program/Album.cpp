#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Class representing an Album
class Album {
    // Attributes of the Album
    private:
        string title;
        string group;
        int price;
        int stock;

    public:
        // Default constructor
        Album() {
            this->title = "";
            this->group = "";
            this->price = 0;
            this->stock = 0;
        }

        // Parameterized constructor
        Album(string title, string group, int price, int stock) {
            this->title = title;
            this->group = group;
            this->price = price;
            this->stock = stock;
        }

        // Setters and Getters
        void setTitle(string title) {
            this->title = title;
        }

        string getTitle() {
            return this->title;
        }

        void setGroup(string group) {
            this->group = group;
        }

        string getGroup() {
            return this->group;
        }

        void setPrice(int price) {
            this->price = price;
        }

        int getPrice() {
            return this->price;
        }

        void setStock(int stock) {
            this->stock = stock;
        }

        int getStock() {
            return this->stock;
        }

        ~Album() {
        }

        // For printing album details
        void printAlbum() {
            cout << left << setw(20) << getTitle() << setw(15) << getGroup() << setw(10) << getPrice() << setw(5) << getStock() << endl;
        }

};
