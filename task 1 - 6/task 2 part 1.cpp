#include <iomanip>
#include <iostream>
void main()
{	/*
	*	Draw a circle filled with some entered symbol.
	*/
	using namespace std;  
	char f, c, probel; probel = ' ';
	cout << "Enter the border symbol " << endl;
	cin >> f;
	cout << "Enter the fill symbol " << endl;
	cin >> c;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(4) << setfill(f) << f << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << setw(4) << setfill(c) << c << setw(2) << setfill(f) << f << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(1) << setfill(f) << f << setw(8) << setfill(c) << c << setfill(f) << f << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(1) << setfill(f) << f << setw(8) << setfill(c) << c << setfill(f) << f << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << setw(4) << setfill(c) << c << setw(2) << setfill(f) << f << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(4) << setfill(f) << f << endl;
}
