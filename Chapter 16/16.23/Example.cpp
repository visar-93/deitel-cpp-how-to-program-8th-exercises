#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	try
	{
		int a = 7;
		double b = 9.9;

		throw a < b ? a : b;
	}
	catch (int x)
	{
		cerr << "The int value " << x << " was thrown\n";
	}
	catch (double y)
	{
		cerr << "The double value " << y << " was thrown\n";
	}

    return 0;
}
