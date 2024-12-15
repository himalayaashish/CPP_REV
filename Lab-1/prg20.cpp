// Write a program to take input of a three digits and print square of each digit of a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number :-";
    cin >> num;
    if (num < 100 || num > 999) {
        cout << "Please enter a valid three-digit number." << endl;
        return 1;
    }
    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;
    int square1 = digit1 * digit1;
    int square2 = digit2 * digit2;
    int square3 = digit3 * digit3;
    cout << "Square of " << digit1 << " is " << square1 << endl;
    cout << "Square of " << digit2 << " is " << square2 << endl;
    cout << "Square of " << digit3 << " is " << square3 << endl;
}
