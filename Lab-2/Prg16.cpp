// Write a program to check whether the triangle is equilateral, isosceles or scalene
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "The triangle is equilateral." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

}
