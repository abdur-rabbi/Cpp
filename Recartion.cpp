#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else

        return n*fact(n-1);



}

int main()
{
    int x,a;
    cout<< "Enter a number: ";
    cin>>x;
    a=fact(x);
    cout<< "Factorial: "<<a;






    getch();
}
