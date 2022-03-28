#include <string>
#include "stdafx.h"
#include "Date.h"
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	Employee(const string &, const string &, const string &,
		int, int, int);

	void setFirstName(const string &);
	string getFirstName() const;

	void setLastName(const string &);
	string getLastName() const;

	void setSocialSecurityNumber(const string &);
	string getSocialSecurityNumber() const;

	void setBirthDate(int, int, int); // set birthday
	Date getBirthDate() const; // return birthday

	// pure virtual function makes Employee an abstract base class
	virtual double earnings()const = 0; // pure virtual
	virtual void print() const; // virtua;
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	Date birthDate; // the employee's birthdate
};
#endif // !EMPLOYEE_H
