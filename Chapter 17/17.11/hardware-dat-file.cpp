#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include "HardwareShop.h"
using namespace std;

int main()
{
	ofstream outTool("hardware.dat", ios::out | ios::binary);

	if (!outTool)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}

	HardwareShop data;

	for (int i = 0; i < 100; ++i)
		outTool.write(reinterpret_cast<const char*>(&data),
			sizeof(HardwareShop));

	return 0;
}
