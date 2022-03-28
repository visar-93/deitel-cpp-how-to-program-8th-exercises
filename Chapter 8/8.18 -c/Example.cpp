#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void instructions(int[], int[]);
void reportOfValues(const int, int[]);


int main()
{
	const int sizeOfArray = 7;
	int array[sizeOfArray], temp[sizeOfArray], instruct[sizeOfArray];

	instructions(array, instruct);
	reportOfValues(sizeOfArray, array);

	return 0;
}

void instructions(int array[], int first[])
{
	int value1,value2;
	cout << "enter the value ";
	cin >> value1;
	array[0] = value1;

	for (int counting = 1; counting <value1; ++counting)
	{
		cout << "enter the value ";
		cin >> value2;
		array[counting] = value2;
		first[counting] = 1000 + counting;
	}
	int maximum = 0;
	for (int large = 0; large < array[0]; large++)
	{
		if (array[large] > maximum)
			maximum = array[large];
	}
	cout << "\n\nThe largest value is: " << maximum << "\n\n";

}
void reportOfValues(const int size, int table[])
{
	cout << "\n\nTable with values: \n";

	for (int n = 0; n < size; ++n)
	{
		if (table[n] <= 0)
			table[n] = 0;
		if (n % 10 == 0)
			cout << endl;

		cout << setw(2) << table[n] << "  ";
	}
}
