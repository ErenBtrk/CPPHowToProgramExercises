#include "GradeBook.h"

int main(int argc, const char *argv[]) {
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
    return 0;
}
