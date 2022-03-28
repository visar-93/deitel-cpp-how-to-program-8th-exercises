#include "stdafx.h"
#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sn, const string &sa, const string &sc,
	const string &ss, int szip, const string &rn, const string &ra,
	const string &rc, const string &rs, int rzip, double w, double c, double fee)
	: Package(sn, sa, sc, ss, szip, rn, ra, rc, rs, rzip, w, c)
{
	setFlatFee(fee);
}

void TwoDayPackage::setFlatFee(double fee)
{
	if (fee > 0)
		flatFee = fee;
	else
		flatFee = 0;
}
double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}
double TwoDayPackage::calculateCost()
{
	return getFlatFee() + Package::calculateCost();
}

