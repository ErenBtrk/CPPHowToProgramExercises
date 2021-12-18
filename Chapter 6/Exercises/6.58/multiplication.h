#ifndef MULTIPLICATION_H_INCLUDED
#define MULTIPLICATION_H_INCLUDED

class Multiplication{
private:
    int randomNum1;
    int randomNum2;
    std::string question;
    int studentAnswer;
    std::string message;


public:
    Multiplication();
    void setRandomNum1();
    void setRandomNum2();
    void displayQuestion();
    void setStudentAnswer();
    void setMessage();


    void run();



};


#endif // MULTIPLICATION_H_INCLUDED
