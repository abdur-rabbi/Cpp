#include<iostream>
using namespace std;
int main(){
    int i,x,evsum=0,oddsum=0;
    cout<<"Input array Length: ";
    cin>>x;
    int arr[x];
    cout<<"Input array elements: ";
    for(i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            evsum+=arr[i];
        else if(arr[i]%2!=0)
            oddsum+=arr[i];
    }
    cout<<"Even Sum: "<<evsum<<endl;
    cout<<"Odd Sum: "<<oddsum<<endl;
}