// Write program to input 5 subject marks of a student such as English, hindi, physics, chemistry, math
// and calculate percentage where each subject is of 100 marks. Formula: per percentage = obtained
// number * 100 / 500 ;
#include <iostream>
using namespace std;
int main(){
    int eng_marks,hindi_marks,phy_marks,chem_marks,maths_marks;
    cout << "Enter the marks of ENGLISH :- ";
    cin >> eng_marks;
    cout << "Enter the marks of HINDI :- ";
    cin >> hindi_marks;
    cout << "Enter the marks of PHYSICS :- ";
    cin >> phy_marks;
    cout << "Enter the marks of CHEMISTRY :- ";
    cin >> chem_marks;
    cout << "Enter the marks of MATHS :- ";
    cin >> maths_marks;

    cout << "Percentage score :- " << ((eng_marks + hindi_marks+phy_marks+chem_marks+maths_marks)*100) /500 << "\n";
}