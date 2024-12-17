// Write a program to input a number and find out the factorial of the number.
#include<iostream>
using namespace std;
int fact(int n){
    int result = 1;
    for(int i=n; i>=1; i--){
        result *= i;
    }
    return result;
}
int main(){
    int num;
    cout << "Enter the number :- ";
    cin >> num;
    cout << "The factorial of" << num << " = " << fact(num) << endl;
}