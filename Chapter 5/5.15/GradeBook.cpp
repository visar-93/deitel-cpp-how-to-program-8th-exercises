#include "stdafx.h"
#include <iostream>
#include <string>
#include "GradeBook.h"
#include <iomanip>
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
}
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}
string GradeBook::getCourseName()
{
	return courseName;
}
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!\n"
		<< endl;
}
void GradeBook::inputGrades()
{
	int grade;

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;

	while ((grade = cin.get()) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			++aCount;
			break;

		case 'B':
		case 'b':
			++bCount;
			break;

		case 'C':
		case 'c':
			++cCount;
			break;

		case 'D':
		case 'd':
			++dCount;
			break;

		case 'F':
		case 'f':
			++fCount;
			break;

		case '\n':// ignore newlines
		case '\t': // tabs
		case ' ': // and space inputs
			break;

		default: // catch all characters
			cout << "Incorrent letter grade entered."
				<< "Enter a new grade." << endl;
			break;
		}
	}
}
void GradeBook::displayGradeReport()
{
	cout << "\n\nNumber of students who received each letter grade:"
		<< "\nA: " << aCount
		<< "\nB: " << bCount
		<< "\nC: " << cCount
		<< "\nD: " << dCount
		<< "\nF: " << fCount
		<< endl;
}

void GradeBook::displayGradePointAverage()
{
	double avgGradePoint = 0.00;

	cout << fixed;
	
	avgGradePoint = ((aPoint * aCount) + (bPoint * bCount) + (cPoint * cCount) + (dPoint * dCount) + (fPoint * fCount))
		/ (aCount + bCount + cCount + dCount + fCount);

	cout << "Grade A has 4 points.\nGrade B has 3 points.\nGrade C has 2 points.\nGrade D has 1 points.\nGrade F has 0 points.\n";
	cout << "The averade grade point is: " << setprecision(2) << avgGradePoint << endl;

	if (avgGradePoint >= 0 && avgGradePoint <= 0.99)
	{
		cout << "Based on points, the average Grade of student is " << "F" << endl;
	}
	else if (avgGradePoint >= 1 && avgGradePoint <= 1.99)
	{
		cout << "Based on points, the average Grade of student is " << "D" << endl;
	}
	else if (avgGradePoint >= 2 && avgGradePoint <= 2.99)
	{
		cout << "Based on points, the average Grade of student is " << "C" << endl;
	}
	else if (avgGradePoint >= 3 && avgGradePoint <= 3.99)
	{
		cout << "Based on points, the average Grade of student is " << "B" << endl;
	}
	else if (avgGradePoint >= 4 && avgGradePoint <= 4.99)
	{
		cout << "Based on points, the average Grade of student is " << "A" << endl;
	}

}
