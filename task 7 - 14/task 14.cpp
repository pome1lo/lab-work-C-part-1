#include <iostream>           
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter the dimension of the one-dimensional array - ";
    cin >> SIZE;
    int* arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter " << i + 1 << " array element";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Your array \n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\t" << arr[i];
    }
    cout << endl;


    for (int i = 0; i < SIZE; i++)
        if (arr[i] % 2 == 0) {}                   
        else
        {                                         // If a negative element is found, then
            for (int j = i + 1; j < SIZE; j++)    // move all the elements standing
                arr[j - 1] = arr[j];              // after being deleted by one position
            SIZE--;                               // Reducing the size of the array
            i--;                                  // Return to the previous index
        }


    cout << "Your array without odd segments: \n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\t" << arr[i];
    }
}