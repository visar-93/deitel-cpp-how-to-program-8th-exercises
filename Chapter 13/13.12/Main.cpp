#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>
#include <cstdlib>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int determineMonth();

int main()
{
	// set floating-point output formatting
	cout << fixed << setprecision(2);

	// create vector of three base-class pointers
	vector<Employee *> employees(3);

	// initialize vector with various kinds of Employees
	employees[0] = new SalariedEmployee(
		"John", "Smith", "111-11-1111",2,15,1944, 800);
	employees[1] = new CommissionEmployee(
		"Sue", "Jones", "333-33-3333",9,8,1954, 10000, .06);
	employees[2] = new BasePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444",3,2,1965, 5000, .04, 300);

	int month = determineMonth();

	// polymorphically process each element in vector employees
	for (size_t i = 0; i < employees.size(); ++i)
	{
		employees[i]->print();
		cout << endl;

		// downcast pointer
		BasePlusCommissionEmployee *derivedPtr =
			dynamic_cast<BasePlusCommissionEmployee*>
			(employees[i]);

		// determine whether element points to base-salaried
		// commission employee
		if (derivedPtr != 0) // 0 if not a BasePlusCommissionEmployee
		{
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "old base salary: $" << oldBaseSalary << endl;
			derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
			cout << "new base salary with 10% increase is: $"
				<< derivedPtr->getBaseSalary() << endl;
		}

		Date birthday = employees[i]->getBirthDate();

		if (birthday.getMonth() == month)
			cout << "Happy birthday!\nearned $"
			<<  (employees[i]->earnings() + 100.00)  << endl;
		else
			cout << "earned $" << employees[i]->earnings() << "\n\n";
	}

	// release objects pointed to by vector's elements
	for (size_t j = 0; j < employees.size(); ++j)
	{
		// output class name
		cout << "deleting object of "
			<< typeid(*employees[j]).name() << endl;

		delete employees[j];
	}
	return 0;
}
// function to return the current month
int determineMonth()
{
	time_t currentTime;
	currentTime = time(NULL); // initialize with time(0)
	tm tm_local; // define a structure in memory, and sace that space to storage the time
	localtime_s(&tm_local, &currentTime);

	return tm_local.tm_mon + 1; // since tm_local returns months as array element positions[0-11]
	                            // you have to add +1 to show the current time

}
