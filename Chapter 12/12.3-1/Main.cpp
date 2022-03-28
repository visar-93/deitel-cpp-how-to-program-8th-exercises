
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
	// instantiate BasePlysCommissionEmployee object
	CommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, 0.04);
	BasePlusCommissionEmployee salary(employee, 3000);
	// set floating-point output formatting
	cout << fixed << setprecision(2);

	// get commission employee data
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << salary.getBaseSalary();

	salary.setBaseSalary(1000); // set base salary

	cout << "\nUpdated employee information output by print function: \n"
		<< endl;
	salary.print(employee); // display the new employee information

					  // display the employee's earnings
	cout << "\n\nEmployee's earnings: $" << salary.earnings(employee) << endl;

	return 0;
}
