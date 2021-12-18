#include "Rational.h"
#include <iostream>
#include <stdexcept>
#include <math.h>




Rational::Rational(int n,int d){
    setNumerator(n);
    setDenominator(d);
    reduce();


}



void Rational::setNumerator(int n){
    numerator = n;
}

void Rational::setDenominator(int d){
    if ( d == 0 ){
        throw std::invalid_argument("Denominator must be greater or lower than 0");
    }
    denominator = d;
}

unsigned int Rational::gcd(int n , int d)const{
    int absN = abs(n);
    int absD = abs(d);
    if( absN == 0 ){
        return 1;
    }
    if( absN == absD ){
        return absN;
    }
    else if( absN > absD ){
         return gcd( absN - absD , absD );
    }
    else{
        return gcd ( absN , absD - absN );
    }
}

void Rational::reduce(){
    unsigned greatestCommonDivisor = gcd(abs(numerator), abs(denominator));

	numerator /= static_cast<int>(greatestCommonDivisor);
	denominator /= static_cast<int>(greatestCommonDivisor);

	if (denominator < 0)
	{
		denominator = -denominator;
		numerator = -numerator;
	}
}



Rational Rational::addition(Rational &r){
    Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) + (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) + (r.numerator * this->denominator);
    }

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::subtraction(Rational &r){
    Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) - (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) - (r.numerator * this->denominator);
    }
    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;

}

Rational Rational::multiplication(Rational &r){
    Rational result;
    result.numerator = (this->numerator) * (r.numerator);
    result.denominator = (this->denominator) * (r.denominator);

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::division(Rational &r){
    Rational result;
    result.numerator = (this->numerator) * (r.denominator);
    result.denominator = (this->denominator) * (r.numerator);

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

void Rational::display()const{
    std::cout << numerator << "/" << denominator << std::endl;
}

Rational Rational::operator+( const Rational &r )const{
     Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) + (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) + (r.numerator * this->denominator);
    }

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::operator-( const Rational &r)const{
    Rational result;
    if( this->denominator == r.denominator ){
        result.numerator = (this->numerator) - (r.numerator);
        result.denominator = this->denominator;
    }
    else{
        result.denominator = (this->denominator) * (r.denominator);
        result.numerator = (this->numerator * r.denominator) - (r.numerator * this->denominator);
    }

    unsigned greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::operator*( const Rational &r )const{
    Rational result;
    result.numerator = (this->numerator) * (r.numerator);
    result.denominator = (this->denominator) * (r.denominator);

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

Rational Rational::operator/(const Rational &r)const{
    Rational result;
    result.numerator = (this->numerator) * (r.denominator);
    result.denominator = (this->denominator) * (r.numerator);
    if(result.numerator < 0 && result.denominator < 0){
        result.numerator = -result.numerator;
        result.denominator = -result.denominator;
    }

    int greatestCommonDivisor = gcd(result.numerator,result.denominator);

    result.numerator /= greatestCommonDivisor;
    result.denominator /= greatestCommonDivisor;

    return result;
}

std::ostream& operator<<(std::ostream &output,const Rational &r){
    output << r.numerator << "/" << r.denominator ;
    return output;
}

bool Rational::operator>(const Rational &r)const{
    if( this->numerator == r.numerator && this->denominator == r.denominator){
        return false;
    }
    if( this->numerator == r.numerator ){
        if( this-> denominator < r.denominator ){
            if( this-> numerator < 0 ){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            if(this-> numerator < 0){
                return true;
            }
            else{
                return false;
            }

        }
    }
    if( this->denominator == r.denominator ){
        if( this->numerator > r.numerator ){
            return true;
        }
        else{
            return false;
        }
    }
    if( this->numerator != r.numerator && this->denominator != r.denominator ){
        int thisNum = 0;
        int rNum = 0;

        thisNum = this->numerator * r.denominator;
        rNum = r.numerator * this-> denominator;

        if( thisNum > rNum ){
            return true;
        }
        else{
            return false;
        }
    }
}

bool Rational::operator<(const Rational &r)const{
    if( this->numerator == r.numerator && this->denominator == r.denominator){
        return false;
    }
    if( this->numerator == r.numerator ){
        if( this-> denominator < r.denominator ){
            if( this-> numerator < 0 ){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(this-> numerator < 0){
                return false;
            }
            else{
                return true;
            }

        }
    }
    if( this->denominator == r.denominator ){
        if( this->numerator > r.numerator ){
            return false;
        }
        else{
            return true;
        }
    }
    if( this->numerator != r.numerator && this->denominator != r.denominator ){
        int thisNum = 0;
        int rNum = 0;

        thisNum = this->numerator * r.denominator;
        rNum = r.numerator * this-> denominator;

        if( thisNum > rNum ){
            return false;
        }
        else{
            return true;
        }
    }
}

bool Rational::operator==(const Rational &r)const{
    if( this->numerator == r.numerator && this->denominator == r.denominator ){
        return true;
    }
    else{
        return false;
    }
}
