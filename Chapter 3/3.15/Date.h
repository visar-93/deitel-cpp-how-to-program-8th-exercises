#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Date
{
public:

	void setMonth(int);
	void setDay(int);
	void setYear(int);
	void displayDate();
	int getMonth();
	int getDay();
	int getYear();

private:
	int month, day, year;
};
