// 23. Define a function to find HCF (GCD) of two numbers.
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF (GCD): " << gcd(num1, num2) << endl;
}
