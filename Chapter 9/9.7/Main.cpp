#include "stdafx.h"
#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t;
	t.setTime(23, 59, 57);

	for (int ticks = 1; ticks < 3000; ++ticks) 
	{
		t.printStandard();
		cout << endl;
		t.setTick();
	}
    return 0;
}
