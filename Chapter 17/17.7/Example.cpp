#include "stdafx.h"
#include <iostream>
#include <fstream> // file stream
#include <cstdlib>
using namespace std;

int main()
{
	ofstream outOldMaster("oldmast.dat", ios::out);
	ofstream outTransaction("trans.dat", ios::out);

	// exit program if unable to open file
	if (!outOldMaster) // overloaded operator !
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	// exit program if unable to open file
	if (!outTransaction)
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	//Master file
	outOldMaster << 100 << " " << "Alan" << " "
		<< "Jones" << " " << 348.17 << endl;
	outOldMaster << 300 << " " << "Mary" << " "
		<< "Smith" << " " << 27.19 << endl;
	outOldMaster << 500 << " " << "Sam" << " "
		<< "Sharp" << " " << 0.00 << endl;
	outOldMaster << 700 << " " << "Suzy" << " "
		<< "Green" << " " << -14.22 << endl;

	//Transaction File
	outTransaction << 100 << " " << 27.14 << endl;
	outTransaction << 300 << " " << 62.11 << endl;
	outTransaction << 400 << " " << 100.56 << endl;
	outTransaction << 900 << " " << 82.17 << endl;

		return 0;
}
