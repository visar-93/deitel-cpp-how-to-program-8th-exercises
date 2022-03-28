#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

class SavingAccount
{
public:
	SavingAccount(double saving);
	void calculateMonthlyInterest();
	static void modifyInterestRate(double i);
	void printBalance();
private:
	double savingBalance;
	static double annualInterestRate;
};
#endif // !SAVINGACCOUNT_H
