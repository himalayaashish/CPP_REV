// Define a function that takes a number as parameter and finds out smallest digit.
#include <iostream>
using namespace std;

int smallest_digit(int n) {
    int smallest = 9;
    while (n > 0) {
        int digit = n % 10;
        if (digit < smallest) smallest = digit;
        n /= 10;
    }
    return smallest;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Smallest digit: " << smallest_digit(num) << endl;
}
