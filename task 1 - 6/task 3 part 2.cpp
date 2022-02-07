#include <iostream>
void main()
{/* 
 *		Enter three numbers m, n, p.Count the number of negative numbers.
 */
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double m, n, p, z = 0;
	cout << "Enter 3 numbers " << endl;
	cout << "Enter m" << endl;
		cin >> m;
	cout << "Enter n" << endl;
		cin >> n;
	cout << "Enter p " << endl;
		cin >> p;

	if (m < 0)
		z = ++z;
	else
		z = z;

	if (n < 0)
		z = ++z;
	else
		z = z;

	if (p < 0)
		z = ++z;
	else
		z = z;

	cout << "The number of negative numbers is equal to " << z << endl;
}