
// 21. C++ Program to Sort Even and Odd Elements of Array Separately:
#include <iostream>
using namespace std;

int main() {

  const int size = 10;
  int values[size] = {2, 3, 4, 6, 8, 5, 1, 10, 7, 9};
 
  int temp;

 
  for(int i = 0; i < size; i++)
  {
    
    if(values[i] % 2 == 0)
    {
      continue;
    }
    for(int j = i + 1; j < size; j++)
    {
      if(values[j] % 2 == 0)
      {
        temp = values[i];
        values[i] = values[j];
        values[j] = temp;
      }
    }
  }
  for(int i = 0; i < size; i++)
  {
    cout << values[i] << " ";
  }
  return 0;
}