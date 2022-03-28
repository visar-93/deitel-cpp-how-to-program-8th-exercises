#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class InvoiceCalculator
{
public:

	InvoiceCalculator(string);
	void setInvoiceName(string);
	string getInvoiceName();
	void displayMessage();
	void inputProducts();
	void displayInvoice();

private:

	int product;
	string InvoiceName;
	int count1;
	int count2;
	int count3;
	int count4;
	int count5;

	double price1 = 2.98;
	double price2 = 4.50;
	double price3 = 9.98;
	double price4 = 4.49;
	double price5 = 6.87;

	double tot;
	double tot1=0;
	double tot2=0;
	double tot3=0;
	double tot4=0;
	double tot5=0;
};
