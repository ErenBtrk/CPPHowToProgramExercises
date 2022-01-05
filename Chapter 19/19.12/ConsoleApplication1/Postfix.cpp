#include "Postfix.h"


const std::array<char,Postfix::SIZE>Postfix::operatorArray = 

Postfix::Postfix(const std::string& str)
{
	setInfixStr(str);
}

void Postfix::setInfixStr(const std::string& str)
{
	infixStr.append(str+")");
}

std::string Postfix::toInfix()
{
	
	stack.push('(');
	size_t i = 0;
	while (!stack.isStackEmpty() && i < infixStr.size())
	{
		if (isdigit(infixStr[i]))
		{
			postfixList.insertAtBack(infixStr[i]);
		}
		else if (infixStr[i] == '(')
		{
			stack.push(infixStr[i]);
		}
		else if (isOperator(infixStr[i]))
		{
			if (isOperator(stack.top()))
			{
				if (isPrecedenceHigherOrEqual(stack.top(), infixStr[i]))
				{
					char popped = '\0';
					stack.pop(popped);
					postfixList.insertAtBack(popped);
				}
			}
			stack.push(infixStr[i]);
		}
		else if (infixStr[i] == ')')
		{
			while (stack.top() != '(')
			{
				char popped = '\0';
				stack.pop(popped);
				postfixList.insertAtBack(popped);
			}
			char popped;
			stack.pop(popped);
		}

		i++;
	}

	std::string postfixStr;
	while (!postfixList.isEmpty())
	{
		char removed;
		postfixList.removeFromFront(removed);
		postfixStr += removed;
	}
	return postfixStr;
}