// 5. Write a program to check whether a number is divisible by 5 not.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 5 == 0) {
        cout << number << " is divisible by 5." << endl;
    } else {
        cout << number << " is not divisible by 5." << endl;
    }
}
