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
	int partNumber;
	string toolName;
	int quantity;
	double price;

	fstream outTool("hardware.dat", ios::in | ios::out | ios::binary);

	if (!outTool)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}

	cout << "Enter part number (1 to 100, 0 to end input)\n?";
	HardwareShop data;
	cin >> partNumber;

	while (partNumber > 0 && partNumber <= 100)
	{
		cout << "Enter tool name, quantity and unit price\n?";
		cin >> toolName;
		cin >> quantity;
		cin >> price;

		data.setPartNo(partNumber);
		data.setTool(toolName);
		data.setQuantity(quantity);
		data.setCost(price);

		outTool.seekp((data.getPartNo() - 1) * sizeof(HardwareShop));

		outTool.write(reinterpret_cast<const char *>(&data),
			sizeof(HardwareShop));

		cout << "Enter part number\n?";
		cin >> partNumber;
	}
}

