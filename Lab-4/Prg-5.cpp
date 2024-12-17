// Write a program to input 10 integer numbers and find out the sum of all given numbers

#include <iostream>
using namespace std;

int main() {
    int sum = 0, num;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
    }
    cout << "Sum of the integers: " << sum << endl;
}
