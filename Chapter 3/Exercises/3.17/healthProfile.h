#ifndef HEALTHPROFILE_H_INCLUDED
#define HEALTHPROFILE_H_INCLUDED

class HealthProfile{
private:
    std::string firstName;
    std::string lastName;
    bool gender;
    int day;
    int month;
    int year;
    int height;
    int weight;
public:
    HealthProfile(const std::string &,const std::string &,int,int,int,int,int,int);
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setGender(int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void setHeight(int);
    void setWeight(int);
    std::string getFirstName();
    std::string getLastName();
    bool getGender();
    int getDay();
    int getMonth();
    int getYear();
    int getHeight();
    int getWeight();
    int getAge(int);
    int getMaximumHeartRate(int);
    void getTargetHeartRateRange(int);
    double getBodyMassIndex();
};


#endif // HEALTHPROFILE_H_INCLUDED
