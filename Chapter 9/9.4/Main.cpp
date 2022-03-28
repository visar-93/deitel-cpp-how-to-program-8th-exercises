#include "stdafx.h"
#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
	Time t;
	cout << "Universal format: \n";
	t.printUniversal();
	cout << "\nStandard format: \n";
	t.printStandard();
	cout << endl;
    return 0;
}

