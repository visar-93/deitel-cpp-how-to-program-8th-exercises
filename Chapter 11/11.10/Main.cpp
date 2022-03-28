#include"stdafx.h"
#include<iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational a(1, 3), b(7, 8), c(1, 1), f, g, h, j, k, l, m;
	Rational d(2, 4), e(4, 8);

	cout << "f = a + b = " << a << " + " << b << " = " << a + b;
	cout << endl;
	cout << "\ng = d + e = " << d << " + " << e << " = " << d + e;
	cout << endl;
	cout << "\nh = d x c = " << d << " x " << c << " = " << d * c;
	cout << endl;
	cout << "\nj = d / e = " << d << " / " << e << " = " << d / e;
	cout << endl;

	if (a > b)
		cout << "\n" << a << " is greater than " << b << "\n";
	if (b < c)
		cout << "\n" << b << " is less than " << c << "\n";
	if (d == e)
		cout << "\n" << d << " is equal to " << e << "\n";
	if (a != d)
		cout << "\n" << a << " is not equal to " << d << "\n";

	cout << "Enter k: ";
	cin >> k;
	cout << "Enter l: ";
	cin >> l;

	cout << "\nm = (k - l) + (a x b) = (" << k << " - " << l << ") + (" << a << " x " << b << ") = "
		<< (k - l) + (a*b);
	cout << endl;

	return 0;
}

