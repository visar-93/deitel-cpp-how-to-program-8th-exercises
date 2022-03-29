#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int size = 8;
	string animals[size] = {"DOG", "TIGER", "LION", "PANDA", "BEAR",
	"ALIGATOR", "EAGLE","ZEBRA"};

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size-1; ++j)
		{
			string temp="";
			if (animals[j] > animals[j + 1])
			{
				temp = animals[j + 1];
				animals[j + 1] = animals[j];
				animals[j] = temp;
			}
		}
	}

	for (int k = 0; k < size; ++k)
	{
		cout << animals[k] << endl;
	}
	
	return 0;
}
