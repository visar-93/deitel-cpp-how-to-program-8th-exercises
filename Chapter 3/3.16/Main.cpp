#include"stdafx.h"
#include<iostream>
#include<string>
#include"HeartRate.h"
using namespace std;
int main()
{
	HeartRate person;

	string name, lastname;
	int day, month, year, dayn, monthn, yearn;

	cout << "Please enter the name: ";
	getline(cin, name);
	person.setName(name);
	cin.ignore();
	
	cout << "Please enter the lastname: ";
	getline(cin, lastname);
	person.setLastName(lastname);

	cout << "Please enter birth date \nDay: ";
	cin >> day;
	person.setDay(day);
	cout << "Month: ";
	cin >> month;
	person.setMonth(month);
	cout << "Year: ";
	cin >> year;
	person.setYear(year);
	cout << endl;

	cout << "Please enter today's date \nDay: ";
	cin >> dayn;
	person.setDayn(dayn);
	cout << "Month: ";
	cin >> monthn;
	person.setMonthn(monthn);
	cout << "Year: ";
	cin >> yearn;
	person.setYearn(yearn);
	cout << endl;
	
	cout << "Individual records of person: \n\n";
	cout << "Name: " << person.getName() << "  Lastname: " << person.getLastName() << endl;
	cout << "Date of Birth (dd/mm/yy):  " << person.getDay() << " / " << person.getMonth() << " / " << person.getYear() << endl;
	cout << "Person's age is: " << person.getAge() << endl;
	cout << "Maximum Heart-Rate: " << person.getMaximumHeartRate() << endl;
	cout << "Target Heart-Rate: " << person.getTargetHeartRate() << " %" << endl;
	cout << "Date:  " << person.getDayn() << " / " << person.getMonthn() << " / " << person.getYearn() << endl;
		
    return 0;
}
