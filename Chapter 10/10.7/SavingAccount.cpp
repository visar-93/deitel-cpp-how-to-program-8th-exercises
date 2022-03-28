#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "SavingAccount.h"
using namespace std;

double SavingAccount::annualInterestRate = 0.0;

SavingAccount::SavingAccount(double saving)
{
	if (saving >= 0)
		savingBalance = saving;
	else
		savingBalance = 0;
}
void SavingAccount::calculateMonthlyInterest()
{
	savingBalance += savingBalance * (annualInterestRate / 12.0);
}
void SavingAccount::modifyInterestRate(double rate)
{
	if (rate >= 0 && rate <= 1.0)
		annualInterestRate = rate;
	else
		annualInterestRate = 0.03;
}
void SavingAccount::printBalance()
{
	cout << fixed << setprecision(2);

	cout << '$' << savingBalance;
}
