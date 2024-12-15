// Write a program to input two numbers from the keyboard and calculate addition , subtraction,
// multiply and then print the result.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a :- ";
    cin >> a;
    cout << "Enter the value of b :- ";
    cin >> b;
    cout << "The addition of " << a <<" and " << b << " = " << a+b << "\n";
    cout << "The subtraction of " << a <<" and " << b << " = " << a-b << "\n";
    cout << "The multiplication of " << a <<" and " << b << " = " << a*b << "\n";
    cout << "The division of " << a <<" and " << b << " = " << a/b << "\n";

}