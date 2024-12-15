// Write a program to take input base and height of triangle and calculate area of triangle. Area = ( ½
// * ( b*h)
#include <iostream>
using namespace std;
int main(){
    float b,h;
    cout << "Enter the base meserment :- ";
    cin >> b;
    cout << "Enter the height meserment :- ";
    cin >> h;
    cout << "Calculated Area of Triangle with base "<<  b << " and height " <<  h << " = "<< 0.5*(b*h)<< "\n";
}