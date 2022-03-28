#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << left;

	cout << setw(15) << setprecision(1) << 333.546372
		<< setw(15) << setprecision(2) << 333.546372
		<< setw(15) << setprecision(3) << 333.546372
		<< endl;
}
