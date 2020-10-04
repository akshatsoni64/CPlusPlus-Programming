#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1=1,n2=1000,i;
   
    for(i=n1;i<=n2;i++)
    {
        int temp=i,sum = 0,temp2=i;
        
        while(temp2!=0){
        int digit = temp2 % 10;
        sum += (digit*digit*digit);
        temp2 /= 10;
         }
        if(temp == sum){
            cout << temp;
        }
    }
    
    
}
