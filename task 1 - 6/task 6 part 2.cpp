#include <iostream> 
using namespace std;
void main()
{
/*
*	Set to 0 n bits in number A to the left of position p,
*   replace them with m bits of number B, starting from position q.
*/
	int A, n, p; char num[33];
	cout << "Enter the number A :";
	cin >> A;
	cout << endl;
	cout << "Enter from which bit to start the replacement : ";
	cin >> p;
	cout << endl;
	cout << "How many bits are we replacing with 0 ? ";
	cin >> n;
	cout << endl;
	
	_itoa_s(A, num, 2);				//Just output a number in binary form

	cout << "The number A in binary form: " << num << endl;

	unsigned int mask = 1 << p - 1; // I create a mask, one is equal to one, which is shifted p-1 to the left
	
	for (int i = 0; i <= n; i++) {  // Next comes the replacement in zeros, but because I do not know,
		A ^= mask;					// how to do it correctly, inverting occurs
		mask <<= 1;
	}

	_itoa_s(A, num, 2);
	cout << "The final number: " << num << endl;
}
