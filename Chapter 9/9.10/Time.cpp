#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

// Time constructor initializes each data member to zero
Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second); // validate and set time
}

// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
	setHour(h); // set private field hour
	setMinute(m); // set private field minute
	setSecond(s); // set private field second
}

// set hour value
void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
	{
		hour = h;
		setInvalidTime(1); // Hour is valid
	}
	else
	{
		hour = 0;
		setInvalidTime(0); // hour is invalid
	}
}

// set minute value
void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
	{
		minute = m;
		setInvalidTime(1); // Minute is valid
	}
	else
	{
		minute = 0;
		setInvalidTime(0); // Minute is invalid
	}
}

// set second value
void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
	{
		second = s;
		setInvalidTime(1); // Second is valid
	}
	else
	{
		second = 0;
		setInvalidTime(0); // Second is invalid
	}
}

void Time::setInvalidTime(int i)
{
	invalidTime = i;
}

// return hour value
int Time::getHour()
{
	return hour;
}

// return minute value
int Time::getMinute()
{
	return minute;
}

// return second value
int Time::getSecond()
{
	return second;
}

int Time::getInvalidTime()
{
	return invalidTime;
}
// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}

