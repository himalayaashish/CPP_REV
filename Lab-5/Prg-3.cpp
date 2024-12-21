// Define a function named fahrenheit_to_ celsius that takes only one parameter name f
// which takes temperature in Fahrenheit degree and return temperature in Celsius
// degree. 
#include <iostream>
using namespace std;

float fahrenheit_to_celsius(float f){
    return ((f-32) *5) / 9;
}
int main(){
    float f;
    float result;
    cout << "Enter the value of temperature in fahrenheit :-";
    cin >> f;
    result = fahrenheit_to_celsius(f);
    cout << "Fahrenheit to celsius = " << result <<"C"<<endl;
}