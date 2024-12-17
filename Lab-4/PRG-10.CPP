// Write a program to input a number and find out how many digits in the number

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        count++;
        num /= 10;
    }
    cout << "Number of digits: " << count << endl;
}
