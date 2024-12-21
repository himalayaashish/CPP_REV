// Write a program to input a number and find out binary of the number.
#include <iostream>
using namespace std;

void decimal_to_binary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    cout << "Binary: " << binary << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    decimal_to_binary(num);
}
