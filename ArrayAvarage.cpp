#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i, n;
    cout << "Input array Length: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Marks for student: " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Total marks: " << sum;

    cout << endl;

    int x, y;
    x = y = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > x)
            x = arr[i];
        {
            if (arr[i] < y)
                y = arr[i];
        }
    }
    cout << "The largest number is: " << x << endl
         << "The smallest number is: " << y;
}
