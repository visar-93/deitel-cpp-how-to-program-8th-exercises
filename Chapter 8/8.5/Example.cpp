#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


void exchange(double *, double *);// b)

int evaluate(int, int(*)(int));// d)

int main()
{
	char vowel[6] = { 'A','E','I','O','U','\0' };//e)
	const char *vowelPtr = "AEIOU";

	return 0;
}

void exchange(double *x, double *y)// a)
{}
int evaluate(int x, int(*poly)(int)) // c)
{}
