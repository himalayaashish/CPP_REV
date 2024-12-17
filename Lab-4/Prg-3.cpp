// Write a program to print all leap year that comes between 1950 to 2021 and print all leap
// years. hint year %4 ==0 && year %100 != 0 || year % 400 ==0
#include <iostream>
using namespace std;

int main() {
    cout << "Leap years between 1950 and 2021:" << endl;
    for (int year = 1950; year <= 2021; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
}
