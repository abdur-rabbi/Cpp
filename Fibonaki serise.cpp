#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    char x[100];
    cout<< "Input a string: ";

    cin.getline(x,100);

    cout<< "The string is: "<<x;


    getch();
}
