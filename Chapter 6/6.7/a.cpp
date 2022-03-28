#include "stdafx.h"
#include <iostream>
using namespace std;

void g();
void h();

int main()
{
	g();
	h();
}
void g()
{
	cout << "Inside function g" << endl;
	return;
}
void h()
{
	cout << "Inside function h" << endl;
	return;
}
