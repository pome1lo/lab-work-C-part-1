#include<iostream>
#include<math.h>	
int main()			
/*
*	An array of k characters is specified. 
*	Remove repeated occurrences of each character from it.
*/
{ 
	setlocale(LC_ALL, "");
	using namespace std;
	int a[9], b[9], i, j, n;
	cout << "Enter the number of characters in the array n= " << endl;
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		cout << "Enter the array elements themselves [" << i << "]=";
		cin >> a[i];
	}
	for (j = 0; j <= n; j++)
	{
		for (i = j + 1; i <= n; i++)
			if (a[j] == a[i])

			{
				for (i = j + 1; i <= n; i++)
					a[i - 1] = a[i];
				n--; i--;
			}
	}
	for (i = 0; i <= n; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
	return 0;
}