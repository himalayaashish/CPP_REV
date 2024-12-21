// Define a function prime that takes a number as parameter and return 1 it number is
// prime otherwise return 0
#include <iostream>
using namespace std;

int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (prime(num) ? "Prime" : "Not Prime") << endl;
}
