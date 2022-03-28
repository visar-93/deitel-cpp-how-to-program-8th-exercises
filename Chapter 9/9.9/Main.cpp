#include "stdafx.h"
#include <iostream>
#include "DateAndTime.h"
using namespace std;

int main()
{
	DateAndTime dT;
	
	dT.DisplayMessage();
	//Date and time in format:
	//Hr:Min:Sec // MM/DD/YYYY

	dT.setDate(3, 13, 1993);
	dT.setTime(23, 54, 57);

	cout << "\nPrinting in Standard format: \n\n";
	for (int counter = 0; counter < 400; ++counter)
	{
		dT.printStandard();
		cout << endl;
		dT.setTick();
	}

	dT.setDate(3, 13, 1993);
	dT.setTime(23, 54, 57);
	cout << "\n\nPrinting in Universal format: \n\n";
	for (int counter = 0; counter < 400; ++counter)
	{
		dT.printUniversal();
		cout << endl;
		dT.setTick();
	}
	
	return 0;
}
