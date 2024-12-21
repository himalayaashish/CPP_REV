// Define a function power that takes two parameter named a , b and return a raised to
// power of b
#include <iostream>
#include <cmath> 
using namespace std;


int power(int a, int b) {
    return pow(a, b);
}

int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;
    cout << a << " raised to the power " << b << " is " << power(a, b) << endl;

}
