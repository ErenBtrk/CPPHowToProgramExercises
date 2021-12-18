#pragma once

#include <iostream>
#include <string>

class GradeBook {
 private:
    std::string courseName;
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;

 public:
    explicit GradeBook(const std::string &);

    // SETTERS
    void setCourseName(const std::string &);

    // GETTERS
    std::string getCourseName() const;

    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;
};
