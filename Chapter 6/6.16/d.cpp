#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	for (int counter = 1; counter <= 100; ++counter)
	{
		cout << setw(10) << (1000 + rand() % 113);

		if (counter % 5 == 0)
			cout << endl;
	}

}
