#include <iostream>
#include <fstream>
#include <vector>
#include <random>

class HangmanGame
{
public:
    HangmanGame(std::vector<std::string>&vec):wrongAnswers(0)
    {
        setWords(vec);
    }
    void setCensoredWord()
    {
        for(size_t i = 0 ; i < wordToGuess.size() ; i++)
        {
            censoredWord+='X';
        }
    }

    void setWordToGuess(const std::string&str)
    {
        wordToGuess = str;
    }
    void setWords(std::vector<std::string>&vec)
    {
        this->words = vec;
    }
    std::string getRandomWord()const
    {
        std::random_device r;
        std::default_random_engine engine(r());
        std::uniform_int_distribution<unsigned int> randomInt(0,words.size()-1);

        return words.at(randomInt(engine));
    }
    void printCensoredString()const
    {
        std::cout << censoredWord << std::endl;
    }
    void guess()
    {
        bool isCorrectGuess = false;
        char c;
        std::cout << "Enter a letter : " ;
        std::cin >> c;
        while(!isalpha(c))
        {
            std::cout << "Invalid input.Please enter a letter :";
            std::cin >> c;
        }
        for(size_t i = 0 ; i < wordToGuess.size() ; i++)
        {
            if(toupper(c) == toupper(wordToGuess[i]))
            {
                censoredWord[i] = c;
                isCorrectGuess = true;
            }
        }
        if(!isCorrectGuess)
        {
            wrongAnswers++;
        }

    }
    void printHangman()const
    {
        for(size_t i = 0 ; i < wrongAnswers ; i++)
        {
            std::cout << hangmanStr.at(i);
        }
        std::cout << "\n\n";
    }

    void oneRound()
    {
        setWordToGuess(getRandomWord());
        setCensoredWord();
        printCensoredString();
        while(true)
        {

            guess();
            printCensoredString();
            printHangman();
            if(wrongAnswers == 7)
            {
                std::cout << "\nYou couldnt guess the word.The word was \""<< wordToGuess << "\"" << std::endl;
                break;
            }
            if(wordToGuess == censoredWord)
            {
                std::cout << "\nCongratulations.You guessed the word.\n" << std::endl;
                break;
            }
        }
        wrongAnswers = 0;
        censoredWord.erase(0,std::string::npos);
    }

    void game()
    {

        char c;
        do
        {
            oneRound();
            std::cout << "To play again enter Y,to quit enter N : " ;
            std::cin>>c;
            while(toupper(c) != 'Y' && toupper(c) != 'N')
            {
                std::cout << "To play again enter Y,to quit enter N : " ;
                std::cin>>c;
            }
        }
        while(toupper(c) == 'Y');
    }

private:
    int wrongAnswers;
    std::vector<std::string>hangmanStr = {" O \n","/","|","\\\n"," | \n","/"," \\\n"};
    std::string censoredWord;
    std::string wordToGuess;
    std::vector<std::string> words;

};



int main()
{
    std::vector<std::string> words;
    std::fstream file("words.txt",std::ios::in);
    if(!file)
    {
        std::cerr<< "File couldnt be opened."<< std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        std::string word;
        while(!file.eof())
        {
            file >> word;
            if(word.length() > 4)
            {
                words.push_back(word);
            }
        }
    }


    HangmanGame hangmanGame(words);
    hangmanGame.game();


}
