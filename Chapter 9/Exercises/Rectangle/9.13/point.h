#ifndef POINT_H
#define POINT_H



class Point
{
public:
	Point(double = 0.0 , double = 0.0);
	void setX(double);
	void setY(double);
	double getX();
	double getY();
private:
    double x;
    double y;
};

#endif // POINT_H
