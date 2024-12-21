// Define a function to print all Armstrong number that’s comes between1 to 500 and also
// print how many they are.
#include <iostream>
using namespace std;

bool is_armstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

void armstrong_numbers() {
    int count = 0;
    for (int i = 1; i <= 500; i++) {
        if (is_armstrong(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal Armstrong numbers: " << count << endl;
}

int main() {
    armstrong_numbers();
}
