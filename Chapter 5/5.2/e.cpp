#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;

	for (x = 1; x <=20; ++x)
	{
		if (x % 5 != 0)
			cout << x << " ";
		else
			cout << x << "\n";
	}
}
