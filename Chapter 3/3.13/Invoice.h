#include"stdafx.h"
#include<iostream>
#include<string>

using namespace std;

class Invoice
{
public:

	void setPartNumber(string);
	void setPartDescription(string);
	voZvoid setPrice(int);
	string getPartNumber();
	string getPartDescription();
	int getQuantity();
	int getPrice();
	int getInvoicedAmount();
private:
	int Price, Quantity, Total;
	string PartNumber, PartDescription;
};
