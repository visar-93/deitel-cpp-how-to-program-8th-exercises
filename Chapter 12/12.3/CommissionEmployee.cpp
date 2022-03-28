#include "stdafx.h"
#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(
	const string &first, const string &last, const string &ssn,
	double sales, double rate)
	:firstName(first), lastName(last), socialSecurityNumber(ssn) 
{
	setGrossSales(sales); // validate and store gross sales 
	setCommissionRate(rate); // validate and store commission rate
}

// set first name
void CommissionEmployee::setFirstName(const string &first)
{
	firstName = first;
}

// return first name
string CommissionEmployee::getFirstName() const
{
	return firstName;
}

// set last name
void CommissionEmployee::setLastName(const string &last)
{
	lastName = last;
}

// return last name
string CommissionEmployee::getLastName() const
{
	return lastName;
}

// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn;
}

// return social security number
string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

// set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross sales must be >= 0.0.");
}

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

// set commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate >= 0.0 && rate < 1.0)
		commissionRate = rate;
	else
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

// calculate earnings
double CommissionEmployee::earnings() const
{
	return getCommissionRate() * getGrossSales();
}

// print CommissionEmployee object
void CommissionEmployee::print() const
{
	cout << "commission employee: " 
		<< getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate();
}
