#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double);
	virtual void credit(double);
	virtual bool debit(double);
	void setBalance(double);
	double getBalance();
private:
	double balance;
};

#endif // !ACCOUNT_H
