#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x=1; 
	int num;
	double sum = 0;
	double avg;

	for (x = 1; x <= 9999; x++)
	{
		cout << "Enter the number: ";
		cin >> num;
		if (num == 9999)
		{
			break;
		}
		sum = sum + num;
		avg = sum / x;
	}

	cout << "The average of entered " << x << " numbers is: " << avg << endl;
	return 0;
}
