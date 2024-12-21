// 18. Define a function that takes a number as parameter and display table of the number.
#include <iostream>
using namespace std;

void display_table(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    display_table(num);
}
