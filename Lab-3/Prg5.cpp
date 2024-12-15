#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number for n: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}