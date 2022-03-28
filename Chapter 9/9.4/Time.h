#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();
	void printUniversal();
	void printStandard();
private:
	int hour;
	int minute;
	int second;
};
#endif // !TIME_H
