// Write a  program to input a number from the keyboard and find out whether the number is even or odd
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;
}
