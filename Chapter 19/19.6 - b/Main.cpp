#include "stdafx.h"
#include <iostream>
#include "BubbleSort.h"
using namespace std;

int main()
{
	// create object to perform bubble sort
	BubbleSort sortVector(10);
	
	cout << "Unsorted vector:" << endl;
	sortVector.displayElements(); // print unsorted vector
	cout << "\n\n";

	sortVector.sort(); // sort vector

	cout << "Sorted vector:" << endl;
	sortVector.displayElements(); // print sorted vector
	cout << "\n\n";

    return 0;
}
