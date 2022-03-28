#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int totalhours = 0;
double totalcharges = 0;
int cnt = 0;

void calculateCharges();

int main()
{
	cout << "Tony's park place\n\n";

	int park = 0;
	int countp;

	cout << setprecision(3);

	for (countp = 0; park != -1; countp++)
	{
		cout << "For enter  press 1 or -1 to end\n";
		cin >> park;
		if (park == -1)
			break;
		if (park == 1) {
			cnt++;
			calculateCharges();
		}
		if (park != 1 && park != -1)
		{
			cout << "Wrong number\n";
		}
	}
	if (park == -1)
	{
		cout << "Total report: \n";
		cout << setw(10) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
		cout << setw(10) << countp << setw(10) << totalhours << setw(10) << totalcharges << endl;
	}
}
void calculateCharges()
{
	int hour;
	double charge;

	cout << "Enter hours: ";
	cin >> hour;
	if (hour <= 3)
	{
		charge = 2.00;
		cout << setw(10) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
		cout << setw(10) << cnt << setw(10) << hour << setw(10) << charge << endl;
	}
	else if (hour > 3 && hour < 24)
	{
		charge = 2.00 + (hour - 3)*0.50;
		cout << setw(10) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
		cout << setw(10) << cnt << setw(10) << hour << setw(10) << charge << endl;
	}
	else if (hour >= 24)
	{
		charge = 10.00;
		cout << setw(10) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
		cout << setw(10) << cnt << setw(10) << hour << setw(10) << charge << endl;
	}
	totalhours = totalhours + hour;
	totalcharges = totalcharges + charge;

}
