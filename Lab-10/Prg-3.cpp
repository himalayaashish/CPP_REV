// 3. Geometry (Circle Area Calculator)
// Objective:
// Create a Circle class with the following:

// Non-static members:
// radius (double)
// Static member:
// pi (const double, initialize to 3.14159)
// Constructors:
// Parameterized constructor to set the radius.
// Default constructor to set the radius to 1.
// Methods:
// calculateArea() to return the area of the circle.
// Task:
// Write a program to:

// Create multiple circles with different radii.
// Calculate and print their areas using the static value of pi.

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Static member to hold the value of pi
    static const double pi;

    // Parameterized constructor
    Circle(double r) : radius(r) {}

    // Default constructor
    Circle() : radius(1.0) {}

    // Method to calculate the area of the circle
    double calculateArea() const {
        return pi * radius * radius;
    }

    // Method to display circle details
    void displayDetails() const {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// Initialize the static member
const double Circle::pi = 3.14159;

int main() {
    // Create Circle objects with different radii
    Circle circle1(5.0);
    Circle circle2(3.0);
    Circle circle3;

    // Display details of each circle
    cout << "Circle 1 Details:" << endl;
    circle1.displayDetails();
    cout << endl;

    cout << "Circle 2 Details:" << endl;
    circle2.displayDetails();
    cout << endl;

    cout << "Circle 3 Details (Default):" << endl;
    circle3.displayDetails();
    cout << endl;
}