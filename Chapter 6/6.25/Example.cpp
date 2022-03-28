#include "stdafx.h"
#include <iostream>

using namespace std;

int secondCalculation1(int hh, int mm, int ss);
int secondCalculation2(int hh, int mm, int ss);

int main()
{
	int hour, minute, second;

	cout << "Please enter time\n";
	cout << "Hour (0-24): ";
	cin >> hour;
	cout << "Minute (0-59): ";
	cin >> minute;
	cout << "Seconds (0-59): ";
	cin >> second;

	cout << "The amount of seconds since the last time the clock 'struck 12' is: " << secondCalculation1(hour, minute, second) << endl;
	cout << "The amount of seconds for all day long is: " << secondCalculation2(hour, minute, second) << endl;
}
int secondCalculation1(int hh, int mm, int ss)
{
	if (hh > 12 && hh <= 24 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
	{
		return ((hh - 12) * 3600 + mm * 60 + ss);
	}
	else if (hh <= 12 && hh >= 0 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
	{
		return (hh * 3600 + mm * 60 + ss);
	}
	else
		cout << "Entered wrong time format.\n";
}
int secondCalculation2(int hh, int mm, int ss)
{
	if (hh <= 24 && hh >= 0 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
	{
		return (hh * 3600 + mm * 60 + ss);
	}
	else
		cout << "Entered wrong time format.\n";
}
