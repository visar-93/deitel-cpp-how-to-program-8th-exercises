#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void inputVector(vector<int> &);
void outputVector(vector<int> &);

int main()
{
	vector<int> salary(10);
	inputVector(salary);
	outputVector(salary);
	cout << endl;
}
void inputVector(vector<int> &array)
{
	for (size_t i = 0; i < array.size(); ++i)
	{
		int gross;
		int sal;
		cout << "Enter gross sales for this week for Salesman " << setw(2) << i + 1
			<< ": ";
		cin >> gross;
		sal = 200 + (0.09*gross);

		array[i] = sal;
	}
}
void outputVector(vector<int> &array)
{
	cout << "\nSalary distribution\n";

	for (size_t a=0; a < array.size(); ++a)
	{
		cout << setw(12) << array[a];

		if ((a + 1) % 4 == 0)
			cout << endl;
	}
	
	cout << endl << endl;

	vector<int>frequency(11);

	for (size_t sale = 0; sale < array.size(); ++sale)
	{
		++frequency[(array[sale] / 100)];
	}
	for (size_t j = 2; j < frequency.size(); ++j)
	{
		cout << "$ " << j * 100 << "-" << (j * 100) + 90 << ": ";
		cout << frequency[j] << endl;
	}
}
