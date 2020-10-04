#include <iostream>
#define PI 3.14
using namespace std;
int main() {
    int n1=12,n2=18,gcd=1,i=2;
    while(n1!=1 && n2!=1)
    {
        if(n1%i==0 && n2%i==0)
        {
             n1=n1/i;
             n2=n2/i;
             gcd=gcd*i;
           
        }
        else if(n1%i==0){
            n1=n1/i;
        }
        else if(n2%i==0){
            n2=n2/i;
        } 
        else
        {
            i++;
        }
    }
    cout<<gcd;
}
