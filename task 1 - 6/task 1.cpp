#include <iostream>
void main() 
/*
*	This program performs simple mathematical 
*	operations using built-in C++ constructs
*/
{
	using namespace std;
	float a = 8.1, k = 4, x = (2 * pow(10, -4)), t, u;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	cout << "t = " << t << endl;
	cout << "u = " << u << endl;
}