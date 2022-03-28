#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int n);

int main()
{
	int a;
	cin >> a;

	cout << "The result is: " << sum(a) << endl;
}
int sum(int n)
{
	if (n == 0)
		return 0;
	else
    {
		return n + sum(n - 1);
    }
}
