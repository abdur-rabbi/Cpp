#include<iostream>
using namespace std;
int main()
            //factorial
{
    int a, i, fact=1;
    cout<< "Enter a integer number: ";
    cin>>a;
    for(i=a; i>0; i--)
    {
        fact*=i;

    }
    cout<< "The factorial is: " <<fact;

}
