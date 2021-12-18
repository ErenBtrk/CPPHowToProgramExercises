#include "poly.h"
#include <algorithm>

std::ostream& operator<<( std::ostream &output , const Poly &p){
    int flag = 0;
    for( size_t i = 0 ; i < p.termVector.size() ; i++ ){

         if ( p.termVector[ i ].exp != 0 ){
             output << p.termVector[i].coeff << "x^" << p.termVector[i].exp << " + ";
         }
         else{
            output << p.termVector[i].coeff << " + ";
            flag = 1;
         }
    }

    if( !flag ){
        output << "\b\b";
    }
    return output;
}



Poly::Poly():noOfTerms(0){}

Poly::~Poly(){}

void Poly::polyAppend( int c , int e ){
    term T;
    T.coeff = c;
    T.exp = e;
    termVector.push_back(T);
    noOfTerms++;
}

const Poly Poly::operator=( const Poly &p){

    if( this != &p ){
        this->termVector.clear();
        for( size_t i = 0 ; i < p.termVector.size() ; i++ ){
            term T;
            T.coeff = p.termVector[i].coeff;
            T.exp = p.termVector[i].exp;
            this->termVector.push_back(T);
            this->noOfTerms++;
        }
    }
    return *this;
}

Poly Poly::operator+( const Poly &p )const{
    Poly result;
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
            term T;
            T.coeff = this->termVector[i].coeff;
            T.exp = this->termVector[i].exp;
            result.termVector.push_back(T);
            result.noOfTerms++;
    }
    for( size_t i = 0 ; i < result.termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            if( result.termVector[i].exp == p.termVector[j].exp ){
                result.termVector[i].coeff += p.termVector[j].coeff;
            }
        }
    }
    for( size_t i = 0 ; i < p.termVector.size() ; i++ ){
            int flag = 0;
        for( size_t j = 0 ; j < result.termVector.size() ; j++ ){
            if( p.termVector[i].exp != result.termVector[j].exp ){
                flag ++;
            }
        }
        if( flag == result.termVector.size()  ){
            term T;
            T.coeff = p.termVector[i].coeff;
            T.exp = p.termVector[i].exp;
            result.termVector.push_back(T);
            result.noOfTerms++;
        }
    }

    return result;

}

Poly Poly::operator-( const Poly &p )const{
    Poly result;
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
            term T;
            T.coeff = this->termVector[i].coeff;
            T.exp = this->termVector[i].exp;
            result.termVector.push_back(T);
            result.noOfTerms++;
    }
    for( size_t i = 0 ; i < result.termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            if( result.termVector[i].exp == p.termVector[j].exp ){
                result.termVector[i].coeff -= p.termVector[j].coeff;
            }
        }
    }
    for( size_t i = 0 ; i < p.termVector.size() ; i++ ){
            int flag = 0;
        for( size_t j = 0 ; j < result.termVector.size() ; j++ ){
            if( p.termVector[i].exp != result.termVector[j].exp ){
                flag ++;
            }
        }
        if( flag == result.termVector.size()  ){
            term T;
            T.coeff = -1*p.termVector[i].coeff;
            T.exp = p.termVector[i].exp;
            result.termVector.push_back(T);
            result.noOfTerms++;
        }
    }

    return result;

}

Poly Poly::operator*( const Poly &p)const{
    Poly result;
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            term T;
            T.coeff = this->termVector[i].coeff * p.termVector[j].coeff;
            T.exp = this->termVector[i].exp + p.termVector[j].exp;
            result.termVector.push_back(T);
        }
    }
    return result;
}

Poly Poly::operator/( const Poly &p)const{
    Poly result;
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            term T;
            T.coeff = this->termVector[i].coeff / p.termVector[j].coeff;
            T.exp = this->termVector[i].exp - p.termVector[j].exp;
            result.termVector.push_back(T);
        }
    }
    return result;
}

const Poly Poly::operator+=( const Poly &p){
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            if( this->termVector[i].exp == p.termVector[j].exp ){
               this->termVector[i].coeff += p.termVector[j].coeff;
            }
        }
    }
    for( size_t i = 0 ; i < p.termVector.size() ; i++ ){
            int flag = 0;
        for( size_t j = 0 ; j < this->termVector.size() ; j++ ){
            if( p.termVector[i].exp != this->termVector[j].exp ){
                flag ++;
            }
        }
        if( flag == this->termVector.size()  ){
            term T;
            T.coeff = p.termVector[i].coeff;
            T.exp = p.termVector[i].exp;
            this->termVector.push_back(T);
            this->noOfTerms++;
        }
    }

    return *this;
}

const Poly Poly::operator-=( const Poly &p ){
     for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
        for( size_t j = 0 ; j < p.termVector.size() ; j++ ){
            if( this->termVector[i].exp == p.termVector[j].exp ){
                this->termVector[i].coeff -= p.termVector[j].coeff;
            }
        }
    }
    for( size_t i = 0 ; i < p.termVector.size() ; i++ ){
            int flag = 0;
        for( size_t j = 0 ; j < this->termVector.size() ; j++ ){
            if( p.termVector[i].exp != this->termVector[j].exp ){
                flag ++;
            }
        }
        if( flag == this->termVector.size()  ){
            term T;
            T.coeff = -1*p.termVector[i].coeff;
            T.exp = p.termVector[i].exp;
            this->termVector.push_back(T);
            this->noOfTerms++;
        }
    }

    return *this;
}

const Poly Poly::operator*=( const Poly &p){
    return *this = *this * p ;
}
size_t Poly::getNoOfTerms()const{
    return noOfTerms;
}


void Poly::sortPoly(){
    term Temp;
    Temp.coeff = 0;
    Temp.exp = 0;
    int maximum = 0;
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
        for( size_t j = i+1 ; j < this->termVector.size() ; j++ ){
            if ( this->termVector[i].exp == this->termVector[j].exp ){
                this->termVector[i].coeff += this->termVector[j].coeff;
                termVector.erase(termVector.begin()+j);
            }
        }
    }
    for( size_t i = 0 ; i < this->termVector.size() ; i++ ){
            maximum = i;
        for( size_t j = i+1 ; j < this->termVector.size() ; j++ ){
            if( termVector[j].exp > termVector[maximum].exp ){
                maximum = j;
            }
        }
        Temp = termVector[i];
        termVector[i] = termVector[maximum];
        termVector[maximum] = Temp;
    }
}

