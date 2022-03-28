//Rational.h
#include"stdafx.h"
#include<iostream>
using namespace std;

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
	friend istream &operator>>(istream &, Rational &);
	friend ostream &operator<<(ostream &, const Rational &);

public:
	Rational(int=1, int=1);
	
	Rational operator+(const Rational &) const;
	Rational operator-(const Rational &) const;
	Rational operator*(const Rational &) const;
	Rational operator/(const Rational &) const;
	int operator>(const Rational &) const;
	int operator<(const Rational &) const;
	bool operator==(const Rational &) const;
	bool operator!=(const Rational &) const;

private:
	int numerator;
	int denominator;
	void reduction();
};

#endif // !RATIONAL_H
