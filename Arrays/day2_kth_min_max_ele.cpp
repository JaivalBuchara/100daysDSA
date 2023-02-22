#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={4,7,5,8,1,6,2,9,3,11,15,12};
    int size = sizeof(arr)/sizeof(int);
    int k;
    cout<<"Please enter the position between 0-"<<size<<endl; 
    cin>>k;
    sort(arr,arr+size);
    cout<<k<<"th Min element: "<<arr[k-1]<<endl;
    cout<<k<<"th Max element: "<<arr[size - k]<<endl;

}