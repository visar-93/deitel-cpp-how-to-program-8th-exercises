#include "stdafx.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "DateAndTime.h"
using namespace std;

DateAndTime::DateAndTime(int hour, int minute, int second, int month, int day, int year)
{
	setTime(hour, minute, second);
	setDate(month, day, year);
	void setTime(int, int, int);
}

void DateAndTime::setDate(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}
void DateAndTime::setMonth(int m)
{
	if (m > 0 && m < 13)
		month = m;
	else
		month = 1;

}
void DateAndTime::setDay(int d)
{
	if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 ||
		getMonth() == 7 || getMonth() == 8 || getMonth() == 10 ||
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
void DateAndTime::setYear(int y)
{
	if (y > 0)
		year = y;
	else
		throw invalid_argument("invalid year value");
}
void DateAndTime::setTime(int h, int m, int s)
{
	setHour(h); // set private field hour
	setMinute(m); // set private field minute
	setSecond(s); // set private field second
}
void DateAndTime::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		hour = 0;

}
void DateAndTime::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		minute = 0;
}
void DateAndTime::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		second = 0;
}
int DateAndTime::getMonth()
{
	return month;
}
int DateAndTime::getDay()
{
	return day;
}
int DateAndTime::getYear()
{
	return year;
}
int DateAndTime::getHour()
{
	return hour;
}
int DateAndTime::getMinute()
{
	return minute;
}
int DateAndTime::getSecond()
{
	return second;
}
void DateAndTime::setTick()
{
	setSecond(getSecond() + 1);

	if (getSecond() == 0)
	{
		setMinute(getMinute() + 1);

		if (getMinute() == 0)
		{
			setHour(getHour() + 1);
			if (getHour() == 0)
			{
				nextDay();
			}
		}
	}
}
void DateAndTime::nextDay()
{
	setDay(getDay() + 1);

	if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 ||
		getMonth() == 7 || getMonth() == 8 || getMonth() == 10 ||
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
void DateAndTime::DisplayMessage()
{
	cout << "Date and time in format: \n"
		<< "Hr:Min:Sec // MM/DD/YYYY\n\n";
}
void DateAndTime::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond()
		<< " // " << setw(2) << getMonth() << "/" << setw(2) << getDay()
		<< "/" << setw(4) << getYear();
}

// print Time in standard-time format (HH:MM:SS AM or PM)
void DateAndTime::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM")
		<< "  //  " << setw(2) << getMonth() << "/" << setw(2) << getDay()
		<< "/" << setw(4) << getYear();
}
