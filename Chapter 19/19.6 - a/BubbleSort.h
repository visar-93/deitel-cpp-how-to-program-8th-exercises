// Class Bubble sort member-function definitions.
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
	int maximum(vector<int>, int, int);
	int size; // size of vector
	vector <int> data; // vector of int
};
