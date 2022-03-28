#include"stdafx.h"
#include <iostream>
#include<string>
using namespace std;

class HealthProfile
{
public:

	void setName(string);
	void setLastName(string);
	void setGender(string);
	void setDayB(int);
	void setMonthB(int);
	void setYearB(int);
	void setDayN(int);
	void setMonthN(int);
	void setYearN(int);
	void setAge();
	void setHeight(int);
	void setWeight(int);
	string getName();
	string getLastName();
	string getGender();
	int getDayB();
	int getMonthB();
	int getYearB();
	int getDayN();
	int getMonthN();
	int getYearN();
	int getAge();
	double getHeight();
	int getWeight();
	double getBMI();
	int getMaximumHeartRate();
	double getTargetHeartRate();
	
private:
	string name, lastname, gender;
	int dayB, monthB, yearB, dayN, monthN, yearN, height, weight, age;
	
};
