#include "stdafx.h"
#include <iostream>
#include <string>
#include "Crypto.h"
using namespace std;

string Crypto::encrypt(int digit)
{
	int d1, d2, d3, d4;
	string d5 = "";

	if (digit > 999 && digit < 10000)
	{
		d1 = digit / 1000;
		d2 = digit % 1000;
		d2 = d2 / 100;
		d3 = digit % 100;
		d3 = d3 / 10;
		d4 = digit % 10;

		d1 = (d1 + 7) % 10;
		d2 = (d2 + 7) % 10;
		d3 = (d3 + 7) % 10;
		d4 = (d4 + 7) % 10;

		d5 = to_string(d3) + to_string(d4) + to_string(d1) + to_string(d2);
	}

	return d5;
}

string Crypto::decrypt(int digit)
{
	string d5 = "";
	int d1, d2, d3, d4;

	if (digit > 999 && digit < 10000)
	{
		d1 = digit / 1000;
		d2 = digit % 1000;
		d2 = d2 / 100;
		d3 = digit % 100;
		d3 = d3 / 10;
		d4 = digit % 10;

		d1 = (d1 + 10 - 7) % 10;
		d2 = (d2 + 10 - 7) % 10;
		d3 = (d3 + 10 - 7) % 10;
		d4 = (d4 + 10 - 7) % 10;

		d5 = to_string(d3) + to_string(d4) + to_string(d1) + to_string(d2);

	}
	return d5;
}
