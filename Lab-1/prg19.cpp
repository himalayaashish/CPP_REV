// Write a program to take input of weight in kg and convert into grams and milligrams.
#include<iostream>
using namespace std;
int main(){
    float kg;
    cout << "Enter the value in KG:-";
    cin >> kg;
    cout << kg << " KG =  " << kg*1000 << " gram and =" << kg * 1000000 << " milligrams \n";
}