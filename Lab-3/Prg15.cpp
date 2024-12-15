#include <iostream>
using namespace std;

int main() {
    cout << "Numbers between 1 to 5000 that are multiples of 3 and 7: ";
    for (int i = 1; i <= 5000; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}