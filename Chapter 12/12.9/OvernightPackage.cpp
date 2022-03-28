#include "stdafx.h"
#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &sn, const string &sa, const string &sc,
const string &ss, int szip, const string &rn, const string &ra,
const string &rc, const string &rs, int rzip, double w, double c, double o)
	: Package(sn, sa, sc, ss, szip, rn, ra, rc, rs, rzip, w, c)
{
	setOvernightFee(o);
}

void OvernightPackage::setOvernightFee(double on)
{
	if (on > 0)
		overnightFee = on;
	else
		overnightFee = 0;
}
double OvernightPackage::getOvernightFee() const
{
	return overnightFee;
}

double OvernightPackage::calculateCost()
{
	return (getOvernightFee() + Package::getCostPerOunce()) * Package::getWeight();
}
