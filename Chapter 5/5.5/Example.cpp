#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x; // how many times to loop
	int y; //sequence of loop
	int j; // variables to be summed during loop
	double total = 0; //the shum of all variables

	cout << "How many integers will be summed? ";
	cin >> x;

	for (y = 1; y <= x; y++)
	{
		cout << "\nNumber: ";
		cin >> j;
		total += j;
	}
	cout << "The sum of all " << x << "numbers is: " << total << endl;

	return 0;
}
