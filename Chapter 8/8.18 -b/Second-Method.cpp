#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void instructions(const int, int[], int[], int[], int, int, int);
void reportOfValues(const int, int[]);


int main()
{
	const int sizeOfArray = 7;
	int array[sizeOfArray], temp[sizeOfArray], instruct[sizeOfArray];
	int x = 0, y = 0, z = 0;

	instructions(sizeOfArray, array, temp, instruct, x, y, z);
	reportOfValues(sizeOfArray, array);


	return 0;
}

void instructions(const int SIZE, int array[], int temp[], int first[], int i, int j, int k)
{
	double average;
	int avgcounter = 0, totalentered = 0;
	for (int counting = 0; counting < SIZE; ++counting)
	{
		int inst, acu = 0, value;

		cout << "Enter instruction \n";
		cin >> inst;

		i = inst / 100;
		j = inst % 100;
		
		if (i == 10)
		{
			cout << "enter the value ";
			cin >> value;
			array[j] = value;
			++avgcounter;
			totalentered += value;
		}
		
		first[j] = i * 100 + j;
	}
	    average = totalentered / avgcounter;
	cout << "\n\nAverage of entered values is: " <<setprecision(2)<< average << " .\n\n";
	cout << "\nTable with instructions: \n";

	for (int l = 0; l < SIZE; ++l)
	{
		if (l % 10 == 0)
			cout << endl;
		if (first[l] <= 0)
		{
			first[l] = 0;
			cout << setw(4) << "0000  ";
		}
		else
		{
			cout << setw(4) << first[l] << "  ";
		}
	}
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
