#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int side1;
	int side2;
	int hypotenuse;

	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
			{
				if ((side1*side1) + (side2*side2) == (hypotenuse*hypotenuse))
				{
					cout << "Valid Triple is: \n\n"
						<< "Side1: " << side1 << " Side2: " << side2 << " Hypotenuse: " << hypotenuse << endl << endl;
				}				
			}
		}
	}	
    return 0;
}
