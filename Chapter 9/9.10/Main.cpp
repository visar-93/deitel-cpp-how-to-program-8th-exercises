#include "stdafx.h"
#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t1(17, 34, 25), t2(99, 345, -897);

	if (!t1.getInvalidTime())
	{
		cout << "Error: invalid time setting(s) attempted.\n"
			<< "Invalid setting(s) changed to zero.\n";
	}
	t1.printStandard();

	if (!t2.getInvalidTime())
	{
		cout << "\nError: invalid time setting(s) attempted.\n"
			<< "Invalid setting(s) changed to zero.\n";
	}
	t2.printUniversal();
	cout << endl;
    return 0;
}
