#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int row = 10;
	int colum = 1;
	
	while (row >=1)
	{
		colum = 1;

		while (colum <= 10)
		{
			if (row % 2 == 0)
				cout << "* ";
			else 
				cout << " *";
			colum++;
		}
		cout << endl;

		--row;
	}
}
