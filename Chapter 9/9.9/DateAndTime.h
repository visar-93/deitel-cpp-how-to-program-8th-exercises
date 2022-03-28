#ifndef DATEANDTIME_H
#define DATEANDTIME_H

// class Date definition
class DateAndTime
{
public:
	DateAndTime(int=0,int=0,int=0,int = 1, int = 1, int = 2000); // default instructor
	void DisplayMessage();
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getDay();
	int getMonth();
	int getYear();

	int getHour();
	int getMinute();
	int getSecond();

	void nextDay();
	void setTick();

	void printUniversal();
	void printStandard();
private:
	int month;
	int day;
	int year;
	int hour; 
	int minute;
	int second;

};
#endif // !DATE_H
