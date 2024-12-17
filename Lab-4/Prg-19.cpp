// Write a program to find Strong Number.
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
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num > 0) {
        sum += factorial(num % 10);
        num /= 10;
    }
    if (sum == original)
        cout << original << " is a Strong Number." << endl;
    else
        cout << original << " is not a Strong Number." << endl;
}
