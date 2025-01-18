/*5: Inventory System
Objective:
Create a Product class with the following:

Non-static members:
productName (string)
price (double)
quantity (int)
Static member:
totalProducts (int, to track the total number of products created)
Constructors:
A parameterized constructor to initialize product details.
Methods:
displayProductDetails() to display the product’s name, price, and quantity.
Task:
Write a program to:

Create a list of products using an array or vector.
Display the details of all products.
Show the total count of products using the static member.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product {
private:
    string productName;
    double price;
    int quantity;

public:
    // Static member to track the total number of products
    static int totalProducts;

    // Parameterized constructor
    Product(string name, double p, int q) : productName(name), price(p), quantity(q) {
        totalProducts++;
    }

    // Method to display product details
    void displayProductDetails() const {
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    // Static method to get the total number of products
    static int getTotalProducts() {
        return totalProducts;
    }
};

// Initialize the static member
int Product::totalProducts = 0;

int main() {
    // Create a vector of Product objects
    vector<Product> products;
    products.emplace_back("Laptop", 1200.50, 10);
    products.emplace_back("Smartphone", 800.75, 20);
    products.emplace_back("Headphones", 150.25, 50);

    // Display details of each product
    for (const auto& product : products) {
        product.displayProductDetails();
        cout << endl;
    }

    // Display the total number of products
    cout << "Total number of products: " << Product::getTotalProducts() << endl;

}