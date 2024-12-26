// 4. Multiple Objects in Action:
// Define a class Employee with attributes:
// •	id (int)
// •	name (string)
// •	salary (float)
// Create three objects of the class, set their values, and print the details of all employees.
#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    long salary;

    public:
    void get_param(int id,string name,long salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }

    void show_param(){
        cout << "ID :" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Salary :" << salary << endl;
    }

};
int main(){
    Employee e1,e2;
    e1.get_param(1,"Himalaya",10000000);
    e1.show_param();

    e2.get_param(2,"Raj",550000);
    e2.show_param();

    cout << " .... Thanks .... "<< endl;
}