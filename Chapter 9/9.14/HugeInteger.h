#include <string>
using namespace std;

#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

const int HUGE_INT_SIZE = 40;
class HugeInteger {
public:
	HugeInteger();
	void input(string raw);
	string output();
	HugeInteger add(HugeInteger other);
	HugeInteger substract(HugeInteger other);
	HugeInteger multiply(HugeInteger other);
	HugeInteger divide(HugeInteger other);
	HugeInteger modulus(HugeInteger other);
	void setSign(char s);
	char getSign();
	int* getNum();
	int compare(HugeInteger other);
	int convertToInt(int arrayToConvert[]);
	int countDigits(unsigned long long int integerToCount);
	bool isGreaterThan(HugeInteger other);
	bool isLessThan(HugeInteger other);
	bool isEqualTo(HugeInteger other);
	bool isNotEqualTo(HugeInteger other);
private:
	int num[HUGE_INT_SIZE];
	char sign;
};

#endif // !HUGEINTEGER_H
