#include <iostream>
using namespace std;  

int main()
{
    int n = 5, g = 5, i, t, count, value1 = 0, value2 = 0;
    int A[5];
    cout << "Enter a value t = ";
    cin >> t;
    cout << "Number of elements of the first array = 5" << endl;
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << "Enter an array element: ";
        cin >> A[i];
        if (A[i] < t)
        {
            value1 = value1 + 1;
        }
        else { value1 = value1; }
    }

    int B[5];
    cout << "Number of elements of the second array = 5" << endl;
    for (i = 0; i < g; i++)
    {
        cout << i + 1 << "Enter an array element: ";
        cin >> B[i];
        if (B[i] < t)
        {
            value2 = value2 + 1;
        }
        else { value2 = value2;}
    }
    if (value1 > value2)
    {
        for (int i = 0; i < 5; i++)
            cout << A[i] << "\t";
    }
    else
    {
        for (int i = 0; i < 5; i++)
            cout << B[i] << "\t";
    }
}