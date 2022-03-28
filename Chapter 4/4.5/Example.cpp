#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int sum;
	x = 1;
	sum = 0;

	while (x <= 10)
	{
		sum = sum + x;
		x = x + 1;
	}
	cout << "Sum is: " << sum << endl;
    return 0;
}
