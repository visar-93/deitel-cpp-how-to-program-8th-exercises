#include"stdafx.h"
#include<iostream>
#include<string>
#include"Account.h"

using namespace std;

Account::Account(int money)
{
	if (money >= 0)
	{
		balance = money;
		cout << "The Balance in your account is: " << balance << "Euro." << endl;
	}

	if (money < 0)
	{
		balance = 0;
		cout << "The initial Balance was invalid. The balance in your account is: " << balance << "Euro." << endl;
	}
}

void Account::credit(int money)
{
	if (money >= 0)
	{
		balance = balance + money;
		cout << "You just credited amount of: " << money << "Euro. The Balance in your account is: " << balance << "Euro.\n";
	}

	if (money < 0)
	{
		cout << "The Balance in your account is: " << balance << "Euro.\n";
	}
}

void Account::debit(int money)
{
	if (money > balance)
	{
		cout << "Transaction has failed. You tried to withdraw more than your Balance.\n";
	}

	if (money <= balance)
	{
		balance = balance - money;
		cout << "Transaction is completed succesfully. The Balance in your account is: " << balance << "Euro.\n";	
	}
}

int Account::getBalance()
{
	return balance;
}
