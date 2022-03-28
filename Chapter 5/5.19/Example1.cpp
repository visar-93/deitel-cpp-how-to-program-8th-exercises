#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int i = 1;
    double pi=0;


	while (i <= 100000)
	{
		if (i % 2 != 0)
		{
			pi = pi + (4.00 / (2 * i - 1));
		}
		else
		{
			pi = pi - (4.00 / (2 * i - 1));
		}
		i++;
	}

	cout << "The value of pi is: " << pi << endl;

    return 0;
}
