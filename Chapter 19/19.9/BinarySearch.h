// Class that contains a vector of random integers and a function
// that uses binary search find an integer
#include "stdafx.h"
#include <vector>
using namespace std;

class BinarySearch
{
public:
	BinarySearch(int); // constructor initializes vector
	int binarySearch(int, int, int) const; // perform a binary search on vector
	void displayElements() const; // display vector elements
private:
	int size; // vector size
	vector <int> data; // vector of ints
	void displaySubElements(int, int) const; // display range of values
};
