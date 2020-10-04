#include <iostream>
using namespace std;
int main() {
    
    int N = 146, i, fact = 1, temp, strong = 0, digit;
    temp = N;
    while(N!=0){
        digit = N%10;
        fact = 1;
        for(i = 1; i <= digit; i++){
            fact *= i;
        }
        strong += fact;
        N /= 10;
    }
    
    if(strong == temp){
        cout << "Strong Number";
    }
    else{
        cout << "Not Strong Number";
    }
    return 0;
}
