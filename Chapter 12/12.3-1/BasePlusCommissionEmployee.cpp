#include "stdafx.h"
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string &first, const string &last, const string &ssn,
	double sales, double rate, double salary)
	// initialize composed object
	: commissionEmployee(first, last, ssn, sales, rate)
{
	setBaseSalary(salary); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set commission employee's first name
void BasePlusCommissionEmployee::setFirstName(const string &first)
{
	commissionEmployee.setFirstName(first);
} // end function setFirstName

// return commission employee's first name
string BasePlusCommissionEmployee::getFirstName() const
{
	return commissionEmployee.getFirstName();
} // end function getFirstName

// set commission employee's last name
void BasePlusCommissionEmployee::setLastName(const string &last)
{
	commissionEmployee.setLastName(last);
} // end function setLastName

// return commission employee's last name
string BasePlusCommissionEmployee::getLastName() const
{
	return commissionEmployee.getLastName();
}
void BasePlusCommissionEmployee::setSocialSecurityNumber(
	const string &ssn)
{
	commissionEmployee.setSocialSecurityNumber(ssn);
} // end function setSocialSecurityNumber

// return commission employee's social security number
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
	return commissionEmployee.getSocialSecurityNumber();
} // end function getSocialSecurityNumber

// set commission employee's gross sales amount
void BasePlusCommissionEmployee::setGrossSales(double sales)
{
	commissionEmployee.setGrossSales(sales);
} // end function setGrossSales

// return commission employee's gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const
{
	return commissionEmployee.getGrossSales();
} // end function getGrossSales

// set commission employee's commission rate
void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
	commissionEmployee.setCommissionRate(rate);
} // end function setCommissionRate

// return commission employee's commission rate
double BasePlusCommissionEmployee::getCommissionRate() const
{
	return commissionEmployee.getCommissionRate();
} // end function getCommissionRate

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary = (salary < 0.0) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
} // end function getBaseSalary

	// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + commissionEmployee.earnings();
} // end function earnings

// print BasePlusCommissionEmployee object

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";

	// invoke composed CommissionEmployee object's print function
	commissionEmployee.print();

	cout << "\nbase salary: " << getBaseSalary();
}

/*
For a relatively short program like this one, either approach is acceptable. But as programs become 
larger with more and more objects being instantiated, inheritance becomes preferable because it makes 
the program easier to modify and promotes the reuse of code. The inheritance approach is more natural 
because a base-salaried commission employee is a commission employee. Composition is defined by the 
“has-a” relationship, and clearly it would be strange to say that “ a base-salaried commission employee 
has a commission employee.
*/
