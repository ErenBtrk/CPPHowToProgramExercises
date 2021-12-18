#pragma once
#include <iostream>

class Point
{
	friend std::ostream& operator<<(std::ostream&, const Point&);
	friend std::istream& operator>>(std::istream&, Point&);
public:
	Point();
	Point(int,int);
	void setX(int);
	void setY(int);

	int getX()const;
	int getY()const;
private:
	int xCoord;
	int yCoord;
	bool inGoodState;
	bool areDigits(const std::string s) const;
};