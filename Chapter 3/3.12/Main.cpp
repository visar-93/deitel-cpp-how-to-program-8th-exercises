#include"stdafx.h"
#include<iostream>
#include<string>
#include"Account.h"

int main()
{
	Account acc1(1000);
	Account acc2(1500);

	int transfer1,transfer2;
	string account0, account1, account2, activity, credit0, debit0;

	cout << "Please select from which account you want to operate: \n";
	cin >> account0;

	if (account0 == "account1") 
	{
		cout << "The balance in your account is: " << acc1.getBalance() << "Euro.\n";
		cout << "Please select which activity you want to perform: ";
		cin >> activity;
		if (activity == "credit0")
		{
			cout << "Please select the amount you want to credit: \n";
			cin >> transfer1;
			acc1.credit(transfer1);
			
		}
		if (activity == "debit0")
		{
			cout << "Please select the amount you want to withdraw: \n";
			cin >> transfer1;
			acc1.debit(transfer1);
			
		}
		
	}
	if (account0 == "account2")
	{
		cout << "The balance in your account is: " << acc2.getBalance() << "Euro.\n";
		cout << "Please select which activity you want to perform: ";
		cin >> activity;
		if (activity == "credit0")
		{
			cout << "Please select the amount you want to credit: \n";
			cin >> transfer2;
			acc1.credit(transfer2);
			
		}
		if (activity == "debit0")
		{
			cout << "Please select the amount you want to withdraw: \n";
			cin >> transfer2;
			acc2.debit(transfer2);
			
		}

	}

	
	return 0;
}
