#include <iostream>
int main()					
{
	/*
	*	This program calculates the area of a square diagonally.
	*/
	using namespace std;
	float a, S;
	cout << "Enter the diagonal length "; cin >> a;
	S = (a / sqrt(2)) * (a / sqrt(2));
		cout << "The diagonal is equal to a of the roots of two" << endl;
		cout << "According to the formula S=a*a, the area is equal to " << S << endl;
}

