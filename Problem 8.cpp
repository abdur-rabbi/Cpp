#include<iostream>
using namespace std;

            // Calculate the all elements in a given array
int main()
{
    int i,x, total=0;
    cout<< "Enter array length: ";
    cin>>x;
    int arr[x];
    cout<< "The array elements are: ";
    for(i=0; i<x; i++)
    {
        arr[i]= rand()%15;
        {
            cout<<arr[i]<<" ";
        }
         total+=arr[i];
    }
     cout<<endl<<"Total= "<<total;
}
