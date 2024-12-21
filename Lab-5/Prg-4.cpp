// Define a function named gross_salary that takes a parameter named sal for salary of
// type float and return gross salary where hra 40 % and da 20 % of sal.

#include <iostream>
using namespace std;

float gross_salary(float sal) {
    float hra = 0.40 * sal; 
    float da = 0.20 * sal; 
    float gross = sal + hra + da;
    return gross;
}

int main() {
    float salary;
    cout << "Enter the basic salary: ";
    cin >> salary;

    float gross = gross_salary(salary);
    cout << "Gross Salary: " << gross << endl;
}
