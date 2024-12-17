// Write a program to input n numbers and print product of all numbers. 

#include <iostream>
using namespace std;

int main() {
    int n, num;
    long long product = 1; 
    cout << "Enter the number of numbers (n): ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> num;
        product *= num;
    }

    cout << "Product of the numbers: " << product << endl;

}
