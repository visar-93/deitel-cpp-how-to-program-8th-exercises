// CommissionEmployee class derived from Employee.
#ifndef COMMISSIONEMPLOYEE
#define COMMISSIONEMPLOYEE

#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
	CommissionEmployee(const string &, const string &,
		const string &,int, int, int, double = 0.0, double = 0.0);

	void setCommissionRate(double); // set commission rate
	double getCommissionRate() const;

	void setGrossSales(double); // set gross sales amount
	double getGrossSales() const;

	// keyword virtual signals intent to override
	virtual double earnings() const; // calculate earnings
	virtual void print() const; // print CommissionEmployee object
private:
	double grossSales;
	double commissionRate;
};
#endif // !COMMISSIONEMPLOYEE
