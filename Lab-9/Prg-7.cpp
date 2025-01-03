// Create a class Employee that consist of following properties and methods of object
// a. Properties : it hold the information of employee
// i. Employee no
// ii. Name
// iii. salary
// The Target Institute
// (Sheet -1)
// 9981315087
// b. setData method that set the properties of object using parameters
// c. getdata method that take empno, name and salary and store into the properties of object
// d. display method print the properties of object.
#include <iostream>
using namespace std;

class Employee {
    int empNo;
    string name;
    float salary;

public:
    void setData(int e, string n, float s) {
        empNo = e;
        name = n;
        salary = s;
    }

    void getdata(int e, string n, float s) {
        empNo = e;
        name = n;
        salary = s;
    }

    void display() {
        cout << "Employee No: " << empNo << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main(){
    Employee employee;
    employee.setData(101, "Alice", 55000);
    employee.display();
}