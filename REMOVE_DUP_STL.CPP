#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10] = {1, 2, 5, 6, 1, 2, 3, 2, 9, 5};
    int i, j, flag = 0;
    vector<int> temp;
    
    temp.push_back(a[0]);
    
    for(j = 0; j < 10; j++){
        flag = 0;
        for(i = 0; i < temp.size(); i++){
            if(a[j] == temp[i]){
                flag = 1;
            }
        }
        // cout << "Status: " << flag << endl;
        if(flag == 0){
            temp.push_back(a[j]);
        }
    }
    cout << "Unique Elements: " << endl;
    for(i = 0; i < temp.size(); i++){
        cout << ":" << temp[i] << "\t";
    }
}
