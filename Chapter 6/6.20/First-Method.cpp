#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int multipliest(int num1, int num2);

int main()
{
	int num1 = 0; 
	int num2 = 0;
	int play = 0;
	int counter;

	for (counter = 1; (num1 != -1 || num2 !=-1); ++counter)
	{
		cout << "Enter num1 or num2 different than -1 in order to continue\nEnter num1 or num2 -1 to end\n\n";
		cout << "num1: ";
		cin >> num1;
		cout << "num2: ";
		cin >> num2;
		cout << "num2 is a multiple of num2 :\n(If True it will be shown 1 - If False it will be shown 0\n" << multipliest(num2, num1) << endl;;
	}
	cout << endl;
}

int multipliest(int num1, int num2)
{
	if ((num2%num1) == 0)
	{
		return bool(true);
	}
	else if	((num2%num1) != 0)
	{
		return bool(false);
	}
}
