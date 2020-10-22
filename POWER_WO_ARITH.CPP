// Calculate Power without Arithmetic Operator
#include <iostream>
using namespace std;

int main()
{
    int a=2, m=4, i, j, mul=0, temp;
    temp = a;
    for(i = 0; i < m; i++){
        while (temp != 0)  
        {  
            int carry = mul & temp;
            mul = mul ^ temp;
            temp = carry << 1;  
        }
        temp = mul;
    }
    cout << mul;
    return 0;
}
