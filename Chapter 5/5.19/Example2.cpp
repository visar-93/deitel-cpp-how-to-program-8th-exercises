#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	double pi = 0;
	int i = 1;
	int j = 3;

	for (i = 1; i <= 100000; i+= 4)
	{
		pi = pi + (4.0/i)- (4.0 / j);

		j += 4;	
	}

	cout << pi << endl;

    return 0;
}
