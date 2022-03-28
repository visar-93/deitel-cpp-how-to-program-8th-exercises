#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int quotient = 5;

	quotient/= ++x;

	cout << " quotient: " << quotient << endl;
	cout << " x: " << x << endl;
}
