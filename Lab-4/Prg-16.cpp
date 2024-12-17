// Write a program to input n numbers and find out largest number
#include <iostream>
using namespace std;

int main() {
    int n, num, largest;
    cout << "Enter the number of numbers (n): ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    cin >> largest; 

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > largest) {
            largest = num;
        }
    }

    cout << "The largest number is: " << largest << endl;

}
