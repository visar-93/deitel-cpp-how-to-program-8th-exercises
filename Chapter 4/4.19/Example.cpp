#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = 0;
	int largest1 = 0;

	while (counter <= 10)
	{
		cout << "Please enter the number: ";
		cin >> number;

		if (number > largest)
		{
			largest1 = largest;
			largest = number;
		}
		else if (number > largest1 && largest != number) 
		{
			largest1 = number;
		}
		
		counter++;
		
	}
	cout << "The largest is: " << largest << endl;
	cout << "The second largest is: " << largest1 << endl;

	return 0;
}
