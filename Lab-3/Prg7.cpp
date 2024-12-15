#include <iostream>
using namespace std;

int main() {
     int n1, n2;
    cout << "Enter two numbers n1 and n2: ";
    cin >> n1 >> n2;
    for (int i = n2; i >= n1; i--) {
        cout << i << " ";
    }
    cout << endl;
}