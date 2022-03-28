#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "InvoiceCalculator.h"

using namespace std;

int main()
{
	InvoiceCalculator myInvoiceCalculator("INKOS Finance Solutions");

	myInvoiceCalculator.displayMessage();
	myInvoiceCalculator.inputProducts();
	myInvoiceCalculator.displayInvoice();

	cout << endl;

    return 0;
}
