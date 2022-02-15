#include <iostream>
using namespace std;

void main()
{
    int SIZE = 0;
    cout << "Enter the size of the array: " << endl;
    cin >> SIZE;
    int* arr = new int[SIZE];

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
        cout << endl;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
        {
            cout << "The first zero element is on " << i+1 << " positions" << endl;
        }
        cout << endl;
    }
}