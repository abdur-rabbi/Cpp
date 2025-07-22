#include<iostream>
#define PI 3.1416
using namespace std;

            //Circle area

float circle(float r)
{
    return PI*r*r;

}

int main ()
{
    float r,x;
    cout<<"Enter radias: ";
    cin>>r;

    cout<<"The circle aria is: "<<circle(r);
}

