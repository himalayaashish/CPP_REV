// Write a C program to input basic salary of an employee and calculate its Gross salary
// according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
#include <iostream>
using namespace std;

int main() {
    float basicSalary, hra, da, grossSalary;

    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;
    cout << "Gross Salary = " << grossSalary << endl;
}
