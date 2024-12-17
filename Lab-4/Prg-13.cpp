// Write a program to input a number and a digit from the keyboard and count how many
// times it comes in the number.
#include <iostream>
using namespace std;

int main() {
    int num, digit, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to count: ";
    cin >> digit;

    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }

    cout << "The digit appears " << count << " times in the number." << endl;
}
