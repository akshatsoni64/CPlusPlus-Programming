#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int j = 5;
    int c, d;
    for(c = 0; c < j; c++){
        for(d = 0; d <= c; d++){
            cout << c+i;
        }
        cout << endl;
    }
    for(c = i; c >= 0; c--){
        for(d = c; d > 0; d--){
            cout << c+(i-1);
        }
        cout << endl;
    }
}
