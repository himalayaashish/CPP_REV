// Write a program to input a number and find out that is Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

}
