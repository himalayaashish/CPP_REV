// Define these functions
// a. Addition of two numbers
// b. Subtraction of two numbers
// c. Multiply of two numbers
// d. Division of two numbers 
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int a = 10, b = 5;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Division: " << divide(a, b) << endl;
}
