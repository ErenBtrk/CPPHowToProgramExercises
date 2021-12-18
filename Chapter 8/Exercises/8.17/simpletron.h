#ifndef SIMPLETRON_H_INCLUDED
#define SIMPLETRON_H_INCLUDED
#include <iostream>

class Simpletron{
public:
    static const size_t MEMORY_SIZE = 1000;
private:
    int memory[MEMORY_SIZE];
    int accumulator;
    int instructionCounter;
    int instructionRegister;
    int operationCode;
    int operand;

    std::string simpleString;
    int *ptrRegS;
    int len ;
    int ascii ;

    bool debug ;

    //operation codes
    static const int READ = 0x0A;
    static const int WRITE = 0x0B;
    static const int NEW_LINE = 0x0C;
    static const int READ_STR = 0x0D;
    static const int WRITE_STR = 0x0E;

    static const int LOAD = 0x14;
    static const int STORE = 0x15;

    static const int ADD = 0x1E;
    static const int SUBTRACT = 0x1F;
    static const int DIVIDE = 0x20;
    static const int MULTIPLY = 0x21;
    static const int MODULUS = 0x22;
    static const int POWER = 0x23;

    static const int BRANCH = 0x28;
    static const int BRANCHNEG = 0x29;
    static const int BRANCHZERO = 0x2A;

    static const int HALT = 0x2B;
    static const int SML_DEBUG = 0x2C;

    //functions
    void welcomeMessage()const;
    void addInstructions();
    void processInstructions();
    void displayRegister(std::string , int)const;
    void displayCounter(std::string , int)const;
    void displayMemory(int [] , int)const;
    void processString(int);

public:
    Simpletron();
    void run();







};

#endif // SIMPLETRON_H
