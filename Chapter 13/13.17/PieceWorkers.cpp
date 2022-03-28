// PieceWorkers class member-function definitions
#include "stdafx.h"
#include <iostream>
#include "PieceWorkers.h"
using namespace std;

// constructor
PieceWorkers::PieceWorkers(const string &first,
	const string &last, const string &ssn, double quantity, double price)
	:Employee(first, last, ssn)
{
	setQuantity(quantity);
	setWage(price);
}

// set produced quantity
void PieceWorkers::setQuantity(double qty)
{
	if (qty >= 0.0)
		quantity = qty;
	else
		throw invalid_argument("Produced quantity must be > 0.0");
}

// return produced quantity
double PieceWorkers::getQuantity() const
{
	return quantity;
}

// set price per product
void PieceWorkers::setWage(double price)
{
	if (price > 0.0)
		wage = price;
	else
		throw invalid_argument("Price must be > 0.0");
}

// get price per product
double PieceWorkers::getWage() const
{
	return wage;
}

// calculate earnings; override pure virtual function earnings in Employee
double PieceWorkers::earnings() const
{
	return getWage() * getQuantity();
}

// print CommissinEmployee's information
void PieceWorkers::print() const
{
	cout << "piece workers: ";
	Employee::print();
	cout << "\ntotal produced: " << getQuantity()
		<< "; unit price: " << getWage();
}

