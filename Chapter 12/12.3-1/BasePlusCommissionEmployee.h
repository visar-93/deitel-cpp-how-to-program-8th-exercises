#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "stdafx.h"
#include<string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee
{
public:
	BasePlusCommissionEmployee(const CommissionEmployee &, double = 0.0);

	void setBaseSalary(double); // set base salary
	double getBaseSalary() const; // return base salary

	double earnings(const CommissionEmployee &) const; // calculate earnings
	void print(const CommissionEmployee &) const; // print BasePlusCommissionEmployee object
private:
	double baseSalary; // base salary
       CommissionEmployee commissionEmployee;
};
#endif // !BASEPLUS_H

