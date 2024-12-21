// Define a function named leap_year that takes a parameter named year of type int and
// return 1 if year is leap year otherwise return 0.

#include <iostream>
using namespace std;

int leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}
