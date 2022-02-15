#include <iostream>
using namespace std;
int N = 0, M = 0, ** arr, indexI, indexJ, maximum, l;

    int cinArr()
    {
        /*  Entering an array  */
        cout << "Enter the number of lines: " << endl;
        cin >> N;
        cout << "Enter the number of columns: " << endl;
        cin >> M;
        arr = new int* [N];
        for (int i = 0; i < N; i++)
        {
            arr[i] = new int[M];
            for (int j = 0; j < M; j++)
            {
                cout << "Enter arr[" << i << "][" << j << "]= ";
                cin >> arr[i][j];
            }
            cout << endl;
        }
        return 0;
    }


    int maxEl()
    {
        /*   Find the max element   */
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (maximum < arr[i][j])
                {
                    maximum = arr[i][j];
                    indexI = i;
                    indexJ = j;
                }
            }
        }
        cout << "The maximum element of the array is: " << maximum << endl;
        cout << "His position [" << indexI << "][" << indexJ << "]" << endl;
        return 0;
    }



    int outArr()
    {
        /*  Array output  */
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << "\t" << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return 0;
    }

    int main()
    {
        setlocale(LC_ALL, "ru");
        cout << "What do you want to do? \n 1 - Display the array on the screen \n 2 - Find the maximum element and its position \n" << endl;
        cin >> l;
        switch (l)
        {
        case 1:
            cout << "First you need to enter it " << endl;
            cout << cinArr() << endl;
            cout << outArr() << endl;
            break;
        case 2:
            cout << "First you need to enter an array " << endl;
            cout << cinArr() << endl;
            cout << outArr() << endl;
            cout << maxEl() << endl;
            break;
        default:
            cout << "Mdaa... You seem to have poked the wrong way" << endl;
            exit(0);
        }
    }