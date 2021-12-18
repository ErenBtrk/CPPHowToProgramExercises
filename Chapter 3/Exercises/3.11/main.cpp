#include <iostream>
#include "gradeBook.h"


int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming.","Yarasa Rys");
    GradeBook gradeBook2("CS102 Data Structures in C++.","Isa Musa");

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();




    return 0;
}
