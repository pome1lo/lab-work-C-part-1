#include <iostream>   
using namespace std;             // Print the text made up of the first letters of all words.

int main()
{
    char arr[100];
    cout << "Enter a sentence: ";
    gets_s(arr);
    int size;
    size = sizeof(arr) / sizeof(char);
    cout << endl;
    cout << endl;
                                                //Printing text from the first letters of words
    cout << "Text from the first letters: ";
    cout << arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ' ')
        {
            cout << arr[i + 1];
        }
    }
}