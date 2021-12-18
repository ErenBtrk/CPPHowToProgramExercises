#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle{
public:
    Rectangle(double w = 1 , double l = 1);
    void setWidth(double);
    void setLength(double);

    double getWidth()const;
    double getLength()const;

    double perimeter()const;
    double area()const;
private:
    double width;
    double length;

};


#endif // RECTANGLE_H_INCLUDED
