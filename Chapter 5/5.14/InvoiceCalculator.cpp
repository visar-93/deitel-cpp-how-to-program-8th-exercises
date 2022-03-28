#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "InvoiceCalculator.h"

using namespace std;

InvoiceCalculator::InvoiceCalculator(string name)
{
	setInvoiceName(name);

	count5 = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
}
void InvoiceCalculator::setInvoiceName(string name)
{
	InvoiceName = name;
}
string InvoiceCalculator::getInvoiceName()
{
	return InvoiceName;
}
void InvoiceCalculator::displayMessage()
{
	cout << "Invoice for purchased materials: \nCompany: " << getInvoiceName() << "!\n" << endl;
}
void InvoiceCalculator::inputProducts()
{
	
	cout << "Please enter purchased products: \n"
	     << "Enter the EOF character to end input." << endl;

	while ((product = cin.get()) != EOF)
	{
		switch (product)
		{
		case '1':
			++count1;
			break;

		case '2':
			++count2;
			break;

		case '3':
			++count3;
			break;

		case '4':
			++count4;
			break;

		case '5':
			++count5;
			break;

		case '\n':// ignore newlines
		case '\t': // tabs
		case ' ': // and space inputs
			break;

		default: // catch all characters
			cout << "Incorrect Product entered."
				<< "Enter a new Product" << endl;
			break;
		}
	}
}
void InvoiceCalculator::displayInvoice()
{
	cout << fixed << setprecision(2);
	
	cout << setw(10) << "Product" << setw(10) << "Quantity" << setw(15) << "Unit Price" << setw(20) << "Total Unit Price" << endl << endl;

	while (count1 != 0)
	{
		cout << setw(10) << "Product 1 " << setw(10) << count1 << setw(15) << price1 << "$" << setw(20) << (tot1 = price1 * count1) << "$" << endl;
		break;
	}
	while (count2 != 0)
	{
		cout << setw(10) << "Product 2 " << setw(10) << count2 << setw(15) << price2 << "$" << setw(20) << (tot2 = price2 * count2) << "$" << endl;
		break;
	}
	while (count3 != 0)
	{
		cout << setw(10) << "Product 3 " << setw(10) << count3 << setw(15) << price3 << "$" << setw(20) << (tot3 = price3 * count3) << "$" << endl;
		break;
	}
	while (count4 != 0)
	{
		cout << setw(10) << "Product 4 " << setw(10) << count4 << setw(15) << price4 << "$" << setw(20) << (tot4 = price4 * count4) << "$" << endl;
		break;
	}
	while (count5 != 0)
	{
		cout << setw(10) << "Product 5 " << setw(10) << count5 << setw(15) << price5 << "$" << setw(20) << (tot5 = price5 * count5) << "$" << endl;
		break;
	}

	cout << endl << endl;

	cout << setw(10) << "Total of Invoice" << setw(40) << (tot = tot1 + tot2 + tot3 + tot4 + tot5) << "$\n\n";
}
