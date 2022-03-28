#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest=0;
	
	while (counter <= 10)
	{
		cout << "Please enter the number: ";
		cin >> number;
		
	if (number > largest)
	
		largest = number;
		counter++;
	}
	cout << "The largest is: " << largest << endl;

    return 0;
}
