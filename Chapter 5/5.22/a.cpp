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

	if (!(x < 5) && !(y >= 7))
	{
		cout << "!(x<5) && !(y>=7)" << endl;
	}

	if (!((x < 5) || (y >= 7)))
	{
		cout << "!((x<5) || (y>=7))" << endl;
	}

	if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7))))
	{
		cout << "Expressions above are equivalent.\n\n";
	}
    return 0;
}
