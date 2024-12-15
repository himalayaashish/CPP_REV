// Write a program to input temperature in Fahrenheit degree and convert it into
// Celsius degree ===> C = (5F - 160) / 9
#include <iostream>
using namespace std;
int main(){
    float f_temp;
    cout << "Enter the temperature in Fahrenheit :- ";
    cin >> f_temp;
    cout << "Equavalent Celcius  :- " << ((5*f_temp)-160)/9 << "\n";
}