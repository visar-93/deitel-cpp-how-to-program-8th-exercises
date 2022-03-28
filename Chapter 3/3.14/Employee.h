#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
	void setName(string);
	void setLastName(string);
	void setSalary(int);
	string getName();
	string getLastName();
	int getSalary();
	int getRaise();
	int getYearlySalary();
private:

	string name, lastName;
	int salary;
};
