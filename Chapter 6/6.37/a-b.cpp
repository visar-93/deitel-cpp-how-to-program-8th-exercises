#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double fibonacci(double n);

int main()
{
	double i;
	for (i = 0; ; i++)
	{
		cout << "Fibonacci (" << i << ") = " << fibonacci(i) << endl;

		if (fibonacci(i) < 0)
		{
			cout << "The largest fibonacci that could be prited is\n"
				<< "Fibonacci (" << i - 1 << ") = " << fibonacci((i - 1)) << endl;
			break;
		}	
	}
}

double fibonacci(double n)
{
	if ((n == 0) || (n == 1))
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2); 
}
