// Write a program to input a number and find out the sum of its digits.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}
