#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double totalProduct(double[], const int);

int main()
{
	const int rows = 5;
	const int columns = 4;
	const int salesS = 4;
	double salesM[salesS] = {};
	double table[rows][columns] = {};
	int quantity;
	double price;

	cout << setprecision(2) << fixed << endl;
	cout << "Prices for each product are as below: \n"
		<< "Product 1 = 1.25 $\n"
		<< "Product 2 = 1.50 $\n"
		<< "Product 3 = 1.75 $\n"
		<< "Product 4 = 2.00 $\n"
		<< "Product 5 = 2.25 $\n";

	cout << "Please enter how much sold each salesman:\n";

	for (int j = 0; j < columns; j++)
	{
		cout << "\nSalesman " << j + 1 << "   ID: 10" << j + 1 << " :\n\n";
		for (int i = 0; i < rows; ++i)
		{
			cout << "Product " << i + 1 << " quantity: ";
			cin >> quantity;
			price = 1.00 + ((i + 1.00) / 4.00);
			cout << "Total in sales: " << quantity * (1.00 + ((i + 1.00) / 4.00)) << "$.\n";
			table[i][j] = (quantity * price);
		}
	}
	cout << "Monthly report: \n\n";
	cout << "              ";
	for (int salesman = 0; salesman < columns; ++salesman)
		cout << "  Salesman " << salesman + 1;

	cout << setw(10) << "        Total Product" << endl;

	for (int product = 0; product < rows; ++product)
	{
		cout << "Product " << setw(2) << product + 1;

		for (int values = 0; values < columns; ++values)
			cout << setw(12) << table[product][values];

		cout << "    ";
		double productSales = totalProduct(table[product], columns);
		cout << setw(15) << productSales << endl;
	}
	cout << "\nTotalSlm  ";
	double salesSum=0;
	for (int i = 0; i < columns; ++i)
	{
		for (int j = 0; j < rows; ++j)
		{
			salesSum += table[j][i];
		}
		salesM[i] = salesSum;
		salesSum = 0;
	}
	for (int i = 0; i < salesS; ++i)
		cout << setw(12) << salesM[i];


	cout << endl;
	return 0;
}

double totalProduct(double product[], const int number)
{
	double total = 0.00;
	for (int prod = 0; prod < number; ++prod)
		total += product[prod];

	return total;
}
