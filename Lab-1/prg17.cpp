// Write a program to take input of Distance and time and calculate Speed.(S = d / t )
#include<iostream>
using namespace std;
int main(){
    float d,t;
    cout << "Enter the value of Distance in meter:-";
    cin >> d;
    cout << "Enter the value of Time in second:-";
    cin >> t;
    cout << "Calculated Distance :- " << d/t <<" meter per sec\n";
}