#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int cnt = 0; 
	int num = 0;
	double sum = 0;
	double avg;

	for (;; cnt++)
	{
		cout << "Enter the number: ";
		cin >> num;
		if (num == 9999)
		{
			break;
		}

		sum += num;
	}

	avg = sum / cnt;

	cout << "The average of entered " << cnt << " numbers is: " << avg << endl;
	return 0;
}
