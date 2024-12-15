// Write a program to input five numbers (floating point) and find out their average.
#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,e;
    cout << "Enter the value of a :- ";
    cin >> a;
    cout << "Enter the value of b :- ";
    cin >> b;
    cout << "Enter the value of c :- ";
    cin >> c;
    cout << "Enter the value of d :- ";
    cin >> d;
    cout << "Enter the value of e :- ";
    cin >> e;
    cout << "The average of " << a <<" and " << b << \
    " and " << c << " and " << d << " and " << e << " = " << (a+b+c+d+e) / 5 << "\n";

}