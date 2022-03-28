#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << endl;

	if (!((x <= 8) && (y > 4)))
	{
		cout << "!((x <= 8) && (y > 4))" << endl;
	}

	if (!(x <= 8) || !(y > 4))
	{
		cout << "!(x <= 8) || !(y > 4)" << endl;
	}

	if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4)))
	{
		cout << "Expressions above are equivalent.\n\n";
	}
    return 0;
}
