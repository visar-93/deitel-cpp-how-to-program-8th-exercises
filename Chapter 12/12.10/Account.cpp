#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double initialBalance)
{
	if (initialBalance > 0.0)
		balance = initialBalance;
	else
	{
		balance = 0.0;
		throw invalid_argument("Initial Balance should be greater than 0.0$");
	}
}

void Account::credit(double add)
{
	balance += add;
}

bool Account::debit(double sub)
{
	if (sub > balance)
	{
		cout << "Debit amount exceeded account balance" << endl;
		return false;
	}
	else
	{
		balance -= sub;
		return true;
	}
}

void Account::setBalance(double newBalance)
{
	balance = newBalance;
}

double Account::getBalance()
{
	return balance;
}

