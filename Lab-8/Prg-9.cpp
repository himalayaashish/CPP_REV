// 9. Simple Data Management:
// Define a class Product with attributes:
// •	id (int)
// •	name (string)
// •	price (float)
// Create an array of 3 objects, set the details for each product, and display the information.
#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    void set_details(int pid, const string& pname, float pprice) {
        id = pid;
        name = pname;
        price = pprice;
    }

    void display_details() const {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    Product products[3];

    products[0].set_details(1, "Laptop", 1200.50);
    products[1].set_details(2, "Phone", 800.00);
    products[2].set_details(3, "Tablet", 400.25);

    cout << "Product List:\n";
    for (int i = 0; i < 3; ++i) {
        products[i].display_details();
    }
}
