#include "stdafx.h"
#include<iostream>
#include<string>
#include"Invoice.h"

using namespace std;


int main()
{
	Invoice invoice1;
	string numberofPart, descriptionofPart;
	int priceof, quantityof;

	cout << "Please Enter the necessary datas for invoice: \n"
		<< "Code: ";
	getline(cin, numberofPart);
	invoice1.setPartNumber(numberofPart);
	cout << "Product Description: \n";
	getline(cin, descriptionofPart);
	invoice1.setPartDescription(descriptionofPart);
	cout << "Purchased Quantity: \n";
	cin >> quantityof;
	invoice1.setQuantity(quantityof);
	cout << "Price: \n";
	cin >> priceof;
	invoice1.setPrice(priceof);

	cout << "The invoice is: \n"
		<< "Seller: ADX Hardware \nUnic Number: 8800191990 \nAdress: Brooklyn,Keeny's Kitchen, 54 Street no 84\n\n"
		<< "\tPart Code: \tPart Description: \tQuantity \tPrice \n"
		<< "\t" << invoice1.getPartNumber() << "\t" << invoice1.getPartDescription() << "\t" << invoice1.getQuantity() << "\t" << invoice1.getPrice() << endl
		<< "\tTotal Invoiced Amount is: " << invoice1.getInvoicedAmount();

	return 0;
}
