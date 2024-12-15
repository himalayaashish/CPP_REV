// Write a program to input three angles of a triangle then find out whether triangle is valid
// or invalid.
#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;
    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
        cout << "Profit: " << sellingPrice - costPrice << endl;
    else if (costPrice > sellingPrice)
        cout << "Loss: " << costPrice - sellingPrice << endl;
    else
        cout << "No profit, no loss." << endl;
}
