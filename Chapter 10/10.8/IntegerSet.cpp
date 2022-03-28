#include "stdafx.h"
#include <iostream>
#include "IntegerSet.h"
using namespace std;

IntegerSet::IntegerSet(int a, int b, int c, int d, int e)
{
	emptySet();

	if (validEntry(a))
		insertElement(a);

	if (validEntry(b))
		insertElement(b);

	if (validEntry(c))
		insertElement(c);

	if (validEntry(d))
		insertElement(d);

	if (validEntry(e))
		insertElement(e);
};


int IntegerSet::validEntry(int x)
{
	return x >= 0 && x <= 100;
}

void IntegerSet::emptySet()
{
	for (int i = 0; i < 101; ++i)
		set[i] = false;
}

void IntegerSet::inputSet()
{
	int number;

	do
	{
		cout << "Enter an element or -1 to end: ";
		cin >> number;
		if (validEntry(number) == true)
		{
			set[number] = true;
		}
	} while (number != -1);

	cout << "Entry complete\n";
}

IntegerSet IntegerSet::UnionOfIntegers(IntegerSet other)
{
	IntegerSet result;

	for (int i = 0; i < 101; ++i)
	{
		if (set[i] == true || other.set[i] == true)
			result.set[i] = true;
	}
		return result;
}

IntegerSet IntegerSet::IntersectionSet(IntegerSet other)
{
	IntegerSet result;

	for (int i = 0; i < 101; ++i)
	{
		if (set[i] == true && other.set[i] == true)
			result.set[i] = true;
	}
	return result;
}

void IntegerSet::insertElement(int element)
{
	if (validEntry(element))
		set[element] = true;
}

void IntegerSet::deleteElement(int element)
{
	if (validEntry(element))
		set[element] = false;
}

bool IntegerSet::isEqualTo(const IntegerSet other)
{
	for (int i = 0; i < 101; ++i)
		if (set[i] != other.set[i])
			return false;

	return true;
}

void IntegerSet::printSet()
{
	cout << "{ ";
	for (int i = 0; i < 101; ++i)
	{
		if (set[i] == true)
		{
			cout << i << " ";
		}
	}
	cout << "}";
}
