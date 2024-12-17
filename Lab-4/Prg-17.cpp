// Write a program to display the n terms of harmonic series and their sum.
//  1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n 

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    cout << "Harmonic series: ";
    for (int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if (i < n) cout << " + ";
        sum += 1.0 / i;
    }
    cout << "\nSum of the series: " << sum << endl;

}
