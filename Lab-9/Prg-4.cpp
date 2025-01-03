// 5. Define a class MyPower having a method power that has two parameter (a, b) and return a raised to the power of b
// then return the power. e.g.

#include <iostream>
using namespace std;
class MyPower {
public:
    double power(double a, double b) {
        return pow(a, b);
    }
};

int main() {
    MyPower powerObj;
    cout << "2^3 = " << powerObj.power(2, 3) << endl;
}