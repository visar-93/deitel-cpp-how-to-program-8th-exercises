// HourlyWorkers class derived from CommissionEmployee
#ifndef HOURLYWORKERS_H
#define HOURLYWORKERS_H

#include "Employee.h"

class HourlyWorkers : public Employee
{
public:
	HourlyWorkers(const string &, const string &,
		const string &, double = 0.0, double = 0.0);

	void setHour(double); // set produced quantity
	double getHour() const;
	void setWage(double); // set product price
	double getWage()const;

	// keyword virtual signals intent to override
	virtual double earnings() const; // calculate earnings
	virtual void print() const; // print HourlyWorkers object
private:
	double wage;
	double hour;
};

#endif // !HOURLYWORKERS_H
