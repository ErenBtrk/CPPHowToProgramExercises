#ifndef SIMPLETRON_H_INCLUDED
#define SIMPLETRON_H_INCLUDED
#include <iostream>


class Simpletron{
public:
    static const size_t MEMORY_SIZE = 1000;
private:
    int memory[MEMORY_SIZE]; // Simpletron has 100 words capacity
    int accumulator; // Accumulator Register
    int instructionCounter; // keep track of the location in memory that contains the instruction being performed
    int operationCode; // Indicates the operation currently being performed(leftmost two digits of a word)
    int operand; // Indicates the memory location on which the current instruction operates(rightmost two digits of a word
    int instructionRegister; //Transfer the next instruction to be performed from memory to this

    //operation codes
    static const int READ = 10;
    static const int WRITE = 11;

    static const int LOAD = 20;
    static const int STORE = 21;

    static const int ADD = 30;
    static const int SUBTRACT = 31;
    static const int DIVIDE = 32;
    static const int MULTIPLY = 33;

    static const int BRANCH = 40;
    static const int BRANCHNEG = 41;
    static const int BRANCHZERO = 42;

    static const int HALT = 43;

    void welcomeMessage()const;
    void addInstructions();
    void processInstructions();
    void displayRegister(std::string , int)const;
    void displayCounter(std::string , int)const;
    void displayMemory(int [] , int)const;


public:
    Simpletron();
    void run();





};



#endif // SIMPLETRON_H_INCLUDED
