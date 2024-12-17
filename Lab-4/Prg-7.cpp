// Write a program to input a number and print all the digits of the given number

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Digits of " << num << " are: ";
    while (num > 0) {
        cout << num % 10 << " ";
        num /= 10;
    }
    cout << endl;
}
