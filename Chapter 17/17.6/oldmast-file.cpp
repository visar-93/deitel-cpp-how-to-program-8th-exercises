#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream> // file stream
#include <cstdlib>
using namespace std;

int main()
{
	// ofstream constructor opens file
	ofstream oldMastFile("oldmast.dat", ios::out);

	// exit program if unable to create file
	if (!oldMastFile) // overloaded operator !
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	cout << "Enter the account, name, and balance." << endl
		<< "Enter end-of-file to end input.\n?";

	int masterAccount;
	string name;
	string lastName;
	double balance;

	// read account, name and balance from cin, then place in file
	while (cin >> masterAccount >> name >> lastName >> balance)
	{
		oldMastFile << masterAccount << ' ' << name << ' ' << lastName <<' ' <<balance << endl;
		cout << "?";
	}
	return 0;
}

