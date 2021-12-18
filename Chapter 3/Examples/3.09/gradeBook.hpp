#pragma once

#include <iostream>
#include <string>

// GradeBook class definition
class GradeBook {
 private:
    std::string courseName;

 public:
    explicit GradeBook(const std::string &name) { setCourseName(name); }
    // SETTERS
    void setCourseName(const std::string &name) { courseName = name; }
    // GETTERS
    std::string getCourseName() { return courseName; }
    // display a welcome message to the GradeBook user
    void displayMessage() {
        std::cout << "Welcome to the grade book for\n"
                  << getCourseName() << "!" << std::endl;
    }
};
