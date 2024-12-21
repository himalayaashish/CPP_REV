// Define a function that takes a number as parameter and finds out largest digit.
#include <iostream>
using namespace std;

int largest_digit(int n) {
    int largest = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > largest) largest = digit;
        n /= 10;
    }
    return largest;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Largest digit: " << largest_digit(num) << endl;
}
