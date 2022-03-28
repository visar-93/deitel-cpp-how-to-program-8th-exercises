#include"stdafx.h"
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

void Date::setMonth(int number)
{
	month = number;
	if (number < 0 & number > 12)
	{
		month = 1;
	}
}
void Date::setDay(int number)
{
	day = number;
	if (day < 1 & day > 31)
	{
		day = 1;
	}
}
void Date::setYear(int number)
{
	year = number;
}

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
void Date::displayDate()
{
	cout << "Date is : \nmm/dd/yy \n" << getMonth() << "/" << getDay() << "/" << getYear() << "." << endl;
}
