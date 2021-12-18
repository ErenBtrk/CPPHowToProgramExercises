#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date{
private:
    int month;
    int day;
    int year;
public:
    Date(int m,int d,int y);
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void displayDate() const;
};


#endif // DATE_H_INCLUDED
