#include "stdafx.h"
#include <iostream>
#include "IntegerSet.h"
using namespace std;


int main()
{
	IntegerSet a, b, c, d, e(8, 5, 7);
	
	cout << "Enter set A: \n";
	a.inputSet();
	cout << "Set A: \n";
	a.printSet();
	cout << "\nEnter set B: \n";
	b.inputSet();
	cout << "Set B: \n";
	b.printSet();
	c=a.UnionOfIntegers(b);
	cout << "\nUnion of set A and B\n";
	c.printSet();
	d = a.IntersectionSet(b);
	cout << "\nIntgersection of set A and B\n";
	d.printSet();
	cout << "\nInsert element 77 to set A\n";
	a.insertElement(77);
	cout << "\nSet A after 77 is inserted: \n";
	a.printSet();
	cout << "\nDelete element 77 to set A\n";
	a.deleteElement(77);
	cout << "\nSet A after 77 is deleted: \n";
	a.printSet();
	if (a.isEqualTo(b) == false)
		cout << "\nSet A and Set B are not equal to each other!\n";
	else
		cout << "\nSet A and Set B are equal to each other!\n";

	cout << "\nSet e is:\n";
	e.printSet();

	cout << endl;
    return 0;
}

