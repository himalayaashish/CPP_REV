// Define a function for finding whether the given number is perfect number of not.
// Input : 6 factors of 6 : 1, 2, 3 sum of these factors are same as original number that
// means it is perfect number
#include <iostream>
using namespace std;

bool is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (is_perfect(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
}
