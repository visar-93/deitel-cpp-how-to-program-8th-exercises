#include "stdafx.h"
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	double e=1.00;
	int i = 1;
	double k = 1.00;
	int n;

	cout << "Enter the number of desired accuracy of e\n";
	cin >> n;

	while (i <= n)
	{
		k = k / i; // 1!x2 = 2!, 2!x3 = 3!,  so there we put 1! x 3 = 3!, therefore it means that 1 /3
		e = e + k;
		i++;
	}
	cout << e << endl;
}


