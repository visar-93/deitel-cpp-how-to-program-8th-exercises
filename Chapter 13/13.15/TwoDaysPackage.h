#include "stdafx.h"
#include<string>
#include "Package.h"
using namespace std;

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const string &, const string &, const string &, const string &,
		int, const string &, const string &, const string &, const string &,
		int, double, double, double);
	void setFlatFee(double);
	double getFlatFee() const;

	double calculateCost();
private:
	double flatFee;
};

#endif // !TWODAYPACKAGE_H
