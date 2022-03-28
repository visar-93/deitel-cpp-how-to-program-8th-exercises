#include"stdafx.h"
#include<iostream>
#include <string>
#include"GradeBook.h"

using namespace std;

GradeBook::GradeBook()
{ }
	
void GradeBook::setCourseName(string name)
{
	CourseName = name;
}
void GradeBook::setInstructorName(string name)
{
	InstructorName = name;
}
string GradeBook::getCourseName()
{
	return CourseName;
}
string GradeBook::getInstructorName()
{
	return InstructorName;
}
void GradeBook::displayMessage()
{
	cout << "Welcome to the Course : \n" << getCourseName()
		<< ".\n" << "This Course is presentet by: \n" << getInstructorName() << endl;
}
