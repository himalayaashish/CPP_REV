// Define a function roman for convert number into roman number m 1000 d 500 c 100 l 50 x 10 v 5i 1 e.g 1988 mdcccclxxxviii
#include <iostream>
using namespace std;

void roman(int num) {
    string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            cout << romanNumerals[i];
            num -= values[i];
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    roman(num);
    return 0;
}
