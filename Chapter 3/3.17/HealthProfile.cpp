#include "stdafx.h"
#include <iostream>
#include <string>
#include "HealthProfile.h"
using namespace std;

void HealthProfile::setName(string number)
{
	name = number;
}
void HealthProfile::setLastName(string number)
{
	lastname = number;
}
void HealthProfile::setGender(string number)
{
	gender = number;
}
void HealthProfile::setDayB(int number)
{
	dayB = number;
}
void HealthProfile::setMonthB(int number)
{
	monthB = number;
}
void HealthProfile::setYearB(int number)
{
	yearB = number;
}
void HealthProfile::setDayN(int number)
{
	dayN = number;
}
void HealthProfile::setMonthN(int number)
{
	monthN = number;
}
void HealthProfile::setYearN(int number)
{
	yearN = number;
}
void HealthProfile::setAge()

{
	if ((monthN >= monthB) & (dayN > dayB))
	{
		age = yearN - yearB;
	}

	if ((monthN >= monthB) & (dayN < dayB))
	{
		age = yearN - yearB;
	}


	if ((monthN < monthB) & (dayN > dayB))
	{
		age = (yearN - yearB) - 1;
	}

	if ((monthN < monthB) & (dayN < dayB))
	{
		age = (yearN - yearB) - 1;
	}
}
void HealthProfile::setHeight(int number)
{
	height = number;
}
void HealthProfile::setWeight(int number)
{
	weight = number;
}
string HealthProfile::getName()
{
	return name;
}
string HealthProfile::getLastName()
{
	return lastname;
}
string HealthProfile::getGender()
{
	return gender;
}
int HealthProfile::getDayB()
{
	return dayB;
}
int HealthProfile::getMonthB()
{
	return monthB;
}
int HealthProfile::getYearB()
{
	return yearB;
}
int HealthProfile::getDayN()
{
	return dayN;
}
int HealthProfile::getMonthN()
{
	return monthN;
}
int HealthProfile::getYearN()
{
	return yearN;
}
int HealthProfile::getAge()
{
	setAge();
	return age;
}
double HealthProfile::getHeight()
{
	return height;
}
int HealthProfile::getWeight()
{
	return weight;
}
double HealthProfile::getBMI()
{
	return (weight / ((height * height)/10000.00));
}
int HealthProfile::getMaximumHeartRate()
{
	return (220 - age);
}
double HealthProfile::getTargetHeartRate()
{
	return ((220 - age) / 200.00) * 100;
}
