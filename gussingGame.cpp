#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, x, n, count = 10;
    cout << "We can try only: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = rand() % 10 + 1;
        cout << "Guess the number: ";
        cin >> a;
        if (a == x)
        {
            cout << "Congratulation. You guess the number." << endl;
            count++;
        }
        else
        {
            cout << "Sorry,You lost.The random number is: " << x << endl;
            count--;
        }
        cout << endl;
    }
    cout << "Total point: " << count;
    getch();
}
