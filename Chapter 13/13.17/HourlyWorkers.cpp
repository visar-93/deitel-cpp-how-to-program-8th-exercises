// HourlyWorkers class member-function definitions
#include "stdafx.h"
#include <iostream>
#include "HourlyWorkers.h"
using namespace std;

// constructor
HourlyWorkers::HourlyWorkers(const string &first,
	const string &last, const string &ssn, double hour, double price)
	:Employee(first, last, ssn)
{
	setHour(hour);
	setWage(price);
}

// set worked hours
void HourlyWorkers::setHour(double hr)
{
	if (hr >= 0.0)
		hour = hr;
	else
		throw invalid_argument("Hour quantity must be > 0.0");
}

// return worked hours
double HourlyWorkers::getHour() const
{
	return hour;
}

// set commission rate
void HourlyWorkers::setWage(double price)
{
	if (price > 0.0)
		wage = price;
	else
		throw invalid_argument("Price must be > 0.0");
}

// get commission rate
double HourlyWorkers::getWage() const
{
	return wage;
}

// calculate earnings; override pure virtual function earnings in Employee
double HourlyWorkers::earnings() const
{
	if (hour <= 40)
		return getHour() * getWage();
	else if (hour > 40)
		return (getHour() - 40)*1.5*getWage() + 40 * getWage();
}

// print CommissinEmployee's information
void HourlyWorkers::print() const
{
	cout << "hourly workers employee: ";
	Employee::print();
	if (getHour() > 40)
	{
		cout << "\nregular hours: " << 40
			<< "\novertime hours: " << getHour()-40
			<< "\nprice per regular hour: " << getWage()
			<< "\nprice per overtime hour (price x 1.5): " << getWage()*1.5;
	}
	else if (getHour() <= 40)
	{
		cout << "\nworked hours: " << getHour()
			<< "\nprice per hour: " << getWage() << endl;
	}
}
