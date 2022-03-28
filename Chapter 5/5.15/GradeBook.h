#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:

	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
	void inputGrades();
	void displayGradeReport();
	void displayGradePointAverage();

private:
	string courseName;
	int aCount;
	int bCount;
	int cCount;
	int dCount;
	int fCount;

	int aPoint = 4;
	int bPoint = 3;
	int cPoint = 2;
	int dPoint = 1;
	int fPoint = 0;
	
};
