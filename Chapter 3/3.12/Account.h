#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Account
{
public:

	Account(int); // initial balance
	void credit(int); // add amount to balance
	void debit(int); // substract amount from balance
	int getBalance(); // read balance
	
private:
	int balance;
};
