#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 153, sum = 0;
    int temp = n;
    while(n!=0){
        int digit = n % 10;
        sum += (digit*digit*digit);
        n /= 10;
    }
    if(temp == sum){
        cout << "Armstrong he re baba!";
    }
    else{
        cout << "Armstrong nai he re baba!";
    }
}
