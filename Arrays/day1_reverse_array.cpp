#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,4,7,5,8,6,2,1};
    int size = sizeof(arr)/sizeof(int);
    int a2[size];
    for (int i = 0; i < size; i++)
    {
        a2[size-i-1] = arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<a2[i]<< " ";
    }
    
}