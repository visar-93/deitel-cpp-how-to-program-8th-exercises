#include "stdafx.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Date.h"
using namespace std;

// Date constructor (should do range checking)
Date::Date(int month, int day, int year)
{
	setDate(month, day, year);
}

void Date::setDate(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}
void Date::setMonth(int m)
{
	if (m > 0 && m < 13)
		month = m;
	else
		month = 1;

}
void Date::setDay(int d)
{
	if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 ||
		getMonth() == 7 || getMonth()==8 || getMonth() == 10 ||
		getMonth() == 12)
	{
		if (d > 0 && d < 32)
			day = d;
		else
			day = 1;

	}
	else if (getMonth() == 4 || getMonth() == 6 || getMonth() == 9 ||
		getMonth() == 11)
	{
		if (d > 0 && d < 31)
			day = d;
		else
			day = 1;

	}
	else if (getMonth() == 2)
	{
		if (d > 0 && d < 29)
			day = d;
		else
			day = 1;
	}
}
void Date::setYear(int y)
{
	if (y > 0)
		year = y;
	else
		throw invalid_argument("invalid year value");
}
// print Date in the format mm/dd/yyyy
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
int Date::getYear()
{
	return year;
}
void Date::nextDay()
{
	setDay(getDay() + 1);

	if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 ||
		getMonth() == 7 || getMonth()==8 || getMonth() == 10 || 
		getMonth() == 12)
	{
		if (getDay() == 1)
		{
			setMonth(getMonth() + 1);
			if (getMonth() == 12)
			{
				setYear(getYear() + 1);
			}
		}
	}
	else if (getMonth() == 4 || getMonth() == 6 || getMonth() == 9 ||
		getMonth() == 11)
	{
		if (getDay() == 1)
		{
			setMonth(getMonth() + 1);
			if (getMonth() == 12)
			{
				setYear(getYear() + 1);
			}
		}
	}
	else if (getMonth() == 2)
	{
		if (getDay() == 1)
		{
			setMonth(getMonth() + 1);
			if (getMonth() == 12)
			{
				setYear(getYear() + 1);
			}
		}
	}

}
void Date::print()
{
	cout << setfill('0') << setw(2) << getMonth() << "/" << setw(2) << getDay()
		<< "/" << setw(4) << getYear();
}
