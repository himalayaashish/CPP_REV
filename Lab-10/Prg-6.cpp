/*6: Dynamic Object Management
Objective:
Create a Person class with the following:

Non-static members:
name (string)
age (int)
Constructors:
A parameterized constructor to initialize name and age.
A default constructor to initialize name to "Unknown" and age to 0.
Methods:
displayDetails() to display the person's name and age.
Task:

Use the new operator to dynamically allocate memory for a Person object and initialize it using the parameterized constructor.
Use the delete operator to release the memory when it’s no longer needed.
Add a destructor in the Person class to print a message when an object is destroyed (e.g., "Person object destroyed").
Example Workflow:

Dynamically create a Person object using the new operator.
Call the displayDetails() method.
Destroy the object using the delete operator.*/

#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(){
        this-> name = "Unknown";
        this->age = 0;
    }
    Person(string n, int ag)
	{
		this ->name = n;
		this ->age = ag ;
	} 


    void displayDetails(){
        cout << "The name of the Person is :: " << this->name << endl;
        cout << "The age of the person is :: " << this->age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person object destroyed for name: " << name << endl;
    }

};

int main(){

    Person* a = new Person("John Doe", 50);
    Person* b = new Person();
    Person* c = new Person("Himalaya Ashish", 30);

    // Call the displayDetails method
    a->displayDetails();
    b->displayDetails();
    c->displayDetails();

    // Destroy the object using the delete operator
    delete a;
    delete b;
    delete c;
}