// Define a function that takes a number as parameter and return octal of that number
#include <iostream>
using namespace std;

string to_octal(int n) {
    string octal = "";
    while (n > 0) {
        octal = to_string(n % 8) + octal;
        n /= 8;
    }
    return octal;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Octal: " << to_octal(num) << endl;
    return 0;
}
