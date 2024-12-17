// [(11)/1!] + [(22)/2!] + [(33)/3!] + [(44)/4!] + [(55)/5!] + ... + [(nn)/n!]

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter a number (n): ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += pow(i, i) / factorial(i);
    }
    cout << "The result of the series is: " << sum << endl;
}
