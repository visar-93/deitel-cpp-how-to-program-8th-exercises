#include "stdafx.h"
#include<string>
#include "Package.h"
using namespace std;

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

class OvernightPackage : public Package
{
public:
	OvernightPackage(const string &, const string &, const string &, const string &,
		int, const string &, const string &, const string &, const string &,
		int, double, double, double);
	void setOvernightFee(double);
	double getOvernightFee() const;

	double calculateCost();
private:
	double overnightFee;
};

#endif // !OVERNIGHTPACKAGE_H
