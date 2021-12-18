#ifndef HEARTRATES_H_INCLUDED
#define HEARTRATES_H_INCLUDED

class HeartRates{
private:
    std::string firstName;
    std::string lastName;
    int day;
    int month;
    int year;
public:
    HeartRates(const std::string &,const std::string &,int,int,int);
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    int getAge(int) const;
    int getMaximumHeartRate(int) const;
    void getTargetHeartRate(int) const;


};

#endif // HEARTRATES_H_INCLUDED
