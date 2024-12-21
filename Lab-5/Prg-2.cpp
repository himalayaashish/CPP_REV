// Define a function simple_ interest that takes three parameters p,r,t of type float and
// return simple interest using these parameters.
#include <iostream>
using namespace std;

float simple_interest(float p, float r, float t){
    return (p * r * t)/100;
}
int main(){
    float p;
    float r;
    float t;
    float result;

    cout << "Enter the value of Principle:-";
    cin >> p;
    cout << "Enter the value of rate:-";
    cin >> r;
    cout << "Enter the time-period:-";
    cin >> t;

    result = simple_interest(p,r,t);
    cout << "SIMPLE INTERST :-" << result << endl;
}