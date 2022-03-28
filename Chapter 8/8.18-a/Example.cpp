#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void instructions(const int, int[], int[], int[], int, int, int);
void reportOfValues(const int, int[]);


int main()
{
	const int sizeOfArray = 100;
	int array[sizeOfArray], temp[sizeOfArray], instruct[sizeOfArray];
	int x = 0, y = 0, z = 0;

	instructions(sizeOfArray, array, temp,instruct, x, y, z);
	reportOfValues(sizeOfArray, array);


	return 0;
}

void instructions(const int SIZE, int array[], int temp[], int first[], int i, int j, int k)
{
	int inst = 0, acu = 0, value;

	while (inst != -999)
	{
		cout << "Enter instruction \n";
		cin >> inst;
		if (inst == -999)
		{
			break;
		}
		i = inst / 100;
		j = inst % 100;

		if (i == 10)
		{
			cout << "enter the value ";
			cin >> value;
			array[j] = value;
		}
		else if (i == 11)
		{
			cout << "The value in array[" << j << "] is " << acu << endl;
		}
		else if (i == 20)
		{
			k = j;
			temp[k] = array[j];
		}
		else if (i == 30)
		{
			acu = temp[k] + array[j];
		}
		else if (i == 21)
		{
			array[j] = acu;
		}
			first[j] = i * 100 + j;
	}
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
			cout << setw(4)<< first[l] << "  ";
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

