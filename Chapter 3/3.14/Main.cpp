#include"stdafx.h"
#include<iostream>
#include<string>
#include"Employee.h"

using namespace std;

int main()
{
	Employee emp1;
	Employee emp2;

	int salary;
	string nameofemp1, nameofemp2, lastnameofemp1, lastnameofemp2;
	

	cout << "Please enter the employee's name: ";
	getline(cin, nameofemp1);
	emp1.setName(nameofemp1);
	cout << "Please enter the employee's last name: ";
	getline(cin, lastnameofemp1);
	emp1.setLastName(lastnameofemp1);
	cout << "Please enter the employee's salary: ";
	cin >> salary;
	emp1.setSalary(salary);
	cout << endl << endl;
	cin.ignore();
	

	cout << "Please enter the employee's name: ";
	getline(cin, nameofemp2);
	emp2.setName(nameofemp2);
	cout << "Please enter the employee's last name: ";
	getline(cin, lastnameofemp2);
	emp2.setLastName(lastnameofemp2);
	cout << "Please enter the employee's salary: ";
	cin >> salary;
	emp2.setSalary(salary);
	cout << endl;
	cin.ignore();

	cout << "The Employee's data: \n";
	cout << "Employee's name: " << emp1.getName() << endl;
	cout << "Employee's last name: " << emp1.getLastName() << endl;
	cout << "Employee's monthly salary: " << emp1.getSalary() << endl;
	cout << "Employee's yearly salary: " << emp1.getYearlySalary() << endl;
	cout << "Employee's monthly salary after raise: " << emp1.getRaise() << endl;
	cout << "Employee's yearly salary after raise: " << emp1.getYearlySalary() * 1.1 << endl << endl;

	cout << "Employee's name: " << emp2.getName() << endl;
	cout << "Employee's last name: " << emp2.getLastName() << endl;
	cout << "Employee's monthly salary: " << emp2.getSalary() << endl;
	cout << "Employee's yearly salary: " << emp2.getYearlySalary() << endl;
	cout << "Employee's monthly salary after raise: " << emp2.getRaise() << endl;
	cout << "Employee's yearly salary after raise: " << emp2.getYearlySalary() * 1.1 << endl << endl;

    return 0;
}
