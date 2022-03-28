#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x=1;

	while (x <= 20)
	{
		if (x % 5 != 0)
			cout << x << " ";
		else
			cout << x << "\n";
		++x;
	}
}
