#include<iostream>
using namespace std;

                //Basic arithmetic operation

int main()
{
    int a,b,add=0,mulT=0,sub=0,divi=0;
    cout<< "Enter two integer number: ";
    cin>>a>>b;
    char c;
    cout<< "Input a arithmetic operator: ";
    cin>>c;
    switch(c)
    {
    case '+':
        add= a+b;
        cout<< "Addition is: "<<add;
        break;

    case '-':
        sub= a-b;
        cout<< "Subtraction is: "<<sub;
        break;

    case '*':
        mulT= a*b;
        cout<< "Multiplication is: "<<mulT;
        break;

    case '/':
        divi= a/b;
        cout<< "Division is: "<<divi;
        break;

    default :
        cout<< "Invalid operator.";
        break;

    }
}
