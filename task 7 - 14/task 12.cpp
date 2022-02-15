#include <iostream>
using namespace std;

void main()
{
    int arr[4][4], sss = 0;
    cout << "You are given a 4 by 4 matrix" << endl;
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "\t";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    int d = 0;
    int b;
    for (int i = 0; i < 4; i++)
    {
        d = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == arr[j][i])
                d = d + 1;
            b = i;
        }
        if (d == 4)
        {
            cout << "There is a coincidence! Row and column number " << b + 1 << endl;
            break;
        }
    }
}