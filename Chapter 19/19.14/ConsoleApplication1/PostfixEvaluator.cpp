#include "PostfixEvaluator.h"
#include <ctype.h>
#include <iterator>


const std::array<char,PostfixEvaluator::SIZE>PostfixEvaluator::operatorArray = { '+','-','*' ,'/' ,'%' ,'^' };

PostfixEvaluator::PostfixEvaluator(const std::string& str) :postfixStr(str){}

void PostfixEvaluator::evaluate()
{
	std::string str;
	for (std::string::iterator it = postfixStr.begin(); it != postfixStr.end(); ++it)
	{	
		bool digitStreak = true;
	
		if (isdigit(*it))
		{
			digitStreak = true;
			str += *it;
		}
		else if (isOperator(*it))
		{
			digitStreak = false;
			int x;
			int y;
			stack.pop(x);
			stack.pop(y);
			int calculate;
			switch (*it)
			{
			case '+':
				calculate = y + x;
				break;
			case '-':
				calculate = y - x;
				break;
			case '/':
				calculate = y / x;
				break;
			case '*':
				calculate = y * x;
				break;
			case '%':
				calculate = y % x;
				break;
			case '^':
				calculate = y ^ x;
				break;
			}
			stack.push(calculate);
		}
		else if (*it == ' ')
		{
			digitStreak = false;
		}
		
		if (!digitStreak && !str.empty())
		{
			stack.push(stoi(str));
			str.clear();
		}
	}
	stack.printStack();
	
	
}