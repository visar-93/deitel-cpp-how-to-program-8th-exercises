#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool even(int number);

bool even(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int number;
	while (true)
	{
		std::cout << "Enter a number" << std::endl;
		std::cin >> number;
		if (even(number))
		{
			std::cout << number << " is even" << even(number) << std::endl;
		}
		else
		{
			std::cout << number << " is odd" << std::endl;
		}
	}
}
