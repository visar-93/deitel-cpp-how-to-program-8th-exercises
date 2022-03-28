#include "stdafx.h"
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	myGradeBook.displayGradePointAverage();

	return 0;
}
