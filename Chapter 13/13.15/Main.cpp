#include "stdafx.h"
#include <iomanip>
#include <vector>
#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	vector<Package *> packages(2);

	packages[0] = new TwoDayPackage("Lisa Klein", "5 Broadway", "Somerville", "MA",
		33333, "Bob George", "21 Pine Rd", "Cambridge", "MA", 44444,
		10.5, .65, 2.0);
	packages[1] = new OvernightPackage("Ed Lewis", "2 Oak St", "Boston", "MA",
		55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666,
		12.25, .7, .25);

	double totalCost = 0;

	for (size_t i = 0; i < packages.size(); ++i)
	{
		cout << "Package "<< i + 1<< "\nSender information: \n"
			<< packages[i]->getSenderName() << endl
			<< packages[i]->getSenderAddress() << endl
			<< packages[i]->getSenderCity() << ", "
			<< packages[i]->getSenderState() << " "
			<< packages[i]->getSenderZipCode() << endl;
		cout << endl;

		cout << "Recipient information: \n"
			<< packages[i]->getReceiverName() << endl
			<< packages[i]->getReceiverAddress() << endl
			<< packages[i]->getReceiverCity() << ", "
			<< packages[i]->getReceiverState() << " "
			<< packages[i]->getReceiverZipCode() << endl << endl
			<< "Cost: $" << packages[i]->calculateCost() << endl << endl;

		totalCost += packages[i]->calculateCost();
	}
	cout << endl;

	cout << "Total Cost for packages: $" << totalCost << endl;

	for (size_t j = 0; j < packages.size(); ++j)
		delete packages[j];


	return 0;
}
