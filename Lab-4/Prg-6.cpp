// Write a program to input N integer numbers and find out the product of all given numbers.

#include <iostream>
using namespace std;

int main() {
    int n, num;
    long long product = 1; 
    cout << "Enter the number of integers (N): ";
    cin >> n;
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        product *= num;
    }
    cout << "Product of the integers: " << product << endl;
}
