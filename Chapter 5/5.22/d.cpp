#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i, j;

	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	cout << endl;

	if (!((i > 4) || (j <= 6)))
	{
		cout << "!((i > 4) || (j <= 6))" << endl;
	}

	if (!(i > 4) && !(j <= 6))
	{
		cout << "!(i > 4) && !(j <= 6)" << endl;
	}

	if ((!((i > 4) || (j <= 6))) == (!(i > 4) && !(j <= 6)))
	{
		cout << "Expressions above are equivalent.\n\n";
	}
    return 0;
}
