#include"stdafx.h"
#include<iostream>
#include<string>
#include"Invoice.h"

using namespace std;


void Invoice::setPartNumber(string number)
{
	if (number.length() <= 4)
		PartNumber = number;
	if (number.length() > 4)
	{
		PartNumber = number.substr(0.4);
		cout << "Part Codes are limited to four digits\n";
	}
}
void Invoice::setPartDescription(string number)
{
	PartDescription = number;
}
void Invoice::setPrice(int number)
{
	Price = number;

	if (number <= 0)
	{
		Price = 0;
	}
}
void Invoice::setQuantity(int number)
{
	Quantity = number;
	if (number <= 0)
	{
		Quantity = 0;
	}

}

string Invoice::getPartNumber()
{
	return PartNumber;
}
string Invoice::getPartDescription()
{
	return PartDescription;
}
int Invoice::getPrice()
{
	return Price;
}
int Invoice::getQuantity()
{
	return Quantity;
}
int Invoice::getInvoicedAmount()
{
	return Price * Quantity;
}
