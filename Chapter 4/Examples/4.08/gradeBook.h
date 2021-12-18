#pragma once

#include <string>

class GradeBook {
 private:
    std::string courseName;

 public:
    explicit GradeBook(std::string);

    // SETTERS
    void setCourseName(std::string);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
    void determineClassAverage();
};
