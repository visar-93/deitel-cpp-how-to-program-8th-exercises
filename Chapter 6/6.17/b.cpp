#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	for (int counter = 1; counter <= 10; ++counter)
	{
		cout << setw(10) << (3 + 2*(rand()) % 10);

		if (counter % 5 == 0)
			cout << endl;
	}
}
