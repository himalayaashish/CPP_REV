#include <iostream>
using namespace std;

class Calculator {
    float number1;
    float number2;

public:
    void set_numbers(float n1, float n2) {
        number1 = n1;
        number2 = n2;
    }

    float add(){
        return number1 + number2; 
    }

    float subtract(){
        return number1 - number2;
    }
    float multiply(){
        return number1 * number2; 
    }
    float divide(){
        if (number2 != 0){
            return number1 / number2;
        }else{
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    float num1;
    float num2;
    Calculator calc;
    cout << "Enter the number 1:";
    cin >> num1;
    cout << "Enter the number 2:";
    cin >> num2;
    calc.set_numbers(10.5, 2.5);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
}
