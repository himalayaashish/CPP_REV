// Define a function that takes a binary of number as parameter and print decimal of it.
#include <iostream>
#include <cmath>
using namespace std;

int binary_to_decimal(string binary) {
    int decimal = 0, base = 1;
    for (int i = binary.size() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal: " << binary_to_decimal(binary) << endl;
}
