#include <iostream> 
using namespace std;
void main()
{
/*
*		Using bit operations, check whether the number A is a multiple of sixteen.
*       the number A is a multiple of sixteen.
*/
	int A; char tmp[33];
	cout << "Enter a number ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "A number in binary form = " << tmp << endl;
	if ((A & 15) == 0)
		cout << "The number is a multiple of 16 " << endl;
	else
		cout << "The number is not a multiple of 16" << endl;
}