#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int row = 1;
	int colum = 1;
	int num;

	cout << "Enter the size of square: ";
	cin >> num;

	while (row <= num)
	{
		colum = 1;

		while (colum <= num)
		{
			if (row == 1 || row == num || colum == 1 || colum == num)
				cout << "*" ;
			else
				cout << " " ;
			colum++;
		}
		cout << endl;

		row++;
	}

}
