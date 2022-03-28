#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	int indx;
	double bmi, hei, weip, weik;
	int unit;
	cout << "Body mass index calculator\n";

	cout << "Please select 1 for choosing weight unit kg or select 2 for choosing weight in pound\n";
	cin >> unit;

	if (unit == 1) {
		cout << "Please enter your weight in kg: ";
		cin >> weik;
		cout << "Please enter your height in m: ";
		cin >> hei;
		bmi = weik / (hei * hei);
		cout << "Your Body mass index is: " << bmi << endl;
	}
	

		if (unit == 2) {
			cout << "Please enter yout weight in pound: ";
			cin >> weip;
			cout << "Please enter your height in m: ";
			cin >> hei;
			bmi = (weip * 703) / (hei * hei);
			cout << "Your Body mass index is: " << bmi << endl;
		}


cout << "Body mass index values are: \n" << "Under weight: less than 18.5\n" << "Normal: between 18.5 and 24.9\n"
<< "Overweight: between 25 and 29.9\n" << "Obese: 30 or greater\n";

if (bmi < 18.5)
cout << "Based on your BMI: " << bmi << " you are considered Underweight\n";
if (bmi >= 18.5 & bmi <= 24.9)
cout << "Based on your BMI: " << bmi << " you are considered Normal \n";
if (bmi >= 25 & bmi <= 29.9)
cout << "Based on your BMI: " << bmi << " you are cosindered Overweight \n";
if (bmi >= 30)
cout << "Based on your BMI: " << bmi << " you are considered Obese \n";

return 0;
	
	
	}
