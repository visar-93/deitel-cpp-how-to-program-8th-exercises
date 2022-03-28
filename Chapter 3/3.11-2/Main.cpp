#include"stdafx.h"
#include<iostream>
#include <string>
#include"GradeBook.h"

using namespace std;


int main()
{
	string nameOfCourse, nameOfInstructor;
	GradeBook gradeBook1;

	cout << "Please enter the name of Course: \n";
	getline(cin, nameOfCourse);
	gradeBook1.setCourseName(nameOfCourse);
	cout << endl;

	cout << "Please enter the name of Instructor: \n";
	getline(cin, nameOfInstructor);
	gradeBook1.setInstructorName(nameOfInstructor);
	cout << endl;

	gradeBook1.displayMessage();

    return 0;
}
