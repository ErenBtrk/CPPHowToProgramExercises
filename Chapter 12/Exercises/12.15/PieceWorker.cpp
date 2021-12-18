#include <iostream>
#include "PieceWorker.h"


PieceWorker::PieceWorker( const std::string &first,const std::string &last, const std::string &ssn,int p,double w)
                                        :Employee(first,last,ssn){
                                            setPiece(p);
                                            setWage(w);
                                        }

void PieceWorker::setPiece(int p){
    piece = p;
}

int PieceWorker::getPiece()const{
    return piece;
}

void PieceWorker::setWage(double w){
    wage = w;
}

double PieceWorker::getWage()const{
    return wage;
}

double PieceWorker::earnings()const{
    return piece*wage;
}

void PieceWorker::print()const{
    std::cout << "Piece worker : " << std:: endl;
    Employee::print();
    std::cout << std::endl;
    std::cout << "Wage : " << getWage() << " Pieces : " << getPiece() ;

}
