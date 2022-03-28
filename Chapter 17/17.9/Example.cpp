#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include <string>
#include <fstream> // file stream
#include <cstdlib>
using namespace std;

void outputLine(ofstream&, int, const string, const string, double); // prototype

int main()
{
	// ifstream constructor reads file
	ifstream inOldMaster("oldmast.dat", ios::in);
	ifstream inTransaction("trans.dat", ios::in);

	// ofstream constructor opens file
	ofstream outNewMaster("newmast.dat");

	// exit program if unable to read file
	if (!inOldMaster) // overloaded operator !
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	// exit program if unable to read file
	if (!inTransaction)
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	// exit program if unable to open file
	if (!outNewMaster)
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	int masterAccount;
	string name;
	string lastName;
	double balance;
	int transactionAccount;
	double transactionBalance;

	cout << "Processing...\n";

	inTransaction >> transactionAccount >> transactionBalance;

	while (!inTransaction.eof())
	{
		inOldMaster >> masterAccount >> name >> lastName >> balance;

		while (masterAccount < transactionAccount && !inOldMaster.eof())
		{
			outputLine(outNewMaster, masterAccount, name, lastName, balance);
			inOldMaster >> masterAccount >> name >> lastName >> balance;
		}

		if (masterAccount > transactionAccount)
		{
			cout << "Unmatched transaction record for account "
				<< transactionAccount << "\n";

			inTransaction >> transactionAccount >> transactionBalance;
		}
		else if (masterAccount < transactionAccount)
		{
			cout << "Unmatched transaction record for account "
				<< transactionAccount << "\n";

			inTransaction >> transactionAccount >> transactionBalance;
		}
		while (masterAccount == transactionAccount && !inTransaction.eof())
		{
			balance += transactionBalance;
			inTransaction >> transactionAccount >> transactionBalance;
		}
		if(!inOldMaster.eof())
			outputLine(outNewMaster, masterAccount, name, lastName, balance);
	}

	inTransaction.close();
	outNewMaster.close();
	inOldMaster.close();

	return 0;
}

void outputLine(ofstream &oRef, int account, const string name, const string lastName, double balance)
{
	oRef << left << setw(10) << account << setw(13) << name << setw(20) << lastName
		<< setw(10) << setprecision(5) << right << balance << endl;
	cout << left << setw(10) << account << setw(13) << name << setw(20) << lastName
		<< setw(10) << setprecision(5) << right << balance << endl;
}

