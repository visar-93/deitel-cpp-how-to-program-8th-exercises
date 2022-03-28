#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int count;

	for (count = 1; count <= 10; ++count)
	{
		if (count < 5 || count > 5)
			cout << count;
		else
		{
			cout << " ";
		}		
	}
	cout << endl;
	cout << "\nUsed continue to skip printing 5 \n" << endl;

	return 0;
}
