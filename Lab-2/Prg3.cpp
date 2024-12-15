// Write a program to input a number and perform task as follows
// a. If user enter 1, input a number and find out square of it
// b. If user enter 2, input a number and find out cube of it
// c. If user enter 3, input five floating number and find out the average.
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a choice (1: Square, 2: Cube, 3: Average of 5 numbers): ";
    cin >> choice;
    switch (choice) {
        case 1: {
            // Find square of a number
            double number;
            cout << "Enter a number to find its square: ";
            cin >> number;
            cout << "Square of " << number << " is " << (number * number) << endl;
            break;
        }
        case 2: {
            // Find cube of a number
            double number;
            cout << "Enter a number to find its cube: ";
            cin >> number;
            cout << "Cube of " << number << " is " << (number * number * number) << endl;
            break;
        }
        case 3: {
            // Find average of five floating-point numbers
            double num, sum = 0.0;
            cout << "Enter 5 floating-point numbers: ";
            for (int i = 0; i < 5; ++i) {
                cin >> num;
                sum += num;
            }
            cout << "Average of the numbers is " << (sum / 5) << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
            break;
    }

}
