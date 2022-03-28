#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, g;

	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter g:";
	cin >> g;

	if (!(a == b) || !(g != 5))
	{
		cout << "(!(a == b) || !(g != 5))\n";
	}
	if (!((a == b) && (g != 5)))
	{
		cout << "(!((a == b) && (g != 5)))\n";
	}
	if ((!(a == b) || !(g != 5)) == (!(a == b) && (g != 5)))
		cout << "Expressios above are equivalent.\n";

    return 0;
}
