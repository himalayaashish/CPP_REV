// Define a function that takes three integer parameter a,b,c respectively and returns
// largest of them and a, b, c contains different values.

#include <iostream>
using namespace std;

int largest_of_three(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "The largest number is: " << largest_of_three(a, b, c) << endl;
}
