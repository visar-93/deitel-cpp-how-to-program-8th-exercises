#include "stdafx.h"
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

// constructor

Package::Package(const string &sn, const string &sa, const string &sc,
	const string &ss, int szip, const string &rn, const string &ra,
	const string &rc, const string &rs, int rzip, double w, double c)
	: senderName(sn), senderAddress(sa), senderCity(sc), senderState(ss),
	senderZipCode(szip), receiverName(rn), receiverAddress(ra), receiverCity(rc),
	receiverState(rs), receiverZipCode(rzip)
{
	setWeight(w);
	setCostPerOunce(c);
}

void Package::setSenderName(const string &name)
{
	senderName = name;
}
string Package::getSenderName() const
{
	return senderName;
}

void Package::setSenderAddress(const string &address)
{
	senderAddress = address;
}
string Package::getSenderAddress() const
{
	return senderAddress;
}

void Package::setSenderCity(const string &city)
{
	senderCity = city;
}
string Package::getSenderCity() const
{
	return senderCity;
}

void Package::setSenderState(const string &state)
{
	senderState = state;
}
string Package::getSenderState() const
{
	return senderState;
}

void Package::setSenderZipCode(int zip)
{
	senderZipCode = zip;
}
int Package::getSenderZipCode() const
{
	return senderZipCode;
}

void Package::setReceiverName(const string &name)
{
	receiverName = name;
}
string Package::getReceiverName() const
{
	return receiverName;
}

void Package::setReceiverAddress(const string &address)
{
	receiverAddress = address;
}
string Package::getReceiverAddress() const
{
	return receiverAddress;
}

void Package::setReceiverCity(const string &city)
{
	receiverCity = city;
}
string Package::getReceiverCity() const
{
	return receiverCity;
}

void Package::setReceiverState(const string &state)
{
	receiverState = state;
}
string Package::getReceiverState() const
{
	return receiverState;
}

void Package::setReceiverZipCode(int zip)
{
	receiverZipCode = zip;
}
int Package::getReceiverZipCode() const
{
	return receiverZipCode;
}

void Package::setWeight(double w)
{
	if (w > 0)
		weight = w;
	else
		weight = 0;
}
double Package::getWeight() 
{
	return weight;
}

void Package::setCostPerOunce(double c)
{
	if (c > 0)
		cost = c;
	else
		cost = 0;
}
double Package::getCostPerOunce()
{
	return cost;
}

double Package::calculateCost()
{
	return getWeight() * getCostPerOunce();
}
