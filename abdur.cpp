#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
                    //Celsius to Farenheit
    float a,b, F;
    cout<< "Input Celsius temperature: ";
    cin>> a;
    F = (a*9)/5+32;
    cout<< "Answer: " << F<<endl;



                        //Day Month Year
    int D, d, M, Y;
    cout<< "Total days: ";
    cin>> D;
    Y=D/365;
    M=(D%365)/30;
    d=((D%365))%30;
    cout<< "Year: "<<Y<<" "<< "Month: "<<M<<" "<<"Day: "<<d<< " "<<endl;



                            //Leap year
    int x;
    cout<< "Input year: ";
    cin>>x;
    if(x%400==0)
        cout<< "leap year. ";
    else if(x%100==0)
        cout<< "Not leap year. ";
    else if(x%4==0)
        cout<< "leap year. ";
    else
        cout<< "Invalid. ";

    cout<<endl;



                        //Switch
    char p;
    cout<< "Input a character: ";
    cin>>p;
    switch(p)
    {
    case 'y':
        cout<< "Right.";
        break;
    case 'a':
        cout<<"Left.";
        break;
    case 'b':
        cout<< "Streat.";
        break;
    }
    cout<< endl;



                        //Even & Odd
    int r,m,n;
    cout<< "Enter a integer number: ";
    cin>>r;
    if(r%2==0)
    {
        m=r*r;
        cout<< r<<" is a even number & square is " << m;

    }
    else if(r%2!=0)
    {
        n=r*r*r;
        cout<< r<<" is odd number & cube is "<<n;
    }
    else
        cout<< " invalid.";

    cout<<endl;



                            //Character check
    char e;
    cout<< "Input a character: ";
    cin>>e;
    if(e>='A' && e<='Z')
    {
        cout<< "Its a upper case character";
    }
    else if(e>='a' && e<='z')
    {
        cout<< "Its a lower case character:";
    }
    else if(e<='9' && e>='0')
    {
        cout<< "Its a digit";
    }
    else
    {
        cout<< "Its a symbol";
    }

    cout<<endl;



                        //Grade analysis
    float f;
    cout<< "Input mark: ";
    cin>>f;
    if(f>=80)
        cout<< "A+";
    else if(79>=f && 70<=f)
        cout<< "A";
    else if(69>=f && 60<=f)
        cout<< "A-";
    else if(59>=f && 50<=f)
        cout<< "B+";
    else if(49>=f && 40<=f)
        cout<< "B";
    else if(39>=f && 33<=f)
        cout<< "C";
    else
        cout<< "Fail";


    cout<<endl;



                            //Character count
    char s,str[1000];
    cout<< "Input a string: ";
    cin.ignore();
    fgets(str, sizeof(str), stdin);

    int digit=0,sym=0, vow=0, conso=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z' ||  str[i]>='a' && str[i]<='z' )
    {
        if (str[i]=='A' || str[i]=='E' ||str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                vow++;
            }
            else
            {
                conso++;
            }
        }

        else if(str[i]<='9' && str[i]>='0')
    {
        digit++;

    }
    else
    {
        sym++;

    }



}
cout<< "Vowel: "<<vow<<endl<< "Consonante: "<<conso<<endl<< "Digit: "<<digit<<endl<<"symbol: "<<sym;


getch();


}
