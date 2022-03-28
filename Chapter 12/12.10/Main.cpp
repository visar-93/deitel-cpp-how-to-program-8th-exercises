#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{
	Account account1(50.0); // Account class object
	SavingAccount account2(25.0, 0.03); // SavingAccount class object
	CheckingAccount account3(80.0, 1.0); // CheckingAccount class object

	cout << fixed << setprecision(2);

	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
	cout << "account3 balance: $" << account3.getBalance() << endl;

	cout << "\nAttempting to debit $25.00 from account1." << endl;
	account1.debit(25.00);
	cout << "\nAttempting to debit $30.00 from account2." << endl;	
	account2.debit(30.00);
	cout << "\nAttempting to debit $40.00 from account3." << endl;
	account3.debit(40.00);

	cout << "\naccount1 balance: $" << account1.getBalance() << endl;
	cout << "\naccount2 balance: $" << account2.getBalance() << endl;
	cout << "\naccount3 balance: $" << account3.getBalance() << endl;

	cout << "\nCrediting $40.00 to account1." << endl;
	account1.credit(40.00);
	cout << "\nCrediting $65.00 to account2." << endl;
	account2.credit(65.00);
	cout << "\nCrediting &20.00 to account3" << endl;
	account3.credit(20.00);

	cout << "\naccount1 balance: $" << account1.getBalance() << endl;
	cout << "\naccount2 balance: $" << account2.getBalance() << endl;
	cout << "\naccount3 balance: $" << account3.getBalance() << endl;

	// add interest to SavingsAccount object account2
	double interestEarned = account2.calculateInterest();
	cout << "\nAdding $" << interestEarned << " interest to account2."
		<< endl;
	account2.credit(interestEarned);
	cout << "\nNew account2 balance: $" << account2.getBalance() << endl;

    return 0;
}


