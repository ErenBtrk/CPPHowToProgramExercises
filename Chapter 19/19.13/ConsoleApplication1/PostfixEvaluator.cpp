#include "PostfixEvaluator.h"
#include <ctype.h>
#include <iterator>

const std::array<char,PostfixEvaluator::SIZE>PostfixEvaluator::operatorArray = { '+','-','*' ,'/' ,'%' ,'^' };

PostfixEvaluator::PostfixEvaluator(const std::string& str) :postfixStr(str){}

int PostfixEvaluator::evaluate()
{
	for (std::string::iterator it = postfixStr.begin(); it != postfixStr.end(); ++it)
	{	
		if (*it == ' ')
		{
			continue;
		}
		if (isdigit(*it))
		{
			stack.push(*it -48);
		}
		else if (isOperator(*it))
		{
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
	}
	int popped;
	stack.pop(popped);
	return popped;
	
}