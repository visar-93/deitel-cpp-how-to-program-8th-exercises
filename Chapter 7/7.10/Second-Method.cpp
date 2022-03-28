#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int salesmans = 9;
	int salary[salesmans] = {};
	int sales=0;
	int salary1 = 0;
	
	while (sales != -1)
	{
		cout << "Enter total gross sales for this week: ";
		cin >> sales;

		if (sales == -1)
		{
			break;
		}
		salary1 = 200 + sales * 0.09;

		if (salary1 >= 200 && salary1 < 300)
			++salary[0];
		else if (salary1 >= 300 && salary1 < 400)
			++salary[1];
		else if (salary1 >= 400 && salary1 < 500)
			++salary[2];
		else if (salary1 >= 500 && salary1 < 600)
			++salary[3];
		else if (salary1 >= 600 && salary1 < 700)
			++salary[4];
		else if (salary1 >= 700 && salary1 < 800)
			++salary[5];
		else if (salary1 >= 800 && salary1 < 900)
			++salary[6];
		else if (salary1 >= 900 && salary1 < 1000)
			++salary[7];
		else if (salary1 >= 1000)
			++salary[8];
	}
	for (int i = 0; i < salesmans; ++i)
	{
		if ((i + 2) >= 10)
		{
			cout << "$ 1000 and over: " << salary[8] << endl;
			break;
		}
			cout << "$ " << (i + 2) * 100 << "-" << (i + 2) * 100 + 99 <<": " << salary[i] << endl;
	}
}
