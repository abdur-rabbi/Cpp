#include<iostream>
using namespace std;

void aaaaa(int f, int g)
{
    int result=f+g;
    cout<< "addition is: "<<result;

}


int main()
{
    int x,y,a;
    cout<< "inter two number: ";
    cin>>x>>y;
    int *p,*q;
    p=&x,q=&y;
    aaaaa(*p, *q);

}
