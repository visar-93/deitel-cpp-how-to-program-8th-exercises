#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	virtual void credit(double); // redefined credit function
	virtual bool debit(double); // redefined debit function
private:
	double transactionFree;
	void chargeFee();
};
#endif // !CHECKINGACCOUNT_H
