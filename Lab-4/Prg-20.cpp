// 20. 1! + 2! + 3! + 4! + 5! + ... + n!
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, sum = 0;
    cout << "Enter a number (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    cout << "Sum of factorials up to " << n << " is: " << sum << endl;
}
