#include <string>
#include <iostream>
#include <iomanip>

#include "GradeBook.h"

GradeBook::GradeBook(const std::string &name) {
    setCourseName(name);

    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}
// SETTERS
void GradeBook::setCourseName(const std::string &name) {
    if (name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
                  << "Limiting courseName to first 25 characters.\n"
                  << std::endl;
    }
}
// GETTERS
std::string GradeBook::getCourseName() const { return courseName; }
void GradeBook::displayMessage() const {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!\n"
              << std::endl;
}
void GradeBook::inputGrades() {
    int grade;
    int gradePoint = 0;
    int totalPoint = 0;
    double average = 0.0;
    int counter = 0;

    std::cout << "Enter the letter grades.\n"
              << "Enter the EOF character to end input." << std::endl;

    while ((grade = std::cin.get()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                gradePoint = 4 ;
                break;
            case 'B':
            case 'b':
                ++bCount;
                gradePoint = 3 ;
                break;
            case 'C':
            case 'c':
                ++cCount;
                gradePoint = 2 ;
                break;
            case 'D':
            case 'd':
                ++dCount;
                gradePoint = 1 ;
                break;
            case 'F':
            case 'f':
                ++fCount;
                gradePoint = 0 ;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                std::cout
                    << "Incorrect letter grade entered. Enter a new grade."
                    << std::endl;
        }
        totalPoint += gradePoint;
        counter++ ;
    }
    average = (double)totalPoint / counter ;
    std::cout << "AVERAGE GRADE POINT : " << std::setprecision(2) << std::fixed << average << std::endl;

}
void GradeBook::displayGradeReport() const {
    std::cout << "\n\nNumber of students who received each letter grade:"
              << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
              << "\nD: " << dCount << "\nF: " << fCount << std::endl;
}
