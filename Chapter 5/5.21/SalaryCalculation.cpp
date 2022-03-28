#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "SalaryCalculation.h"
using namespace std;

SalaryCalculation::SalaryCalculation(string name)
{
	setCompanyName(name);

	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	total1;
	total2 = 0;
	total3 = 0;
	total4 = 0;
	totalpayment = 0;
}
void SalaryCalculation::setCompanyName(string name)
{
	companyName = name;
}
string SalaryCalculation::getCompanyName()
{
	return companyName;
}
void SalaryCalculation::displayMessage()
{
	cout << "Welcome to Salary Calculation.\n\n"
		 << "Company Name: " << getCompanyName() << "." << endl << endl;
}
void SalaryCalculation::calculation()
{
	cout << "Salary Calculation.\n\n"
		 << "Please enter the code for employee position: \n"
		 << "Enter the EOF character to end input.\n\n";

	while ((code = cin.get()) != EOF)
	{
		switch (code)
		{
		case '1':
		{
			cout << "Managers Salary is fixed for week and it's 1200.00 $.\n";
			count1++;
			cout << "\nPlease enter the code for employee position: \n";
		}break;

		case '2':
		{
			double salary2;
			int hours;
			int price_r = 12;

			cout << "Hourly workers salary for 40 hours regular work time is 12.00 $ for hour, for each hour overtime is multiplied by 1.5 time.\n";
			cout << "Please enter the number of hours worked this week: ";
			cin >> hours;
			cout << endl;
			if (hours <= 40)
			{
				salary2 = hours * price_r;
				cout << "Hourly workers salary for this week for regular time is: " << salary2 << " $" << endl;
				total2 = total2 + salary2;
				cout << "Total2: " << total2 << endl;
			}
			else if (hours > 40)
			{
				salary2 = (40 * price_r) + ((hours - 40)*price_r*1.5);
				cout << "Hourly workers salary for this week for regular 40 hours time is: " << (40 * price_r) << " $"
					<< "and for " << (hours - 40) << "overtime is " << ((hours - 40)*price_r*1.5) << " $.\n"
					<< "Hourly workers total salary for this week is: " << salary2 << " $.\n\n";
				total2 = total2 + salary2;
				cout << "Total2: " << total2 << endl;
			}
			count2++;
			cout << "\nPlease enter the code for employee position: \n";
		}break;

		case '3':
		{
			double salary3;
			double salesw;
			cout << "Commission workers salary is base of 250 $ plus 5.7 percent of their gross weekly sales.\n";
			cout << "Please enter the weekly gross sales: ";
			cin >> salesw;
			if (salesw != 0)
			{
				salary3 = 250.00 + (salesw * 0.057);
				cout << "Commission workers total salary for this week is: 250 $ base salary and percentage from sales: " << (salesw * 0.057) <<".\n"
					 << "Commission workers total salary is: " << salary3 << " $.\n\n";
				total3 = total3 + salary3;
				cout << "Total3: " << total3 << endl;
			}
			else
			{
				salary3 = 250.00;
				cout << "Commission workers total salary for this week is: 250 $ base salary.\n";
				total3 = total3 + salary3;
				cout << "Total3: " << total3 << endl;
			}
			count3++;	
			cout << "\nPlease enter the code for employee position: \n";
		}break;

		case '4':
		{
			double salary4;
			double it1 = 2.50;
			double it2 = 2.35;
			double it3 = 2.70;
			double it4 = 2.60;
			double salesi;
			int item;
			int quantity;
			
			cout << "Pieceworkers are paid  for each item they produce,\n";
			cout << "Please enter the produced item type: ";
			cin >> item;

			if (item == 1)
			{
				cout << "Please enter the quantity: ";
				cin >> quantity;
				salary4 = quantity * it1;
				total4 = total4 + salary4;
				cout << "For produced " << quantity << " pieces of item 1 with price 2.50 $ total salary is: " << salary4 << " $.\n";
				cout << "Total4: " << total4 << endl;
			}
			else if (item == 2)
			{
				cout << "Please enter the quantity: ";
				cin >> quantity;
				salary4 = quantity * it2;
				total4 = total4 + salary4;
				cout << "For produced " << quantity << " pieces of item 1 with price 2.35 $ total salary is: " << salary4 << " $.\n";
				cout << "Total4: " << total4 << endl;		
			}
			else if (item == 3)
			{
				cout << "Please enter the quantity: ";
				cin >> quantity;
				salary4 = quantity * it3;
				total4 = total4 + salary4;
				cout << "For produced " << quantity << " pieces of item 1 with price 2.70 $ total salary is: " << salary4 << " $.\n";
				cout << "Total4: " << total4 << endl;
			}
			else if (item == 4)
			{
				cout << "Please enter the quantity: ";
				cin >> quantity;
				salary4 = quantity * it4;
				total4 = total4 + salary4;
				cout << "For produced " << quantity << " pieces of item 1 with price 2.60 $ total salary is: " << salary4 << " $.\n";
				cout << "Total4: " << total4 << endl;
			}
			else if (item != 1 && item !=2 && item !=3 && item !=4)
			{
				cout << "Invalid item code!\n\n";	
			}
			count4++;
			cout << "\nPlease enter the code for employee position: \n";
		}break;

		case '\n':// ignore newlines
		case '\t': // tabs
		case ' ': // and space inputs
		break;

		default: // catch all characters
			cout << "Incorrect employee code entered."
				<< "Enter a new Employee code." << endl;
		break;
		}
	}
}
void SalaryCalculation::displayReport()
{
	cout << fixed << setprecision(2);
	cout << "This week report for employee payments: \n\n";
	cout <<"\tPosition:" << "\tNumber of employee:" << "\tTotal paid salaries: " << endl << endl;
	
	while (count1 != 0)
	{
		cout << setw(17) << "\tManagers " << setw(22) << "\t" << count1 << setw(10) << "\t" << (total1 = count1 * 1200.00) << " $.\n\n";
		break;
	}
	while (count2 != 0)
	{
		cout << setw(17) << "\tHourly workers " << setw(16) << "\t" << count2 << setw(10) << "\t" << total2  << " $.\n\n";
		break;
	}
	while (count3 != 0)
	{
		cout << setw(17) << "\tCommission workers " << setw(12) << "\t" << count4 << setw(10) << "\t" << total3 << " $.\n\n";
		break;
	}
	while (count4 != 0)
	{
		cout << setw(17) << "\tPieceworkers " << setw(16) << "\t" << count4 << setw(10) << "\t" << total4 << " $.\n\n";
		break;
	}

	totalpayment = total1 + total2 + total3 + total4;

	cout << "Total salaries for payment: \n"
		 << "Quantity: " << (count1 + count2 + count3 + count4) << endl
		 << "Amount: " << totalpayment << " $.\n\n";
}
