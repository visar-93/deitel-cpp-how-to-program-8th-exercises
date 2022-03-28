// ConsoleApplication125.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	vector<Account *> accounts(2);

	accounts[0] = new SavingAccount(25.0, 0.03); // SavingAccount class object
	accounts[1] = new CheckingAccount(80.0, 1.0); // CheckingAccount class object

	for (size_t i = 0; i < accounts.size(); ++i)
	{
		cout << "Account " << i + 1
			<< "\nBalance: " << accounts[i]->getBalance() << endl;
		if (i == 0)
		{
			double withdrawal;
			cout << "Enter the ammount you want to debit: ";
			cin >> withdrawal;
			accounts[i]->debit(withdrawal);
			cout << "After debit the Balance is: " << accounts[i]->getBalance() << endl;
		}
		if (i == 1)
		{
			double credited;
			cout << "Enter the amount you want to credit: ";
			cin >> credited;
			accounts[i]->credit(credited);
			cout << "After debit the Balance is: " << accounts[i]->getBalance() << endl;
		}
		
		SavingAccount *derivedSavingAccountPtr =
			dynamic_cast<SavingAccount*>(accounts[i]);
		if (derivedSavingAccountPtr != 0)
		{
			double interest = derivedSavingAccountPtr->calculateInterest();
			cout << "Account "<< i+1<<": \nBalance: $"
				<< derivedSavingAccountPtr->getBalance();
			cout << "\nCalculated interest amount: $" << interest;
			derivedSavingAccountPtr->credit(interest);
			cout << "\nBalcance after interest amount added: $" << derivedSavingAccountPtr->getBalance() << endl;
		}
	}

	cout << endl;

	for (size_t j = 0; j < accounts.size(); ++j)
		delete accounts[j];

	return 0;
}
