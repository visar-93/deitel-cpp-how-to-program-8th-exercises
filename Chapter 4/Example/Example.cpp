#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, Max;

	int i = 1;

	cout << "Input : ";

	cin >> n;

	Max = n;

	while (i < 10)
	{

		cout << "Input : ";

		cin >> n;

		if (n > Max)

			Max = n;

		i++;

	}

	cout << "The greatest one is : " << Max << endl;
    return 0;
}
