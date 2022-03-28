#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class HeartRate
{
public:
	void setName(string);
	void setLastName(string);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDayn(int);
	void setMonthn(int);
	void setYearn(int);
	void setAge();
	string getName();
	string getLastName();
	int getDay();
	int getMonth();
	int getYear();
	int getDayn();
	int getMonthn();
	int getYearn();
	int getAge();
	int getMaximumHeartRate();
	double getTargetHeartRate();


private:
	string name, lastname;
	int day, month, year, age, dayn, monthn, yearn;

};
