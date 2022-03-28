#include "stdafx.h"
#include <iostream>
#include "SavingAccount.h"
using namespace std;

SavingAccount::SavingAccount(double initialBalance, double interestRate)
	: Account(initialBalance)
{
	setInterestRate(interestRate);
}

void SavingAccount::setInterestRate(double interestRate)
{
	if (interestRate > 0)
		rate = interestRate;
	else
		rate = 0;
}

double SavingAccount::calculateInterest()
{
	return rate * Account::getBalance();
}
