// Write a program to count how many leap years comes between 1950 to 2021 and print all
// leap years
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    cout << "Leap years between 1950 and 2021:" << endl;
    for (int year = 1950; year <= 2021; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
            count++;
        }
    }
    cout << "\nTotal number of leap years: " << count << endl;
}
