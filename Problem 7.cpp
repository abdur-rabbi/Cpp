#include<iostream>
using namespace std;

                //Prime numbera


int main()
{
    int n;
    cout<<"The input number is: ";
    cin>>n;
    if(n<2)
    {
        cout<< "Please enter greater "<<n;
        return 1;
    }
    int flag=0;
    for(int i=2; i<n; i++ )
    {
        if(flag%i==0)
            flag=1  ;
        break;
    }
    if (flag==1)
        cout<<"Its a prime number.";
    else
        cout<<"Not prime number.";
}

