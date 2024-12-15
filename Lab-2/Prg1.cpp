// Write a program to input a day as number from the keyboard and print message based on
// input
// a. Give message “Monday” if user enter 1
// b. Give message “Tuesday” if user enter 2
// c. Give message “Wednesday” if user enter 3
// d. Give message “Thursday” if user enter 4
// e. Give message “Friday” if user enter 5
// f. Give message “Saturday” if user enter 6
// g. Give message “Sunday” if user enter 7
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a day number (1 to 7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
            break;
    }
}
