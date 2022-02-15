#include <iostream>
using namespace std;

void main()
{
    int arr[3][3];
    int arr2[3][3];
    int j, sum = 0;

    cout << "Enter the elements of a two-dimensional array: " << endl;
    cout << "In the first column, all elements must be negative! " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    sum = (arr[0][0] + arr[1][0] + arr[2][0]) / 3;
    cout << "Arithmetic mean of the elements of the first column: " << sum;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[i][j] - sum;
        }
        cout << endl;
    }
    cout << "Your array: " << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << arr2[i][j];
        }
        cout << endl;   
    }
}