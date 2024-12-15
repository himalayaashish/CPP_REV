// Write a program to input two integer numbers and store them into two variables named a, b
// respectively and interchange them 
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter First number :-";
    cin >> num1;
    cout << "Enter Second number :-";
    cin >> num2;
    cout << "The value of First number before swap = " << num1 << " and the value of Second number  before swap = " << num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "\nThe value of First number after swap = " << num1 << " and the value of Second number after swap = " << num2 << endl;;

}