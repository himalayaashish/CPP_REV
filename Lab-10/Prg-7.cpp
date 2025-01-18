/*7: Dynamic Array of Objects
Objective:
Create a Car class with the following:

Non-static members:
brand (string)
model (string)
price (float)
Constructors:
A parameterized constructor to initialize all members.
Methods:
displayDetails() to print the car's brand, model, and price.
Task:

Use the new operator to dynamically create an array of Car objects.
Input details (brand, model, price) for each car.
Use a loop to display the details of all cars.
Use the delete[] operator to free the dynamically allocated memory.
Example Workflow:

Ask the user how many cars they want to create.
Allocate memory for an array of Car objects using new.
Input the details for each car and display them.
Use delete[] to release the memory.*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Person object created with name: " << name << " and age: " << age << endl;
    }

    // Default constructor
    Person() : name("Unknown"), age(0) {
        cout << "Person object created with default values (Unknown, 0)" << endl;
    }

    // Method to display details
    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person object destroyed for name: " << name << endl;
    }
};

int main() {
    // Dynamically create a Person object using the parameterized constructor
    Person* person = new Person("John Doe", 30);

    // Call the displayDetails method
    person->displayDetails();

    // Destroy the object using the delete operator
    delete person;
}
