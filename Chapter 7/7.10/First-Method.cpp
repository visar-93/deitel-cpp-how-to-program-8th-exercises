#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int salesmans = 10;
	int salary[salesmans] = {};

	for (int i = 0; i < salesmans; ++i)
	{
		int gross;
		int sal;
		cout << "Enter gross sales for this week for Salesman " << setw(2) <<  i + 1
			<< ": ";
		cin >> gross;
		sal = 200 + (0.09*gross);

		salary[i] = sal;
	}

	cout << "\nSalary distribution\n";

	const int frequencySize = 11;
	int frequency[frequencySize] = {};

	for (int sale = 0; sale < salesmans; ++sale)
	{
		++frequency[salary[sale] / 100];		
	}

	for (int count = 2; count < frequencySize; ++count)
	{
		if (count == 10)
		{
			cout << "$ 1000 and over ";
		}
		else
			cout << "$ " << count * 100 << "-" << (count * 100) + 90 << ": ";

		for (int stars = 0; stars < frequency[count]; ++stars)
			cout << '*';

		cout << endl;
	}
}
