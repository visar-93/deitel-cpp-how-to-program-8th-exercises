#include "stdafx.h"
#include<iostream>
#include <string>


using namespace std;

class GradeBook
{

public:

	void setCourseName(string name)
	{
		CourseName = name;
	}
	void setInstructorName(string name)
	{
		InstructorName = name;
	}

	string getCourseName()
	{
		return CourseName;
	}
	string getInstructorName()
	{
		return InstructorName;
	}

	void displayMessage()
	{
		cout << "Welcome to the Course : \n" << getCourseName()
			<< ".\n" << "This Course is presented by: \n" << getInstructorName() << endl;
	}

private:
	string CourseName, InstructorName;
};

int main()
{
	string nameOfCourse, nameOfInstructor;

	GradeBook gradeBook1;

	cout << "Please enter the name of Course: \n";
	getline(cin, nameOfCourse);
	gradeBook1.setCourseName(nameOfCourse);
	cout << endl;

	cout << "Please enter the name of sasainstructor: \n";
	getline(cin, nameOfInstructor);
	gradeBook1.setInstructorName(nameOfInstructor);
	cout << endl;

	gradeBook1.displayMessage();
	
}
