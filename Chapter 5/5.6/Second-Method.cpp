#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int sum;
	int counter = 0;

	cout << "Enter integers for average calculation."
		<< "Enter 9999 to end." << endl;
	cin >> sum;

	for (int x = 0; x != 9999; counter++) // you can initialize another variable, set condition for it, and to increment another variable
	{
		sum += x;
		cin >> x;
	}

	cout << "Average is " << sum / counter << endl;
	
	return 0;
}
