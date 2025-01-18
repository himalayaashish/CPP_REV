
/*1. Student Information System
Objective:
Create a Student class with the following properties and methods:
Non-static members:
name (string)
rollNumber (int)
marks (float)
Static member:
totalStudents (to keep track of the number of students created)
Constructors:
A parameterized constructor to initialize the name, rollNumber, and marks.
A default constructor to initialize all members to default values.
Methods:
displayDetails() to display the details of a student.
Task:
Write a program to create multiple Student objects, display their details, 
and also print the total number of students 
created using the totalStudents static member.
*/
#include<iostream>
#include<string.h>
using namespace std ; 
class Student  
{
	private: 
		string name ;
		int rollNumber ;
		float marks ;
		static int totalStudents ;
	public:
	Student()
	{
		this ->name ="N/A" ;
		this ->rollNumber = 0 ;
		this ->marks = 0 ;
		Student::totalStudents++;
		
	} 
	Student(string n, int roll, float m  )
	{
		this ->name = n;
		this ->rollNumber = roll ;
		this ->marks = m ;
		Student::totalStudents++;
	} 
	void displayDetails()
	{
		cout << endl << "Student detail " ; 
		cout << endl << "name : " << this -> name ; 
		cout << endl << "roll number : " << this -> rollNumber ; 
		cout << endl << "marks  : " << this -> marks ; 
	}
	static void displayTotalStudents()
	{
		cout << endl << "Total studets  : " << Student::totalStudents ;
	}
};
int Student::totalStudents;

main()
{
	Student a , b, c("ram",101,475), d("shyam",102,450); 
	a.displayDetails(); 
	b.displayDetails(); 
	c.displayDetails(); 
	d.displayDetails(); 
	Student::displayTotalStudents();
}