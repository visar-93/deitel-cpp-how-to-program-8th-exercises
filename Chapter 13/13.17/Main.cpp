#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorkers.h"
#include "HourlyWorkers.h"
using namespace std;

void virtualViaPointer(const Employee * const); // prototype
void virtualViaReference(const Employee &); // prototype

int main()
{
	// set floating-point output formatting
	cout << fixed << setprecision(2);

	// create derived-class objects
	SalariedEmployee salariedEmployee(
		"John", "Smith", "111-11-1111", 800);
	CommissionEmployee commissionEmployee(
		"Sue", "Jones", "333-33-3333", 10000, .06);
	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300);
	PieceWorkers pieceWorkers(
		"Harry", "Newton", "111-11-1111", 500, 1.2);
	HourlyWorkers hourlyWorkers(
		"Josh", "Carry", "222-22-2222", 52, 9);


	cout << "Employees processed individually using static binding:\n\n";

	// output each Employee's information and earnings using static binding
	salariedEmployee.print();
	cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
	commissionEmployee.print();
	cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
	basePlusCommissionEmployee.print();
	cout << "\nearned $" << basePlusCommissionEmployee.earnings()
		<< "\n\n";

	// create vector of three base-class pointers
	vector < Employee *>employees(5);

	// initialize vector with Employees
	employees[0] = &salariedEmployee;
	employees[1] = &commissionEmployee;
	employees[2] = &basePlusCommissionEmployee;
	employees[3] = &pieceWorkers;
	employees[4] = &hourlyWorkers;

	cout << "Employees processed polymorphically via dynamic binding:\n\n";

	// call virtualViaPointer to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class pointers:\n\n";

	for (size_t i = 0; i < employees.size(); ++i)
		virtualViaPointer(employees[i]);

	// call virtualViaReference to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class references:\n\n";
	for (size_t i = 0; i < employees.size(); ++i)
		virtualViaReference(*employees[i]); // note dereferencing ( * )

	return 0;
}
// call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer(const Employee *const baseClassPtr)
{
	baseClassPtr->print();
	cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

// call Employee virtual functions print and earnings off a
// base-classs reference using dynamic binding
void virtualViaReference(const Employee &baseClassRef)
{
	baseClassRef.print();
	cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}

