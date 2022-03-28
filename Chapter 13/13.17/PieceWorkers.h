// PieceWorkers class derived from CommissionEmployee
#ifndef PIECEWORKERS_H
#define PIECEWORKERS_H

#include "Employee.h"

class PieceWorkers : public Employee
{
public:
	PieceWorkers(const string &, const string &,
		const string &, double = 0.0, double = 0.0);

	void setQuantity(double); // set produced quantity
	double getQuantity() const;
	void setWage(double); // set product price
	double getWage()const;

	// keyword virtual signals intent to override
	virtual double earnings() const; // calculate earnings
	virtual void print() const; // print PieceWorkers object
private:
	double wage;
	double quantity;
};

#endif // !PIECEWORKERS_H
