#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    long int var = 1010;
    int i=0, decimal = 0;
    int temp = var;
    while(temp != 0){
        int digit = temp % 10;
        decimal += digit*pow(2,i); //replace 2 with 8 or 16, for octal and hex respectively
        
        temp/=10;
        i++;
    }
    cout << "Decimal: " << decimal;
}
