#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date {
 public:
    Date(int = 1, int = 1, int = 2000);


    void print();

 private:
    int month;
    int day;
    int year;
};

#endif // DATE_H_INCLUDED
