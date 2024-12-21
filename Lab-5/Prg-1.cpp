// Define a function named square that has an integer parameter n, return square of n.
#include<iostream>
using namespace std;

int square(int n){
    return n * n;
}
int main(){
    int num;
    int result;
    cout << "Enter the value of num :- ";
    cin >> num;
    result = square(num);
    cout << result << endl;

}