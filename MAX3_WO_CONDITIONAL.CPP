// Find Max out of 3 without  conditional operator
#include <iostream>
using namespace std;

int main()
{
   int a=100,b=23,c=15,co=0;
   if(a/b && a/c)
   {
       cout<<"A is max";
       
   }
   else if(b/a && b/c)
   {
       cout<<"B is max";
   }
   else
   {
       cout<<"C is max";
   }
    return 0;
}
