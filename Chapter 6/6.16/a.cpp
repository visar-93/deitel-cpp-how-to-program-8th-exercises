#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	for (int counter = 1; counter <= 20; ++counter)
	{
		cout << setw(10) << (1 + rand() % 2);

		if (counter % 5 == 0)
			cout << endl;
	}

}
