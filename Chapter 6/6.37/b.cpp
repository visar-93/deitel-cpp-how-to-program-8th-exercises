#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n);

int main()
{
	int i;
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

int fibonacci(int n)
{
	if ((n == 0) || (n == 1))
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2); 
}
