#pragma once

#include <string>

class GradeBook {
 private:
    std::string courseName;

 public:
    explicit GradeBook(const std::string &);

    // SETTERS
    void setCourseName(const std::string &);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
};
