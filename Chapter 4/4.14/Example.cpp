#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int account;
	double balance;
	double charges;
	double credit;
	double creditlimit;

	cout << "Enter account number (or -1 to quit): ";
	cin >> account;

	while (account != -1)
	{
		cout << "Enter beginning balace: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credit;
		cout << "Enter credit limit: ";
		cin >> creditlimit;

		balance = (balance + charges - credit);

		cout << "New balance is: " << balance << endl;
		
		if (balance > creditlimit)
		{
			cout << "Account: " << account << endl;
			cout << "Credit limit: " << creditlimit << endl;
			cout << "Balance: " << balance << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		cout << endl;
		cout << "Enter account number (or -1 to quit): ";
		cin >> account;

	}
    return 0;
}
