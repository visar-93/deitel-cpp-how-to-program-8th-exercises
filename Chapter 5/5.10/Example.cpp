#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	int f = 1;

	cout << fixed << setw(4);
	cout << "Factorials of integers from 1 to 5 are:  \n";

	for (i=1; i<=5 ; i++)
	{

		f = f * i;

		cout << "\t" << f;
	}
	
	cout << endl;

    return 0;
}
