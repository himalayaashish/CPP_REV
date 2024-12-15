#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers greater than 1 and less than 50: ";
    for (int i = 2; i < 50; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Odd numbers greater than 50 and less than 100: ";
    for (int i = 51; i < 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}