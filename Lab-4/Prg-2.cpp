// Write a program to input two numbers and store into two variables named a, b respectively
// and calculate the a^b.
#include <iostream>
using namespace std;

int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (b): ";
    cin >> b;
    int result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;
}
