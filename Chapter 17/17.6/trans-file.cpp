#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream> // file stream
#include <cstdlib>
using namespace std;

int main()
{
	// ofstream constructor opens file
	ofstream newTransaction("trans.dat", ios::out);

	// exit program if unable to create file
	if (!newTransaction) // overloaded operator !
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	cout << "Enter the account and balance." << endl
		<< "Enter end-of-file to end input.\n?";

	int transactionAccount;
	double transactionBalance;

	// read account, name and balance from cin, then place in file
	while (cin >> transactionAccount >> transactionBalance)
	{
		newTransaction << transactionAccount << ' ' << transactionBalance << endl;
		cout << "?";
	}
	return 0;
}

