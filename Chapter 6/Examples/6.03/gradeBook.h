#pragma once

#include <string>

class GradeBook {
 private:
    std::string courseName;
    int maximumGrade;

 public:
    GradeBook(std::string);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
    void inputGrades();
    void displayGradeReport();
    int maximum(int, int, int);
};
