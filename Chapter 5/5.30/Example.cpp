#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ans1, ans2, ans3, ans4, ans5;

	cout << "How Well Do You Understand Global Warming?\n\n";

	cout << "Question 1:\n";
	cout << "Which of the following lightbulb types uses the least energy, and therefore results in fewer greenhouse gas emissions ?\n"
		<< "a) Incandescent\n"
		<< "b) Halogen\n"
		<< "c) Compact Fluorescent\n"
		<< "d) Bulb lamp\n";
	cout << "Your answer is: \n";
	cin >> ans1;

	if (ans1 == "c" || ans1 == "C")
	{
		cout << "Your answer is correct!\n";
	}
	else
	{
		cout << "Wrong answer!\n";
	}

	cout << "\nQuestion 2:\n";
	cout << "How many human deaths per year does the World Health Organization attribute to climate change ?\n"
		<< "a) 150,000\n"
		<< "b) 1,500\n"
		<< "c) 1,500,000\n"
		<< "d) 10,500\n";
	cout << "Your answer is: \n";
	cin >> ans2;

	if (ans2 == "a" || ans2 == "A")
	{
		cout << "Your answer is correct!\n";
	}
	else
	{
		cout << "Wrong answer!\n";
	}

	cout << "\nQuestion 3: \n";
	cout << "How long does it take for carbon dioxide in the atmosphere to disperse ?\n"
		<< "a) 50 Years\n"
		<< "b) 100 Years\n"
		<< "c) 10 Years\n"
		<< "d) 1 Year\n";
	cout << "Your answer is: \n";
	cin >> ans3;

	if (ans3 == "b" || ans3 == "B")
	{
		cout << "Your answer is correct!\n";
	}
	else
	{
		cout << "Wrong answer!\n";
	}


	cout << "\nQuestin 4: \n";
	cout << "Which Arctic animal do many scientists consider most vulnerable to extinction due to global warming ?\n"
		<< "a) Tropical fogs\n"
		<< "b) Polar bears\n"
		<< "c) Narwhals\n"
		<< "d) Toucans\n";
	cout << "Your answer is: \n";
	cin >> ans4;

	if (ans4 == "c" || ans4 == "C")
	{
		cout << "Your answer is correct!\n";
	}
	else
	{
		cout << "Wrong answer!\n";
	}

	cout << "\nQuestin 5: \n";
	cout << "Which of the following industries could be negatively affected by global warming ?\n"
		<< "a) Wine making\n"
		<< "b) Commercial fishing\n"
		<< "c) Insurance\n"
		<< "d) All of above\n";
	cout << "Your answer is: \n";
	cin >> ans5;

	if(ans5 == "d" || ans5 == "D")
	{
		cout << "Your answer is correct!\n";
	}
	else
	{
		cout << "Wrong answer!\n";
	}

	cout << endl << endl;

	if ((ans1 == "c" || ans1 == "C") && (ans2 == "a" || ans2 == "A") &&
		(ans3 == "b" || ans3 == "B") && (ans4 == "c" || ans4 == "C") &&
		(ans5 == "d" || ans5 == "D"))
	{
		cout << "You answered all questions correctly.\nEXCELLENT.\n";
	}
	else if (((ans1 != "c" || ans1 != "C") && (ans2 == "a" || ans2 == "A") &&
		(ans3 == "b" || ans3 == "B") && (ans4 == "c" || ans4 == "C") &&
		(ans5 == "d" || ans5 == "D")) || ((ans2 != "a" || ans2 != "A") && (ans1 == "c" || ans1 == "C") && (ans3 == "b" || ans3 == "B") && (ans4 == "c" || ans4 == "C") &&
		(ans5 == "d" || ans5 == "D")) || ((ans3 != "b" || ans3 != "B") && (ans1 == "c" || ans1 == "C") && (ans2 == "a" || ans2 == "A") && (ans4 == "c" || ans4 == "C") &&
			(ans5 == "d" || ans5 == "D")) || ((ans4 != "c" || ans4 != "C") && (ans1 == "c" || ans1 == "C") && (ans2 == "a" || ans2 == "A") &&
			(ans3 == "b" || ans3 == "B") && (ans5 == "d" || ans5 == "D")) || ((ans5 != "d" || ans5 != "D") && (ans1 == "c" || ans1 == "C") && (ans2 == "a" || ans2 == "A") &&
				(ans3 == "b" || ans3 == "B") && (ans4 == "c" || ans4 == "C")))
	{
		cout << "You answered four questions correctly.\nVery Good.\n";
	}
	else if (((ans1 != "c" || ans1 != "C") && (ans2 != "a" || ans2 != "A")) || ((ans1 != "c" || ans1 != "C") && (ans3 != "b" || ans3 != "B")) || ((ans1 != "c" || ans1 != "C") && (ans4 != "c" || ans4 != "C"))
		|| ((ans1 != "c" || ans1 != "C") && (ans5 != "d" || ans5 != "D")) || ((ans2 != "a" || ans2 != "A") && (ans3 != "b" || ans3 != "B")) || ((ans2 != "a" || ans2 != "A") && (ans4 != "c" || ans4 != "C"))
		|| ((ans2 != "a" || ans2 != "A") && (ans5 != "d" || ans5 != "D")) || ((ans3 != "b" || ans3 != "B") && (ans4 != "c" || ans4 != "C")) || ((ans4 != "c" || ans4 != "C") && (ans5 != "d" || ans5 != "D")))
	{
		cout << "Time to brush up on your knowledge of global warming.\nhttps://www.nationalgeographic.com/environment/global-warming/global-warming-quiz/ \n\n\n";
	}	
	cout << endl;

	return 0;
}
