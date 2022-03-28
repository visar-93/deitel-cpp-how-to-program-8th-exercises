#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int count;

	for (count = 1; count <= 10; ++count)
	{
		if (count < 5)
		{
			cout << count << " ";
		}
		else if (count == 5)
		{
				cout << "\nBroke out of loop at count = " << count << endl;
		}		
	}

	cout << endl;
	
    return 0;
}
