// Write a program to take one integer number of five digits (Any number comes between 10000
// to 99999) and store into variable then separate all digits from number and Print sum of digits
// of the number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number :-";
    cin >> num;
    if (num < 10000 || num > 99999) {
        cout << "Please enter a valid five-digit number." << endl;
    }
    int digit1 = num / 10000;
    int digit2 = (num / 1000) % 10;
    int digit3 = (num / 100) % 10;
    int digit4 = (num / 10) % 10;
    int digit5 = num % 10;

    int sum = digit1 + digit2 + digit3 + digit4 + digit5;

    cout << "Digits: " << digit1 << ", " << digit2 << ", " << digit3 << ", " << digit4 << ", " << digit5 << endl;
    cout << "Sum of digits: " << sum << endl;
}