#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x,y;
	x = 1;
	y = 0;

	while (x >= 0)
	{
		y = x * 2;
		cout << y << endl;
		x++;
	}

	//It is created an infinite loop
}
