// Define a class MyCommonMethods1 that consist of following methods
// a. Simple_interest that takes three parameters p,r,t of type float and return simple interest using these
// parameters.
// b. Gross_salary that takes a parameter named sal for salary of type float and return gross salary where hra 40 %
// and da 20 % of sal.
// c. Leap_year that takes a parameter named year of type int and return true if year is leap year otherwise
// return false. Condition : Year % 4 == 0 && year % 100 != 0 || year % 400 == 0
// And test all the methods. 
#include <iostream>
using namespace std;

class MyCommonMethods1 {
public:

    float simple_interest(float p, float r, float t) {
        return (p * r * t) / 100.0f;
    }


    float gross_salary(float sal) {
        return sal + (0.40f * sal) + (0.20f * sal);
    }


    bool leap_year(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    MyCommonMethods1 myMethods;

    float principal = 1000.0f, rate = 5.0f, time = 2.0f;
    cout << "Simple Interest: " << myMethods.simple_interest(principal, rate, time) << endl;

    
    float salary = 50000.0f;
    cout << "Gross Salary: " << myMethods.gross_salary(salary) << endl;

    
    int year = 2024;
    if (myMethods.leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}
