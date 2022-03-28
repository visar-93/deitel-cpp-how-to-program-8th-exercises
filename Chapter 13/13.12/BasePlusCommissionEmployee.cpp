// BasePlusCommissionEmployee member-function definitions
#include "stdafx.h"
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string &first, const string &last, const string &ssn,
	int month, int day, int year, double sales, double rate, double salary)
	:CommissionEmployee(first, last, ssn, month, day, year, sales, rate)
{
	setBaseSalary(salary);
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if (salary >= 0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salary must be >= 0.0");
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

// calculate earnings
// override virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

// print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";
	CommissionEmployee::print(); // code reuse
	cout << "; base salary: " << getBaseSalary();
}

