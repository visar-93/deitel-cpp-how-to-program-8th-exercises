#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int product = 5;

	product*= x++;

	cout << " product: " << product << endl;
	cout << " x: " << x << endl;
}
