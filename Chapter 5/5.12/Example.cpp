#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << endl ;
	

	for(i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
	cout << endl;


	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j < i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			
		}
		cout << endl;
	}
	cout << endl;

	
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j < i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			
		}
		cout << endl;
	}
	cout << endl;
	

	return 0;
}
