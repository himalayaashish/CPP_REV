// Write a program to input principle, rate and time then calculate & print simple interest.
#include <iostream>
using namespace std;
int main(){
    float P,R,T;
    cout << "Enter the value of P :- ";
    cin >> P;
    cout << "Enter the value of R :- ";
    cin >> R;
    cout << "Enter the value of T :- ";
    cin >> T;
    cout << "The value of simple interest - " << (P*R*T) / 100 << "\n";

}