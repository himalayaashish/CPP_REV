#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 1 to 5000 that are not multiples of 3 or 5: ";
    for (int i = 1; i <= 5000; i++) {
        if (i % 2 == 0 && i % 3 != 0 && i % 5 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}