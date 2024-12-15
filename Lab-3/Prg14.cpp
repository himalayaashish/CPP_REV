#include <iostream>
using namespace std;

int main() {
    cout << "Number, Square, Cube of numbers from 1 to 15:" << endl;
    for (int i = 1; i <= 15; i++) {
        cout << i << " " << i * i << " " << i * i * i << endl;
    }
}