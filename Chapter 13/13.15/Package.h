#include "stdafx.h"
#include<string>
using namespace std;

#ifndef PACKAGE_H
#define PACKAGE

class Package
{
public:

	Package(const string &, const string &, const string &, const string &,
		int, const string &, const string &, const string &, const string &,
		int, double, double);

	// sender information
	void setSenderName(const string &);
	string getSenderName() const;
	void setSenderAddress(const string &);
	string getSenderAddress() const;
	void setSenderCity(const string &);
	string getSenderCity() const;
	void setSenderState(const string &);
	string getSenderState() const;
	void setSenderZipCode(int);
	int getSenderZipCode() const;

	// receiver information

	void setReceiverName(const string &);
	string getReceiverName() const;
	void setReceiverAddress(const string &);
	string getReceiverAddress() const;
	void setReceiverCity(const string &);
	string getReceiverCity() const;
	void setReceiverState(const string &);
	string getReceiverState() const;
	void setReceiverZipCode(int);
	int getReceiverZipCode() const;

	// general information
	void setWeight(double);
	double getWeight();
	void setCostPerOunce(double);
	double getCostPerOunce();

	// calculate const per ounce
	double calculateCost();
private:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	int senderZipCode;

	string receiverName;
	string receiverAddress;
	string receiverCity;
	string receiverState;
	int receiverZipCode;

	double weight;
	double cost;
};
#endif // !PACKAGE_H
