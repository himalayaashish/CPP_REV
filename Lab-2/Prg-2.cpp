// Write a program to input a character and print message based on input
// a. Give message “Start” if user enter ‘s’ // b. Give message “End” if user enter ‘e’ c. Give message “Exit” if user enter ‘t’
#include <iostream>
using namespace std;
int main() {
    char day;
    cout << "Enter a day number (s,e,t): ";
    cin >> day;
    switch (day) {
        case 's':
            cout << "Start" << endl;
            break;
        case 'e':
            cout << "End" << endl;
            break;
        case 't':
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between s,e or t." << endl;
            break;
    }
}
