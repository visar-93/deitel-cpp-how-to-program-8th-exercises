#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

void qualitypoints();

int main()
{
	qualitypoints();
};

void qualitypoints()
{
	int count;
	int grade=0;
	int totalgrade=0;
	double average;
	int point;

	cout << "Enter grades to calculate average of grades or -1 to end\n\n";

	for (count = 1; grade != -1; count++)
	{
		cout << "Enter grade: \n";
		cin >> grade;
		if (grade == -1)
			break;
		totalgrade = totalgrade + grade;
	}
	average = totalgrade / (count-1);
	if (average >= 90 && average <= 100)
	{
		point = 4;
	}
	if (average >= 80 && average <= 80)
	{
		point = 3;
	}
	if (average >= 70 && average <= 79)
	{
		point = 2;
	}
	if (average >= 60 && average <= 69)
	{
		point = 1;
	}
	if (average < 60)
	{
		point = 0;
	}

	cout << "Your average is: " << average << " points.\nYou have " << point << " quality points.\n";
}
