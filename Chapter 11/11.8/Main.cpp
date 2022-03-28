// Complex class test program.
#include "stdafx.h"
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex x;
	Complex y(4.3, 8.2);
	Complex z(3.3, 1.1);

	cout << "Enter complex number x: ";
	cin >> x;
	cout << "Complex number x is: " << x << endl;
	cout << "Complex number y is: " << y << endl;
	cout << "Complex number z is: " << z << endl;

	x = y + z;
	cout << "\n\nx = y + z:\n" << y << " + " << z 
		<< " = " << x << endl;
 
	x = y - z;
	cout << "\n\nx = y - z:\n" << y << " - " << z
		<< " = " << x << endl;
	
	cout << endl;
} // end main


