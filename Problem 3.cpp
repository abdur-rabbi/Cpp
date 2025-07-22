 #include<iostream>
 using namespace std;

               //Find largest number among three number
 int main()
 {
     int c,d,e;
    cout << "Input a integer C: ";
    cin>>c;
    cout << "Input a integer D: ";
    cin>>d;
    cout << "Input a integer E: ";
    cin>>e;

    if(c>=d && c>=e)
        cout<< "C is the largest number: "<<c;
    else if(d>=c && d>=e)
        cout<< "D is the largest number: "<<d;
    else if(e>=c && e>=d)
        cout<< "E is the largest number: "<<e;
    else
        cout<< "Please enter integer number. ";

 }
