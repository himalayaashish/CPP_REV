// Write a CPP program to find first occurrence of a character in a given string.
#include <iostream>
#include <string>

int main()
{
    std::string s = "john.smith@codeforces.ru/contest.icpc/12";

    std::cout << s.find( '/' ) + 1  << std::endl;
    
}   
