#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class BaseException
{
public:
	BaseException(char *mPtr) : message(mPtr) {}
	void print() const { cout << message << '\n';}
private:
	char *message;
};

class DerivedException : public BaseException
{
public:
	DerivedException(char *mPtr) : BaseException(mPtr) {}
};

class DerivedException2 : public DerivedException
{
	DerivedException2(char *mPtr) : DerivedException(mPtr) {}
};

int main()

{
	srand(time(0));

	try
	{
		throw (rand() % 2 ? DerivedException("DerivedException") :
			DerivedException2("DerivedException2"));
	}
	catch (BaseException &b)
	{
		b.print();
	}

    return 0;
}

