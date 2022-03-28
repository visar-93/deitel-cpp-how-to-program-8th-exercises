#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;

Time::Time()
{
	long int totalTime; // total time in seconds since 1970
	int currentYear = 2019 - 1970; // current year since 1/1/1970
	double totalYear; // current time in years (the number of days
	// of this year after we substract spent years until now 
	
	double totalDay; // current time in days, number of days of this year
	double day; // current time in days
	double divisor; // time returned by time() is fiven as the number of
	//seconds elapsed since 1/1/1970 GMT.

	int timeShift = 1; // Depending on the time zone you are in, you must
	// shift the time by a certain number of hours. For this problem,
	// 7 hours is the current shift for EST.(in Kosova GMT is +1, so we try
	// this exercise with 7 and with 1.

	double tempMinute; // Used in conversion to seconds
	double tempSecond; // Used to set seconds.

	totalTime = time(0); // set total time
	divisor = (60.0 * 60.0 * 24.0 * 365.0);//(60sec * 60min * 24hr * 365day)
	totalYear = totalTime / divisor - currentYear; // number of year (this last year)
	totalDay = 365 * totalYear; // leap years ignored , total days of this year
	day = totalDay - static_cast<int>(totalDay); // the value after we substract day-double with day-int
	// this will be helpful to find number of hours, minutes, and seconds;
	tempMinute = totalDay * 24 * 60; // convert totalDay to seconds
	setHour(day * 24 + timeShift);
	setMinute((day * 24 - static_cast< int >(day * 24)) * 60); // set minutes,
	//substraction is used to find the value without remainder after coma operator
	tempMinute -= static_cast< int > (tempMinute) * 60; // //substraction is used to find the value without remainder after coma operator
	tempSecond = tempMinute;
    setSecond(tempSecond);
}

void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		hour = 0;		
}

void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		minute = 0;
}
void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		second = 0;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << endl;
}
