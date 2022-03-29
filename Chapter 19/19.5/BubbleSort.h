#include "stdafx.h"
#include <vector>
using namespace std;

class BubbleSort
{
public:
	BubbleSort(int); // constructor initializes size
	void sort(); // sort vector
	void displayElements() const; // display vector elements
private:
	int size; // size of vector
	vector <int> data; // vector of int
};

