#include"stdafx.h"
#include<iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	GradeBook();
	void setCourseName(string);
	void setInstructorName(string);
	string getCourseName();
	string getInstructorName();
	void displayMessage();
private:
	string CourseName, InstructorName;
};
