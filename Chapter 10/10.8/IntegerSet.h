#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet
{
public:
	IntegerSet()
	{
		emptySet();
	}
	IntegerSet(int, int = -1, int = -1, int = -1, int = -1);
	IntegerSet UnionOfIntegers(IntegerSet other);
	IntegerSet IntersectionSet(IntegerSet other);
	void insertElement(int element);
	void deleteElement(int element);
	bool isEqualTo(const IntegerSet other);
	void emptySet();
	void inputSet();
	void printSet();
private:
	int set[101];
	int validEntry(int x);
};
#endif // !INTEGERSET_H
