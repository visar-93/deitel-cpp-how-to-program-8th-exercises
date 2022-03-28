#ifndef TIME_H
#define TIME_H

 // Time abstract data type definition
class Time
{
public:
	Time(int = 0, int = 0, int = 0); // default constructor

	// set functions
	void setTime(int, int, int); // set hour, minute, second
	void setHour(int); // set hour (after validation)
	void setMinute(int); // set minute (after validation)
	void setSecond(int); // set second (after validation)
	void setInvalidTime(int);
	// get functions
	int getHour(); // return hour
	int getMinute(); // return minute
	int getSecond(); // return second
	int getInvalidTime();

	void printUniversal(); // output time in universal-time format
	void printStandard(); // output time in standard-time format
private:
	int hour; // 0-23 (24 hour clock format)
	int minute; // 0-59
	int second; // 0-59
	int invalidTime; // values 1 or 0
};

#endif
