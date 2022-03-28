#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include <string>
#include <fstream> // file stream
#include <cstdlib>
using namespace std;

void outputLine(int, const string, const string, double); // prototype

int main()
{

	// ofstream constructor opens file
	ifstream inNewMaster("newmast.dat",ios::in);

	// exit program if unable to read file
	if (!inNewMaster) // overloaded operator !
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}
		
	int masterAccount;
	string name;
	string lastName;
	double balance;

	cout << left << setw(10) << "Account" << setw(13) << "Name" << setw(20)
		<< "LastName" << setw(10) << setprecision(5) << right << balance << endl;
	while (inNewMaster >> masterAccount >> name >> lastName >> balance)
		outputLine(masterAccount, name, lastName, balance);
	
	return 0;
}

void outputLine(int account, const string name, const string lastName, double balance)
{
	cout << left << setw(10) << account << setw(13) << name << setw(20) << lastName
		<< setw(10) << setprecision(5) << right << balance << endl;
}

