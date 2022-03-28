#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int i = 1;
	int power = 1;

	cout << "Enter x: ";
	cin >> x;
	cout << endl;
	cout << "Enter y: ";
	cin >> y;
	cout << endl;
		
	power *= x;
	++i;
	cout << "i: " << i << endl;

	if (i <= y)
		cout << "i is less than equal to y\n";
	cout << "Power: " << power << endl;

}
