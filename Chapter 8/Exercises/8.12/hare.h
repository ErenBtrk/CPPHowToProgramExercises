#ifndef HARE_H_INCLUDED
#define HARE_H_INCLUDED

class Hare{
private:
    int square;
public:
    Hare();
    void sleep();
    void bigHop();
    void bigSlip();
    void smallHop();
    void smallSlip();
    bool didWin()const;

    int getSquare()const;
};


#endif // HARE_H_INCLUDED
