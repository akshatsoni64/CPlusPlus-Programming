#include <iostream>

using namespace std;

int main()
{
    int arr[10]={1,4,3,4,5,5,6,6,7,7},temp[10];
    int tm,i,flag=0,j,k;
    
    static int n=10;
    for(i=0;i<n;i++){
       for(j=0;j<i;j++) {
           if(arr[i]==arr[j]){
                n--;
                for(k=i;k<n;k++){
                    arr[k]=arr[k+1];
                }
                i--;               
           }
       }       
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
 
