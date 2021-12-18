#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(const std::string &name,const std::array < std::array < int , tests > , students > &gradesArray)
                    :courseName(name),grades(gradesArray){}

void GradeBook::setCourseName(const std::string &name){
    courseName = name;
}

std::string GradeBook::getCourseName()const{
    return courseName;
}

void GradeBook::displayMessage()const{
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
}

void GradeBook::processGrades()const{
    outputGrades();

    std::cout << std::setprecision(2) << std::fixed ;


    std::cout << "Lowest grade is = " << getMinimum() << std::endl;

    std::cout << "Highest grades is = " << getMaximum() << std::endl;

    outputBarChart();
}

int GradeBook::getMinimum()const{
    int lowestGrade = 100;
    for( auto const &student : grades ){
            for(auto const &grade : student){
                if( grade < lowestGrade ){
                    lowestGrade = grade;
                }
            }
    }
    return lowestGrade;
}

int GradeBook::getMaximum()const{
    int highestGrade = 0;
    for( auto const &student : grades){
        for( auto const &grade : student ){
            if( grade > highestGrade ){
                highestGrade = grade;
            }
        }
    }
    return highestGrade;
}

double GradeBook::getAverage(const std::array < int , tests > &setOfGrades)const{
    int total = 0;
    for(int grade : setOfGrades){
        total += grade;
    }
    return static_cast < double > ( total ) / setOfGrades.size()  ;
}

void GradeBook::outputBarChart()const{
    std::cout << "\nGrade Distribution : " << std::endl;

    const size_t frequencySize = 11;
    std::array < unsigned int , frequencySize > frequency = {};

    for( auto const &student : grades){
        for( auto const &test : student){
            frequency[test / 10]++;
        }
    }

    for( size_t count = 0 ; count < frequencySize ; count++){
        if( count == 0 ){
            std::cout << " 0-9 :" ;
        }
        else if( count == 10){
            std::cout << " 100 : " ;
        }
        else{
            std::cout << count * 10 << "-" << (count * 10) + 9 << " : " ;
        }
        for( unsigned int stars = 0 ; stars < frequency[count] ; stars++ ){
            std::cout << "*" ;
        }
        std::cout << std::endl;
    }
}

void GradeBook::outputGrades()const{
    std::cout << "\nThe grades are : \n\n" << std::endl;

    for( size_t test = 0 ; test < tests ; test++){
        std::cout << "Test " << test + 1 << "  " ;
    }
    std::cout << "Average" << std::endl;

    for( size_t student = 0 ; student < grades.size() ; student++ ){
        std::cout << "Student " << std::setw(2) << student + 1;
        for(size_t test = 0 ; test < grades[student].size() ; test++){
            std::cout << std::setw(8) << grades[student][test];
        }
        double average = getAverage(grades[student]);
        std::cout << std::setw(9) << std::setprecision(2) << std::fixed << average << std::endl;
    }



}
