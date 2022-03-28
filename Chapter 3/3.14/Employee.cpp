#include"stdafx.h"
#include<iostream>
#include<string>
#include"Employee.h"

using namespace std;

void Employee::setName(string number)
{
	name = number;
}

void Employee::setLastName(string number)
{
	lastName = number;
}

void Employee::setSalary(int number)
{
	salary = number;

	if (number <= 0)
	{
		salary = 0;

		cout << "Your monthly salary is 0.00 Euro\n";
	}
}

string Employee::getName()
{
	return name;
}

string Employee::getLastName()
{
	return lastName;
}

int Employee::getSalary()
{
	return salary;
}

int Employee::getRaise()
{
	return salary * 1.1;
}
int Employee::getYearlySalary()
{
	return salary * 12;
}
