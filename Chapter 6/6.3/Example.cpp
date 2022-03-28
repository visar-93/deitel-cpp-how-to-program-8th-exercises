#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << "sqrt (" << 900.00 << ") = " << setprecision(4) <<sqrt(900.00) << endl;
	cout << "sqrt (" << 9.00 << ") = " << setprecision(4) << sqrt(9.00) << endl;
	cout << "sqrt (" << 3.00 << ") = " << setprecision(4) << sqrt(3.00) << endl;
	cout << "exp (" << 1.00 << ") = " << setprecision(4) << exp(1.00) << endl;
	cout << "exp (" << 2.00 << ") = " << setprecision(4) << exp(2.00) << endl;
	cout << "exp (" << 5.00 << ") = " << setprecision(4) << exp(5.00) << endl;
	cout << "log (" << 2.718282 << ") = " << setprecision(4) << log(2.718282) << endl;
	cout << "log (" << 7.389056 << ") = " << setprecision(4) << log(7.389056) << endl;
	cout << "log10 (" << 10.00 << ") = " << setprecision(4) << log10(10.0) << endl;
	cout << "log10 (" << 100.00 << ") = " << setprecision(4) << log10(100.00) << endl;
	cout << "fabs (" << 5.1 << ") = " << setprecision(4) << fabs(5.1) << endl;
	cout << "fabs (" << -24.6 << ") = " << setprecision(4) << fabs(-24.6) << endl;
	cout << "ceil (" << 9.2 << ") = " << setprecision(4) << ceil(9.2) << endl;
	cout << "ceil (" << -9.8 << ") = " << setprecision(4) << ceil(-9.8) << endl;
	cout << "floor (" << 9.2 << ") = " << setprecision(4) << floor(9.2) << endl;
	cout << "floor (" << -9.8 << ") = " << setprecision(4) << floor(-9.8) << endl;
	cout << "pow (" << 2.0 << "," << 7.0 << ") = "<< setprecision(4) << pow(2, 7) << endl;
	cout << "pow (" << 5.0 << "," << 8.0 << ") = " << setprecision(4) << pow(5, 8) << endl;
	cout << "pow (" << 3.0 << "," << 7.0 << ") = " << setprecision(4) << pow(3, 7) << endl;
	cout << "fmod (" << 2.6 << "," << 1.2 << ") = " << setprecision(4) << fmod(2.6, 1.2) << endl;
	cout << "fmod (" << 4.5 << "," << 2.1 << ") = " << setprecision(4) << fmod(4.5, 2.1) << endl;
	cout << "cos (" << 0.0 << ") = " << setprecision(4) << cos(0.0) << endl;
	cout << "cos (" << 90.0 << ") = " << setprecision(4) << cos(90.0) << endl;
	cout << "sin (" << 0.0 << ") = " << setprecision(4) << sin(0.0) << endl;
	cout << "sin (" << 90.0 << ") = " << setprecision(4) << sin(90.0) << endl;
	cout << "tan (" << 0.0 << ") = " << setprecision(4) << tan(0.0) << endl;
	cout << "tan (" << 90.0 << ") = " << setprecision(4) << tan(90.0) << endl << endl;
	return 0;
}
