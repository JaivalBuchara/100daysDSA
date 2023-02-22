#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={4,7,5,8,1,6,2,9,3,11,15,12};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN ,min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        max = max<arr[i]?arr[i]:max;
        min = min<arr[i]?min:arr[i];
    }
    
    cout<<"Max element is "<<max<<" and min element is "<<min<<endl;
    return 0;
}