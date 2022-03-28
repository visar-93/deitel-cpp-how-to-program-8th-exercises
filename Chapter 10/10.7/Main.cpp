#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "SavingAccount.h"
using namespace std;

int main()
{
	SavingAccount saver1(2000), saver2(3000);

	SavingAccount::modifyInterestRate(.03);

	cout << "\nOutput monthly balances for one year at 3% " 
		<< "\nBalances: Saver 1 ";
	saver1.printBalance();
	cout << "\tSaver 2 ";
	saver2.printBalance();

	for (int month = 1; month <= 12; ++month)
	{
		saver1.calculateMonthlyInterest();
		saver2.calculateMonthlyInterest();

		cout << "\nMonth" << setw(3) << month << ": Saver 1 ";
		saver1.printBalance();
		cout << "\tSaver 2 ";
		saver2.printBalance();
	}
	SavingAccount::modifyInterestRate(.04);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	cout << "\nAfter setting interest rate to 4% "
		<< "\nBalances: Saver 1 ";
	saver1.printBalance();
	cout << "\tSaver 2 ";
	saver2.printBalance();
	cout << endl;

    return 0;
}
