#include "stdafx.h"
#include <iostream>
using namespace std;

int qualitypoints(int grade);

int main()
{
	int average;
	cout << "Enter averade of your grades: \n";
	cin >> average;

	cout << "You have " << qualitypoints(average) << " points.\n";
	
};

int qualitypoints(int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return 4;
	}
	if (grade >= 80 && grade <= 80)
	{
		return 3;
	}
	if (grade >= 70 && grade <= 79)
	{
		return 2;
	}
	if (grade >= 60 && grade <= 69)
	{
		return 1;
	}
	if (grade < 60)
	{
		return 0;
	}
}
