#include <iostream>
using namespace std; 

void main()
{
    using namespace std;
    int arr[3][3];
    int i, j, row = 0, column = 0;

    cout << "Enter the elements of a two-dimensional array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr [i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t " << arr[i][j];
        }
        cout << endl;
    }
    cout << "The row with the largest element of the array diagonally: ";
    if (arr[0][0] > arr[1][1] && arr[0][0] > arr[2][2])
    {
            for (int j = 0; j < 3; j++)
            {
                cout << "\t" << arr[0][j] << endl;

            }
    }

    if (arr[1][1] > arr[0][0] && arr[1][1] > arr[2][2])
    {
            for (int j = 0; j < 3; j++)
            {
                cout << "\t" << arr[1][j];
                row = j;
            }
    }

    if (arr[2][2] > arr[1][1] && arr[2][2] > arr[0][0])
    {
            for (int j = 0; j < 3; j++)
            {
                cout << "\t" << arr[2][j];
                row = j;
            }
    }
}