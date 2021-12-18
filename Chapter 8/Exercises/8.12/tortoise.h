#ifndef TORTOISE_H_INCLUDED
#define TORTOISE_H_INCLUDED

class Tortoise{
private:
    int square;
public:
    Tortoise();
    void fastPlod();
    void slip();
    void slowPlod();
    bool didWin()const;
    int getSquare()const;
};


#endif // TORTOISE_H_INCLUDED
