#include<stdio.h>
#include "iostream"
using namespace std;
int main()
{
int i ;
cout << "Ascii chart\n";
cout << "char\tcode";
for ( i = 0 ; i <= 255 ; i++)
{
cout << endl << (char)i << "\t" << i;
}
}