// Write a program to input a number and a digit from the keyboard and find out digit is
// present in the number or not.
#include <iostream>
using namespace std;

int main() {
    int num, digit, found = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to check: ";
    cin >> digit;

    while (num > 0) {
        if (num % 10 == digit) {
            found = 1;
            break;
        }
        num /= 10;
    }

    if (found)
        cout << "The digit is present in the number." << endl;
    else
        cout << "The digit is not present in the number." << endl;

}
