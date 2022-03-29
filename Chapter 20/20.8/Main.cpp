#include "stdafx.h"
#include <iostream>
#include <string>
#include "List.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

template<typename T>
int sum(List<T> &first)
{
	T value; 
	List<T> temp(first);
	int sum = 0;

	while (!temp.isEmpty())
	{
		temp.removeFromBack(value);
		sum += value;
	}
	
	return sum;
}

template <typename T>
double avg(List<T> &first)
{
	List<T> temp(first);
	T value;
	int add = sum(temp);
	int count=0;
	double average = 0.00;
	cout << fixed << setprecision(2);

	while (!temp.isEmpty())
	{
		temp.removeFromBack(value);
		++count;
	}
	average = (double)add / (double)count;
	return average;
}

int main()
{
	List<int> list1;
	int summary;
	double average;
	
	srand(time(0));

	for (int i = 0; i < 25; ++i)
	{
		list1.insertAtBack(1 + rand() % 99);
	}
	list1.print();
	average = avg(list1);
	summary = sum(list1);
	cout << "The sum of the list elements is: " << summary << endl;
	cout << "The average of list elements is: " << average << endl;

	return 0;
}

