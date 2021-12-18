#ifndef COORD_H_INCLUDED
#define COORD_H_INCLUDED

class Coord{
public:
    explicit Coord(double x = 0 , double y = 0){
        setX(x);
        setY(y);
    }
    void setX(double x){ this->x = x; }
    void setY(double y){ this->y = y; }

    double getX()const{ return x; }
    double getY()const{ return y; }
private:
    double x;
    double y;

};


#endif // COORD_H_INCLUDED
