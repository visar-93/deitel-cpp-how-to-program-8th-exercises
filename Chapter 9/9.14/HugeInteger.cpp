include "stdafx.h"
#include <iomanip>
#include <iostream>
#include "HugeInteger.h"

HugeInteger::HugeInteger() {
	for (int i = 0; i < HUGE_INT_SIZE; i++)
	{
		num[i] = 0;
	}
	sign = '+';
}

void HugeInteger::input(string raw) {
	int str_len = raw.length();
	int cursor = HUGE_INT_SIZE - 1;

	for (int i = str_len - 1; i >= 0; i--)
	{
		num[cursor] = raw[i] - '0';
		cursor--;
		if (cursor < 0) break; // safe check
	}
}

string HugeInteger::output() {
	string str = "";
	cout << getSign();
	for (int i = 0; i < HUGE_INT_SIZE; i++)
	{
		//if (num[i] == 0)
		//{
		//	str = " ";
		//}
		//else
		str += (to_string(num[i]));
	}
	return str;
}

int* HugeInteger::getNum() { // call the value of first element of array num[HUGE_INT_SIZE]
	return num;
}

HugeInteger HugeInteger::add(HugeInteger other) {
	HugeInteger _new = HugeInteger(); // 3rd object // in the third object the sum of each element of objects will be stored
	int carry = 0;
	// int* ptr = other.getNum(); // other.num
	// int* _newPtr = _new.getNum(); // _new.num

	for (int i = HUGE_INT_SIZE - 1; i >= 0; i--)
	{
		_new.num[i] = num[i] + other.num[i] + carry;
		if (_new.num[i] > 9)
		{
			_new.num[i] -= 10;
			if (i - 1 >= 0)
				carry = 1;
		}
		else
			carry = 0;
		// *(_newPtr + i) = num[i] + *(ptr + i);
	}
	return _new;
}

HugeInteger HugeInteger::substract(HugeInteger other) {

	HugeInteger _res = HugeInteger(); // 3rd object // in the third object the sub of each element of objects will be stored

	int * ptr = other.getNum(); // other.num // will receive the second object and will subtract it from the first one
	int * _resPtr = _res.getNum(); // the 3rd object

	if (isGreaterThan(other) == 1)
	{
		for (int i = HUGE_INT_SIZE - 1; i >= 0; i--)
		{
			if (num[i] < *(ptr + i))
			{
				num[i] += 10;
				if (i - 1 >= 0)
					num[i - 1] -= 1;
			}
			*(_resPtr + i) = num[i] - *(ptr + i);
			//_res.num[i] = num[i] - other.num[i];
		}
		_res.setSign('+');
	}
	else if (isLessThan(other) == 1)
	{
		for (int i = HUGE_INT_SIZE - 1; i >= 0; i--)
		{
			if (*(ptr + i) < num[i])
			{
				*(ptr + i) += 10;
				if (i - 1 >= 0)
					*(ptr + i - 1) -= 1;
			}
			*(_resPtr + i) = *(ptr + i) - num[i];
			//_res.num[i] = num[i] - other.num[i];
		}
		_res.setSign('-');
	}
	else if (isEqualTo(other) == 1)
	{
		for (int i = HUGE_INT_SIZE - 1; i >= 0; i--)
			*(_resPtr + i) = 0;
	}
	return _res;
}

HugeInteger HugeInteger::multiply(HugeInteger other)
{
	HugeInteger _multiply = HugeInteger(); // 3dt object// in the third object the product of two elements of objects will be stored
	/*int prod[HUGE_INT_SIZE] = {}, tot[HUGE_INT_SIZE];
	int num_zero = 0;
	int other_zero = 0; */

	int converted_num = convertToInt(num); // convert array num to integer
	int converted_other = convertToInt(other.num); // convert other array to integer
	unsigned long long int product = converted_num * converted_other;
	int digitCounter = countDigits(product);

	for (int i = (HUGE_INT_SIZE -1); i >= 0; --i)
	{
		if (i >= 0 && i < (HUGE_INT_SIZE - digitCounter))
			_multiply.num[i] = 0;
		else if (i >= (HUGE_INT_SIZE - digitCounter) && i < HUGE_INT_SIZE)
		{
			_multiply.num[i] = product % 10;
			product /= 10;
		}
	}

	return _multiply;

	/*for (int n = 0; n <= HUGE_INT_SIZE - 1; ++n)
	{
		if (num[n] == 0)
			++num_zero;
	}
	for (int m = 0; m < HUGE_INT_SIZE - 1; ++m)
	{
		if (other.num[m] == 0)
			++other_zero;
	}

	for (int i = (HUGE_INT_SIZE - 1), h=1; i >= other_zero; --i)
	{
		for (int j = (HUGE_INT_SIZE - 1), k = 1; j >= num_zero; --j)
		{
			prod[i] = (num[i] *h) * (other.num[j] * k);

			tot[i] += prod[i];
			_multiply.num[i] += tot[i];
			k *= 10;
		}
		h *= 10;
	}*/
}

HugeInteger HugeInteger::divide(HugeInteger other)
{
	return other;
}

HugeInteger HugeInteger::modulus(HugeInteger other)
{
	return other;
}

void HugeInteger::setSign(char s) {

	sign = s;
}

char HugeInteger::getSign()
{
	return sign;
}

int HugeInteger::compare(HugeInteger other)
{
	for (int i = 0; i < HUGE_INT_SIZE; i++)
	{
		if (num[i] < other.num[i])
			return -1;
		else if (num[i] > other.num[i])
			return 1;
	}
	return 0;
}

int HugeInteger::convertToInt(int arrayToConvert[])
{
	int number = 0;
	for (int i = 0; i < HUGE_INT_SIZE; i++)
	{
		number *= 10;
		number += arrayToConvert[i];
	}
	return number;
}

int HugeInteger::countDigits(unsigned long long int integerToCount)
{
	int count = 0;

	while (integerToCount != 0)
	{
		integerToCount /=10;
		++count;
	}
	return count;
}

bool HugeInteger::isGreaterThan(HugeInteger other)
{
	if (compare(other) == 1)
		return 1;
	else
		return 0;
}

bool HugeInteger::isLessThan(HugeInteger other)
{
	if (compare(other) == -1)
		return 1;
	else
		return 0;
}

bool HugeInteger::isEqualTo(HugeInteger other)
{
	if (compare(other) == 0)
		return 1;
	else
		return 0;
}

bool HugeInteger::isNotEqualTo(HugeInteger other)
{
	if (compare(other) != 0)
		return 1;
	else
		return 0;
}
