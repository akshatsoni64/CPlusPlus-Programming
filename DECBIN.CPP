#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main ()
{
  int decimal, binary = 0, temp = 0;
  
  cout << "Enter Decimal Number: ";
  cin >> decimal;
  
  while (decimal != 0)
    {
      int digit = decimal % 2;
      binary = (binary*10) + digit;
      decimal = decimal / 2;
    }
  
  while (binary != 0)
    {
      int digit = binary % 10;
      temp = (temp * 10) + (digit);
      binary /= 10;
    }
  
  cout << "Binary: " << temp;
  
  return 0;
}
