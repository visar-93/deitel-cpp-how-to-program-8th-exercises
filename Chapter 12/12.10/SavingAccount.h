#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;

#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

class SavingAccount : public Account
{
public:
	SavingAccount(double, double);
	void setInterestRate(double );
	double calculateInterest();
private:
	double rate;
};
#endif // !SAVINGACCOUNT_H

