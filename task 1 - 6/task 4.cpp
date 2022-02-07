#include <iostream>
void main() 
/*
*	Calculation depending on the data entered.
*/
{
	float w, r, a = -1.4, m = 16, j;
	for (int n = 0; n < 4; n++)
	{
		printf("Enter j ");
		scanf_s("%f", &j);
		w = tan(a / 3) + exp(a / m);
		r = 0.9 * sqrt(w + j) + abs(pow(a, 2) - 1);
		printf("w = %5.2f\t", w);
		printf("r = %5.2f\n", r);
	}
}
