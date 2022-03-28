#include "stdafx.h"
#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;

int main()
{
	HealthProfile person;

	string name, lastname, gender, print;
	int dayb, monthb, yearb, dayn, monthn, yearn, height, weight;

	cout << "Please enter the name: ";
	cin >> name;
	person.setName(name);
	cout << endl;

	cout << "Please enter the lastname: ";
	cin >> lastname;
	person.setLastName(lastname);
	cout << endl;

	cout << "Please enter the gender: ";
	cin >> gender;
	person.setGender(gender);
	cout << endl;

	cout << "Please enter birth date: \n";
	cout << "Day: ";
	cin >> dayb;
	person.setDayB(dayb);
	cout << "Month: ";
	cin >> monthb;
	person.setMonthB(monthb);
	cout << "Year: ";
	cin >> yearb;
	person.setYearB(yearb);
	cout << endl;

	cout << "Please enter today's date: \n";
	cout << "Day: ";
	cin >> dayn;
	person.setDayN(dayn);
	cout << "Month: ";
	cin >> monthn;
	person.setMonthN(monthn);
	cout << "Year: ";
	cin >> yearn;
	person.setYearN(yearn);
	cout << endl;

	cout << "Please enter the height: \n";
	cin >> height;
	person.setHeight(height);
	cout << endl;

	cout << "Please enter the weight: \n";
	cin >> weight;
	person.setWeight(weight);
	cout << endl;

	cout << "Press print for printing the Person's health profile. \n\n";
	cin >> print;

	if (print == "print")
	{
		cout << "\n\n";
		cout << "Person's HealthProfile: \n\n";
		cout << "Name: " << person.getName() << endl;
		cout << "Last Name: " << person.getLastName() << endl;
		cout << "Gender: " << person.getGender() << endl;
		cout << "Date of Birth (dd/mm/yy): " << person.getDayB() << "/" << person.getMonthB() << "/" << person.getYearB() << endl;
		cout << "Age: " << person.getAge() << endl;
		cout << "Height: " << person.getHeight() << endl;
		cout << "Weight: " << person.getWeight() << endl;
		cout << "Body Mass Index: " << person.getBMI() << endl;
		cout << "Maximum Heart-Rate: " << person.getMaximumHeartRate() << endl;
		cout << "Target Heart-Rate: " << person.getTargetHeartRate() << "%" << endl << endl << endl;
		cout << "Date: " << person.getDayN() << "/" << person.getMonthN() << "/" << person.getYearN() << endl;
	}

	return 0;
}


