#include <iostream>

using namespace std;

double grade(double,double);

int main(){
    double midterm = 0.0;
    double finalExam = 0.0;
    cout << "Enter exam results : " << endl;
    cin >> midterm >> finalExam;
    cout << "Student's grade is = " << grade(midterm,finalExam) ;






    return 0;
}

double grade(double midtermExam,double finalExam){
    double average= (midtermExam+finalExam)/2;
    if(average >= 90 && average <= 100){
        return 4;
    }
    else if(average >= 80 && average < 90){
        return 3;
    }
    else if(average >= 70 && average < 80){
        return 2;
    }
    else if(average >=60 && average < 70){
        return 1;
    }
    else{
        return 0;
    }
}
