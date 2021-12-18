#include "hugeInteger.h"
#include <string>


HugeInteger::HugeInteger(const std::string &str):digits{},sign('+')
{
	input(str);
}

HugeInteger::HugeInteger(const HugeInteger & h):sign(h.sign)
{
	*this = h;
}

void HugeInteger::input( const std::string &str ){
    size_t strLength = str.length();

    for( size_t i = strLength -1 , j = arraySize -1 ; i != 0 ; i-- , j-- ){
        digits[j]= str.at(i) - '0';
    }
    if( str.at(0) == '+' || str.at(0) == '-' ){
        if( str.at(0) == '-'){
            negative = true;
        }
        else{
            negative = false;
        }
        sign = str.at(0);
    }
    else{
        digits[ arraySize - strLength ] = str.at(0) - '0';
        sign = '+';
    }

}

std::string HugeInteger::output()const{
    size_t i = 0;
    for( ; digits[i] == 0 && i < arraySize - 1 ; i++){
        std::cout << ' ';
    }
    std::cout << sign;
    for( ; i < arraySize ; i++ ){
        std::cout << static_cast <int > (digits[i]) ;
    }
    std::cout << std::endl;
    return std::string();
}

HugeInteger& HugeInteger::add(const HugeInteger &h){
    // TODO: insert return statement here
	if (this->sign == h.sign)
	{
		this->absoluteAdd(h);
		return *this;
	}
	else
	{
		if (isAbsoluteNotLessThan(h))
		{
			for (int i = arraySize - 1; i >= 0; i--)
			{
				if (this->digits[i] >= h.digits[i])
				{
					this->digits[i] -= h.digits[i];
				}
				else
				{
					if (i >= 1)
					{
						this->digits[i - 1] -= 1;
						this->digits[i] += 10;
					}
					this->digits[i] -= h.digits[i];
				}
			}

			return *this;
		}
		else
		{
			HugeInteger temp(h);
			for (int i = arraySize - 1; i >= 0; i--)
			{
				if (temp.digits[i] >= this->digits[i])
				{
					temp.digits[i] -= this->digits[i];
				}
				else
				{
					if (i >= 1)
					{
						temp.digits[i - 1] -= 1;
						temp.digits[i] += 10;
					}
					temp.digits[i] -= this->digits[i];
				}
			}

			*this = temp;
			return *this;
		}
	}
	return *this;
}

HugeInteger& HugeInteger::subtract(const HugeInteger &h){
    // TODO: insert return statement here
	HugeInteger temp(h);
	if (h.sign == '-')
	{
		temp.sign = '+';
	}
	else
	{
		temp.sign = '-';
	}

	return this->add(temp);
}

HugeInteger & HugeInteger::multiply(const HugeInteger & h)
{
	// TODO: insert return statement here
	HugeInteger temp(h);
	temp.sign = '+';

	HugeInteger temp2(*this);
	temp2.sign = '+';

	while (temp.subtract(HugeInteger("1")).isGreaterThan(HugeInteger("1")))
	{
		this->absoluteAdd(temp2);
	}

	if (this->sign != h.sign)
	{
		this->sign = '-';
	}
	else
	{
		this->sign = '+';
	}

	return *this;
}

HugeInteger & HugeInteger::divide(const HugeInteger & h)
{
	if (h.isZero())
	{
		throw("Devided by zero");
	}
	char quotientSign = '+';
	if (this->sign != h.sign)
	{
		quotientSign = '-';
	}

	HugeInteger absoluteThis = *this;
	absoluteThis.sign = '+';
	HugeInteger absoluteB = h;
	absoluteB.sign = '+';

	HugeInteger quotient("0");

	if (absoluteThis.isEqualTo(absoluteB))
	{
		quotient = HugeInteger("1");
		quotient.sign = quotientSign;
		this->operator=(quotient);
		return *this;
	}
	else if (this->isAbsoluteNotLessThan(h))
	{
		while (absoluteThis.subtract(absoluteB).isGreaterThan(HugeInteger("0")))
		{
			quotient.add(HugeInteger("1"));
		}
		quotient.sign = quotientSign;
		this->operator=(quotient);
		return *this;
	}
	else
	{
		this->operator=(HugeInteger("0"));
		return *this;
	}

	return *this;
}

HugeInteger & HugeInteger::modulus(const HugeInteger &h)
{
	// TODO: insert return statement here
	if (h.isZero())
	{
		throw("Modulus zero is undefined");
	}
	HugeInteger result = this->absolute();
	HugeInteger numerator = this->absolute();
	HugeInteger denominator = h.absolute();
	numerator.divide(denominator);

	if (numerator.multiply(denominator).isEqualTo(this->absolute()))
	{
		this->operator=(HugeInteger("0"));
		return *this;
	}
	else
	{
		result.subtract(numerator);
		if (this->sign == h.sign)
		{
			result.sign = '+';
		}
		else
		{
			result.sign = '-';
		}

		this->operator=(result);
	}

	return *this;
}

bool HugeInteger::isAbsoluteNotLessThan(const HugeInteger & h) const
{
	for (size_t i = 0; i < arraySize; i++)
	{
		if (this->digits[i] > h.digits[i])
		{
			return true;
		}
		else if (this->digits[i] < h.digits[i])
		{
			return false;
		}
	}
	return true;
}

HugeInteger & HugeInteger::absoluteAdd(const HugeInteger & h)
{
	// TODO: insert return statement here
	for (int i = arraySize - 1; i >= 0; i--)
	{
		this->digits[i] += h.digits[i];
		if (this->digits[i] >= 10)
		{
			if (i >= 1)
			{
				this->digits[i - 1] += 1;
			}
			this->digits[i] -= 10;
		}
	}

	return *this;
}

const HugeInteger HugeInteger::absolute(void) const
{
	HugeInteger abs(*this);
	abs.sign = '+';

	return abs;
}

bool HugeInteger::isEqualTo(const HugeInteger & h) const
{
	if (this->sign != h.sign)
	{
		return false;
	}
	for (size_t i = 0; i < arraySize; i++)
	{
		if (this->digits[i] != h.digits[i])
		{
			return false;
		}
	}

	return true;
}

bool HugeInteger::isNotEqualTo(const HugeInteger & h) const
{
	return !isEqualTo(h);
}

bool HugeInteger::isGreaterThan(const HugeInteger & h) const
{
	if (this->sign == h.sign)
	{
		if (isAbsoluteNotLessThan(h))
		{
			if (this->sign == '+')
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (this->sign == '-')
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (this->sign == '+')
	{
		return true;
	}

	return false;
}

bool HugeInteger::isLessThan(const HugeInteger & h) const
{
	return (!isGreaterThan(h)) && (!isEqualTo(h));
}

bool HugeInteger::isGreaterThanOrEqualTo(const HugeInteger & h) const
{
	return !isLessThan(h);
}

bool HugeInteger::isLessThanOrEqualTo(const HugeInteger & h) const
{
	return !isGreaterThan(h);
}

bool HugeInteger::isZero(void) const
{
	for (size_t i = 0; i < arraySize; i++)
	{
		if (this->digits[i] != 0)
		{
			return false;
		}
	}
	return true;
}

