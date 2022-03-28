#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class SalaryCalculation
{
public:

	SalaryCalculation(string);
	void setCompanyName(string);
	string getCompanyName();
	void displayMessage();
	void calculation();
	void displayReport();

private:
	
	string companyName;
	int code;
	int count1;
	int count2;
	int count3;
	int count4;
	double total1;
	double total2;
	double total3;
	double total4;
	double totalpayment;
};
