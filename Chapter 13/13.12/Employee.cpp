// Abstract-base-class Employee-class member-function definitions.
// Note: No definitions are given for pure virtual functions.

#include "stdafx.h"
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first, const string &last,
	const string &ssn, int month, int day, int year)
	: firstName(first), lastName(last), socialSecurityNumber(ssn),
	birthDate(month, day, year)
{

}

// set first name
void Employee::setFirstName(const string &first)
{
	firstName = first;
}

// return first name
string Employee::getFirstName() const
{
	return firstName;
}

// set last name
void Employee::setLastName(const string &last)
{
	lastName = last;
}

// return last name
string Employee::getLastName() const
{
	return lastName;
}

// set social security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn;
}

// return social security number
string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

// set employee's birthdate
void Employee::setBirthDate(int month, int day, int year)
{
	birthDate.setDate(month, day, year);
}

// return employee's birthdate
Date Employee::getBirthDate() const
{
	return birthDate;
}
// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{
	cout << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber();
}
