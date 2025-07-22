#include<iostream>
using namespace std;


                //Fibonacci sequence

int main()
{
    int i,x,y,next,a;
    cout<< "It will last till: ";
    cin>>a;
    cout<< "Enter first number X: ";
    cin>>x;
    cout<< "Enter second number Y: ";
    cin>>y;

    cout<< "The Fibonacci sequence is: ";

    for(i=1; i<=a; i++)
    {
        cout<<x<<" ";
        next = x+y;
        x=y;
        y=next;
    }



}
