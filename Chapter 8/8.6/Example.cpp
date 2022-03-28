#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *zPtr; // zPtr will reference array z
	void *sPtr = 0;
	int number;
	int z[5] = { 1,2,3,4,5 };

	// a)
	//++zPtr;  - zPtr first should be initialized
	zPtr = z;
	++zPtr;
	// b)
	number = *zPtr;
	//c)
	number = zPtr[2];
	// d)
	for (int i = 0; i < 5; ++i)
	{
		cout << zPtr[i] << endl;
	}
	//e)
	number = *static_cast<int*>(sPtr);
	return 0;
	//f)
	++z[0];

}
