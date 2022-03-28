#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int Size = 20;

	int a[Size] = { 0 }, subscript = 0, dublicate, value;

	cout << "Enter 20 integers between 10 and 100:\n";

	for (int i = 0; i < Size; ++i)
	{
		dublicate = 0;
		cin >> value;

		for (int j = 0; j < subscript; ++j)
			if (value == a[j])
			{
				dublicate = 1;
				break;
			}
		if (!dublicate)
			a[subscript++] = value;
	}

	cout << "\nThe nondublicate values are: \n";

	for (int i = 0; a[i] != 0; ++i)
		cout << setw(4) << a[i];

	return 0;
}
