#include "stdafx.h"
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const CommissionEmployee &data, double salary)
	// explicitly call base-class construcctor
{
	setBaseSalary(salary); // validate and store base salary
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
double BasePlusCommissionEmployee::earnings(const CommissionEmployee &earn) const
{
	return baseSalary + earn.earnings();
}

// print BasePlusCOmmissionEmployee object
void BasePlusCommissionEmployee::print(const CommissionEmployee &pr) const
{
	cout << "base-salaried ";

	//invoke CommissionEmployee's print function
	pr.print();

	cout << "\nbase salary: " << getBaseSalary();
}
