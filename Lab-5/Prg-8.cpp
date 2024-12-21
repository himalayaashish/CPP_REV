// Define a function named factorial that takes only one parameter of type integer
// named n that returns factorial of the given parameter n.
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
        return -1;
    }

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);
    if (result != -1) {
        cout << "Factorial of " << n << " is " << result << endl;
    }
}
