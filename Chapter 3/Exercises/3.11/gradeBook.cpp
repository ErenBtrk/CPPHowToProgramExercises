#include "gradeBook.h"
#include <iostream>
#include <string>

GradeBook::GradeBook(const std::string &courseName,const std::string &instructorName){
    setCourseName(courseName);
    setInstructorName(instructorName);
}
void GradeBook::setCourseName(const std::string &name){
    courseName=name;
}
std::string GradeBook::getCourseName(){
    return courseName;
}
void GradeBook::setInstructorName(const std::string &name){
    instructorName=name;
}
std::string GradeBook::getInstructorName(){
    return instructorName;
}
void GradeBook::displayMessage(){
    std::cout << "Welcome to the grade book for : " << getCourseName() << std::endl;
    std::cout << "Instructor name : " << getInstructorName() << std::endl;
}
