#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x = 2.5;
	double y;
	y = pow(2.5, 3);

	cout << fixed << setprecision(2);

	cout << setw(10) << y << endl;
}
