#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i;
	int num;
	int k=1;

	for (num = 0; k <= 5; k++)
	{
		cout << "Please enter five numbers between 1-30: \n";
		cin >> num;
		if (num >= 1 && num <= 30)
		{
			for (i = 1; i <= num; i++)
			{
				cout << "*";
			}
		}
		else
		{
			cout << "You entered wrong number\n";
		}
		cout << endl;
	}
	cout << endl ;

	return 0;
}
