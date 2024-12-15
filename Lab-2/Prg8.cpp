// If cost price and selling price of an item is input through the keyboard, write a program
// to determine whether the seller has made profit or incurred loss. Also determine how
// much profit he made or loss he incurred
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
