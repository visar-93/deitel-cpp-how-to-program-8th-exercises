#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName;
	string lastName;
	string firstAndlastName;

	cout << "Enter first name: \n";
	getline(cin, firstName);
	cout << "Enter last name: \n";
	getline(cin, lastName);

	cout << "\n\nFirst and last name by append():\n";
	firstAndlastName.append(firstName);
	firstAndlastName.append(" ");
	firstAndlastName.append(lastName);
	cout << firstAndlastName << endl;

	firstAndlastName.erase();
	cout << "\n\nFirst and last name by \"+\" operator:\n";
	firstAndlastName += firstName;
	firstAndlastName += " ";
	firstAndlastName += lastName;
	cout << firstAndlastName << endl;

	string firstlasntname(firstName + " " + lastName);
	cout << "\n\nFirst and last name by concatenation:\n";
	cout << firstlasntname << endl;
}

