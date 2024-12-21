// Define a function sum_digits_of_number that takes a number n as parameter and
// return the sum of its digit.
#include <iostream>
using namespace std;

int sum_digits_of_number(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The sum of the digits is: " << sum_digits_of_number(number) << endl;
}
