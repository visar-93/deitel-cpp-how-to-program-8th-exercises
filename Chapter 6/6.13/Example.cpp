#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 1;
	char end = 'y';
	double x=0;
	double y;
	cout << fixed << setprecision(2);

	cout << "Rounding numbers\nTo stop press x\n\n";

	for (count; end != 'x'; count++)
	{
		cout << "Enter x: ";
		cin >> x;
		y = floor(x + .5);
		cout << "\tx" << "\ty\n";
		cout << "\t" << x << "\t" << y << endl;
		cout << "For continue press any character or to end press x\n";
		cin >> end;
	}
	cout << endl;
}
