                                                         /*sum game. Here you can guess the sum*/


#include <iostream>
using namespace std;
int main()
{

    int x, i, j, sum;
    cout << "Array number: ";
    cin >> x;
    int arr[x];
    cout << "Array elements: ";
    for (i = 0; i < x; i++)
    {
        arr[i] = rand() % 11;
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << "Input target sum: ";
    cin >> sum;
    cout << "Pairs of sum: " << endl;
    for (i = 0; i < x; i++)
    {
        for (j = i + 2; j < x; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}
