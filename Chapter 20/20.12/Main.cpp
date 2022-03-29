#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include "Stack.h"
using namespace std;

void convertToPostfix(char * const, char * const);
bool isOperator(char);
bool precedence(char, char);

int main()
{
	const int MAXSIZE = 100;
	char c, inFix[MAXSIZE], postFix[MAXSIZE];

	int pos = 0;

	cout << "Enter the infix expression.\n";

	while ((c = static_cast<char>(cin.get())) != '\n')
		if (c != ' ')
			inFix[pos++] = c;

	inFix[pos] = '\0';

	cout << "The original infix expression is:\n" << inFix << '\n';
	convertToPostfix(inFix, postFix);
	cout << "The expression in postfix notation is:\n" << postFix << endl;

	return 0;
}

void convertToPostfix(char * const infix, char* const postfix)
{
	Stack<char> charStack;
	int infixCount, postfixCount;
	bool higher;
	char popValue, leftParen = '(';

	// push a paren onto the stack and add a right paren to infix 
	charStack.push(leftParen);
	charStack.printStack();
	strcat(infix, ")");

	// convert the infix expression to postfix
	for (infixCount = 0, postfixCount = 0; charStack.stackTop(); ++infixCount)
	{
		if (isdigit(infix[infixCount]))
			postfix[postfixCount++] = infix[infixCount];
		else if (infix[infixCount] == '(')
		{
			charStack.push(leftParen);
			charStack.printStack();
		}
		else if (isOperator(infix[infixCount]))
		{
			higher = true; // used to store value of precedence test

			while (higher)
			{
				if (isOperator(charStack.stackTop()))
					if (precedence(charStack.stackTop(), infix[infixCount]))
					{
						postfix[postfixCount++] = charStack.pop(infix[infixCount]);
						charStack.printStack();
					}
					else
						higher = false;
				else
					higher = false;
			}
			charStack.push(infix[infixCount]);
			charStack.printStack();
		}
		else if (infix[infixCount] == ')')
		{
			while((popValue = charStack.pop(infix[infixCount])!= '(') && infix[infixCount++] != '(')
			{
				charStack.printStack();
				postfix[postfixCount++] = popValue;
			}
			charStack.printStack();
		}
	}
	postfix[postfixCount] = '\0';
}

// check if c is an operator
bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
		return true;
	else
		return false;
}

bool precedence(char operator1, char operator2)
{
	if (operator1 == '^')
		return true;
	else if (operator2 == '^')
		return false;
	else if (operator1 == '*' || operator1 == '/')
		return true;
	else if (operator1 == '+' || operator1 == '-')
		if (operator2 == '*' || operator2 == '/')
			return false;
		else
			return true;
	else
		return false;
}
