#include"stdafx.h"
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

int main()
{
	Date realdate;
	
	int day, month, year;

	cout << "Enter month: ";
	cin >> month;
	realdate.setMonth(month);

	cout << "Enter day: ";
	cin >> day;
	realdate.setDay(day);

	cout << "Enter year: ";
	cin >> year;
	realdate.setYear(year);
	cout << endl << endl;

	realdate.displayDate();

    return 0;
}
