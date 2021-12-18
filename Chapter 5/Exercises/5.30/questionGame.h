#ifndef QUESTIONGAME_H_INCLUDED
#define QUESTIONGAME_H_INCLUDED

class QuestionGame{
private:
    int questionNo;
    std::string questionText;
    std::string options;
    const double questionPoint;
    char correctAnswer;
    char competitorAnswer;
    int score;
public:
    QuestionGame();
    void setQuestionNo();
    void setQuestionText();
    void setOptions();
    void setCorrectAnswer();


    int getQuestionNo()const;
    std::string getQuestionText()const;
    std::string getOptions()const;
    char getCorrectAnswer()const;
    int getScore()const;

    void answer();
    void displayStats()const;
    void displayResult()const;
    void run();






};


#endif // QUESTIONGAME_H_INCLUDED
