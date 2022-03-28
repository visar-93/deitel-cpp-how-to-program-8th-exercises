#include "stdafx.h"
#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date date1;
	Date date2; // date2 defaults to 1/1/2000
	date1.setDate(3, 13, 1993);

	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();

	date2 = date1; // default memberwise assignment

	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout << endl << endl;
	for (int next = 0; next < 10000; ++next)
	{
		date1.print();
		cout << endl;
		date1.nextDay();

	}
	return 0;
}



