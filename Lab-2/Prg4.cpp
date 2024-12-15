// Write a program to input a number and perform task as follows
// a. If user enter 1, input a number and find out area of circle
// b. If user enter 2, input a length and breadth and find out area of rectangle
// c. If user enter 3, input five floating number and find out the average.
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Enter a choice (1: Area of Circle, 2: Area of Rectangle, 3: Average of 5 numbers): ";
    cin >> choice;
    switch (choice) {
        case 1: {
            double radius;
            const double PI = 3.14159;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "Area of the circle is " << area << endl;
            break;
        }
        case 2: {
            double length, breadth;
            cout << "Enter the length and breadth of the rectangle: ";
            cin >> length >> breadth;
            double area = length * breadth;
            cout << "Area of the rectangle is " << area << endl;
            break;
        }
        case 3: {
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

    return 0;
}
