// Create a class Student that consist of following properties and methods of object
// a. Properties : it hold the information of employee
// i. Rollno
// ii. Name
// iii. percentage
// b. getdata method that take rollno, name and percentage and store into the properties of object
// c. display method print the properties of object.

#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float percentage;

public:
    void getdata(int r, string n, float p) {
        rollNo = r;
        name = n;
        percentage = p;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Percentage: " << percentage << "%" << endl;
    }
};

int main(){
    Student student;
    student.getdata(1, "John", 89.5);
    student.display();
}