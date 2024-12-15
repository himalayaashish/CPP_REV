#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 20 to 40: ";
    for (int i = 20; i <= 40; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Odd numbers between 70 to 90: ";
    for (int i = 71; i <= 89; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}