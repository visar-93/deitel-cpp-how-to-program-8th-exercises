#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	int prod = 1;

	for (x = 1; x <= 15; x += 2)

		prod = prod * x;

	cout << "The product is: " << prod << endl;

	return 0;
}
