#include "stdafx.h"
#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee)
	:Account(initialBalance)
{
	if (fee > 0)
		transactionFree = fee;
	else
		transactionFree = 0;
}

void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	chargeFee();
}

bool CheckingAccount::debit(double amount)
{
	bool success = Account::debit(amount);
	if (success)
	{
		chargeFee();
		return true;
	}
	else
		return false;
}

void CheckingAccount::chargeFee()
{
	Account::setBalance(getBalance() - transactionFree);
	
	cout << "$" << transactionFree << " transaction fee charged." << endl;
}
