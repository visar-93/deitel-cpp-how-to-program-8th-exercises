#ifndef DATE_H
#define DATE_H

// class Date definition
class Date
{
public:
	Date(int = 1, int = 1, int = 2000); // default instructor
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void nextDay();
	
	void print();
private:
	int month;
	int day;
	int year;
};
#endif // !DATE_H
