#include <iostream>
using namespace std;
int main()
/*
*   The simplest dialog using switch
*/
{
    int k;
    puts("Hello. What's up? (2-good, 1-bad)");
    cin >> k;
    switch (k)
    {
    case 1: { puts("why? (1-because, 2-I was expelled, 3-helicopter)");
        cin >> k;
        switch (k)
        {
        case 1: puts("well okay"); break;
        case 2: puts("It's for the best"); break;
        case 3: puts("helicopter"); break;
        }
        break;
    }
    case 2: puts("and it should be bad"); break;
    default: puts("you chose the wrong answer"); break;
    }
    return 0;
}