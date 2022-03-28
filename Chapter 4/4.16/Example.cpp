#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int hours;
	int extrahours;
	double hourlyrate;
	double salary;

	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;

	while (hours != -1)
	{
		if (hours <= 40)
		{   
			cout << "Enter hourly rate of the employee: ";
			cin >> hourlyrate;
			salary = hours * hourlyrate;
			cout << "Salary is: " << salary << endl;
		}
		else if (hours > 40)
		{
			cout << "Enter hourly rate of the employee: ";
			cin >> hourlyrate;
			extrahours = hours - 40;
			salary = (40 * hourlyrate) + (extrahours * hourlyrate * 1.5);
			cout << "Salary is: " << salary << endl;
		}
		cout << "Enter hours worked (-1 to end): ";
		cin >> hours;
	}
return 0;
}
