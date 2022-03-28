#include"stdafx.h"
#include<iostream>
#include<string>
#include"HeartRate.h"
using namespace std;

void HeartRate::setName(string number)
{
	name = number;
}
void HeartRate::setLastName(string number)
{
	lastname = number;
}
void HeartRate::setDay(int number)
{
	day = number;
}
void HeartRate::setMonth(int number)
{
	month = number;
}
void HeartRate::setYear(int number)
{
	year = number;
}
void HeartRate::setDayn(int number)
{
	dayn = number;
}
void HeartRate::setMonthn(int number)
{
	monthn = number;
}
void HeartRate::setYearn(int number)
{
	yearn = number;
}
string HeartRate::getName()
{
	return name;
}
string HeartRate::getLastName()
{
	return lastname;
}
int HeartRate::getDay()
{
	return day;
}
int HeartRate::getMonth()
{
	return month;
}
int HeartRate::getYear()
{
	return year;
}
int HeartRate::getDayn()
{
	return dayn;
}
int HeartRate::getMonthn()
{
	return monthn;
}
int HeartRate::getYearn()
{
	return yearn;
}
void HeartRate::setAge()
{
	if ((monthn >= month) & (dayn > day))
	{
		age = yearn - year;
	}

	if ((monthn >= month) & (dayn < day))
	{
		age = yearn - year;
	}


	if ((monthn < month) & (dayn > day))
	{
		age = (yearn - year) - 1;
	}

	if ((monthn < month) & (dayn < day))
	{
		age = (yearn - year) - 1;
	}
}
int HeartRate::getAge()
{
	setAge();
	return age;
}
int HeartRate::getMaximumHeartRate()
{
	return (220 - age);
}
double HeartRate::getTargetHeartRate()
{
	return ((220 - age) / 220.0)*100;
}
