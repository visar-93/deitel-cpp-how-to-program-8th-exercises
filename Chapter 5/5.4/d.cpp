#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int counter;
	counter = 2;

	do
	{
		cout << counter << endl;
		counter += 2;
	} while (counter <= 100);
}
