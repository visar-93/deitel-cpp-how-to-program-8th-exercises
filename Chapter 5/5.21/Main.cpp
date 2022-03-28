#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "SalaryCalculation.h"
using namespace std;

int main()
{ 
	SalaryCalculation mySalaryCalculation("Athlete Export Company");

	mySalaryCalculation.displayMessage();
	mySalaryCalculation.calculation();
	mySalaryCalculation.displayReport();
	cout << endl << endl;

    return 0;
}

