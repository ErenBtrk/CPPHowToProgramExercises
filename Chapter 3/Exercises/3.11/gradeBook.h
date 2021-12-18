#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <iostream>

class GradeBook{
private:
    std::string courseName;
    std::string instructorName;
public:
    GradeBook(const std::string &,const std::string &);
    void setCourseName( const std::string &);
    std::string getCourseName();
    void setInstructorName(const std::string &);
    std::string getInstructorName();
    void displayMessage();


};



#endif // GRADEBOOK_H_INCLUDED
