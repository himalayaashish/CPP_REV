// Define a class MyCalc having following methods:
// a. float addition(float a, float b);
// b. float subtraction(float a, float b);
// c. float multiply(float a, float b);
// d. float division(float a, float b);
// and test all the methods.

#include <iostream>
using namespace std;

class MyCalc{


    public:
    float addition(float a, float b){
        return a+b;

    }

    float subtraction(float a, float b){
        return a-b;
    }

    float multiply(float a, float b){
        return a*b;
    }

    float division(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed.\n";
            return 0; // Or handle error as needed
        }
    }

};

int main(){
    MyCalc mycalc;
    MyCalc mycalc1;
    float num1 = 10, num2 = 20;

    // Test all methods
    cout << "Addition: " << mycalc.addition(num1, num2) << endl;
    cout << "Subtraction: " << mycalc.subtraction(num1, num2) << endl;
    cout << "Multiplication: " << mycalc.multiply(num1, num2) << endl;
    cout << "Division: " << mycalc.division(num1, num2) << endl;

    num1 = 100.12, num2 = 20.23;

    // Test all methods
    cout << "Addition: " << mycalc1.addition(num1, num2) << endl;
    cout << "Subtraction: " << mycalc1.subtraction(num1, num2) << endl;
    cout << "Multiplication: " << mycalc1.multiply(num1, num2) << endl;
    cout << "Division: " << mycalc1.division(num1, num2) << endl;
}

    
