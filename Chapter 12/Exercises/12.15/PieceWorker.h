#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Employee.h"

class PieceWorker : public Employee{
public:
    PieceWorker(const std::string &, const std::string &,const std::string &,int,double);
    virtual~PieceWorker(){}

    void setPiece(int);
    int getPiece()const;

    void setWage(double);
    double getWage()const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    int piece;
    double wage;
};


#endif // PIECEWORKER_H_INCLUDED
