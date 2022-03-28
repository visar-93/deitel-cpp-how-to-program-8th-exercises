#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int count;
	int sum=0;

	for (count = 1; count <= 99; count += 2)
	{
		sum += count;
	}

	cout << "The sum is: " << sum << endl;
}
