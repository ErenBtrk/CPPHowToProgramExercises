#include "simpletron.h"
#include <iostream>
#include <iomanip>

Simpletron::Simpletron():accumulator(0),instructionCounter(0),operationCode(0),
                                        operand(0),instructionRegister(0),memory(){}

void Simpletron::welcomeMessage()const{
    std::cout << "*** Welcome to Simpletron! ***\n\n"
                        "*** Please enter your program one instruction ***\n"
                        "*** (or data word) at a time. I will type the ***\n"
                        "*** location number and a question mark (?).  ***\n"
                        "*** You then type the word for that location. ***\n"
                        "*** Type the sentinel -99999 to stop entering ***\n"
                        "*** your program. ***\n" << std::endl;
}

void Simpletron::addInstructions(){
    int word = 0;
        std::cout << "*** Input instructions : range -9999 - +9999" << std::endl;
    while( true ){
        std::cout << std::setw(2) << std::setfill('0') << instructionCounter << ' ' << "? ";
        std::cin >> word;
        if( word == -99999 ){
            std::cout << "*** Program loading completed ***" << std::endl;
            break;
        }
        while( word <= -9999 || word >= +9999 ){
            std::cout << "Invalid input.\nPlease enter an instruction in valid range." << std::endl;
            std::cout << std::setw(2) << std::setfill('0') << instructionCounter << ' ' << "? ";
            std::cin >> word;
        }
        memory[instructionCounter++] = word;
    }

}

void Simpletron::displayRegister(std::string s , int reg)const{
    size_t firstColumnWidth = std::string("InstructionRegister  ").size();
    size_t wordWidth = std::string("+0000").size();


    std::cout << std::setfill(' ') << std::internal;
    std::cout << std::setw(firstColumnWidth)
                << std::left
                   << s << std::setw(wordWidth)
                   << std::showpos
                   << std::setfill('0')
                   << std::internal
                   << reg << std::endl;

}

void Simpletron::displayCounter(std::string s,int counter)const{
    size_t firstColumnWidth = std::string("instructionRegister  ").size();
	int counterWidth = 2;
	std::cout << std::setfill(' ') << std::internal
		<< std::setw(firstColumnWidth)
		<< std::left
		<< s
		<< "   "
		<< std::setw(counterWidth)
		<< std::setfill('0') << std::internal
		<< std::noshowpos
		<< counter << std::endl;
}

void Simpletron::displayMemory(int memory[] , int arraySize)const{
    std::cout << "  ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(std::string(" +0000").size()) << std::setfill(' ') << i;
	}
	std::cout << std::endl;
	for (int i = 0; i < arraySize ; i++)
	{
		if (i % 10 == 0)
		{
			std::cout << std::setw(std::string("00").size()) << std::setfill(' ') << std::noshowpos << i << ' ';
		}
		std::cout << std::setw(std::string("+0000").size()) << std::setfill('0') << std::internal << std::showpos << memory[i] << ' ';
		if ((i - 9) % 10 == 0)
		{
			std::cout << std::endl;
		}
	}
}

void Simpletron::processInstructions(){
    instructionCounter = 0;
    while ( operationCode != HALT ){
        instructionRegister = memory[ instructionCounter ];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;

        switch ( operationCode ){
            case READ:
                std::cout << "**** Please input an integer : ***" << std::endl;
                std::cin >> memory[ operand ];
                instructionCounter++;
                break;
            case WRITE:
                std::cout << "\n*** Write out memory[" << operand << "]: " << memory[operand] << "***\n" << std::endl;
                instructionCounter++;
                break;
            case LOAD:
                accumulator = memory[ operand ];
                instructionCounter++;
                break;
            case STORE:
                memory[ operand ] = accumulator;
                instructionCounter++;
                break;
            case ADD:
                accumulator += memory[ operand ];
                instructionCounter++;
                break;
            case SUBTRACT:
                accumulator -= memory[ operand ];
                instructionCounter++;
                break;
            case DIVIDE:
                accumulator /= memory[ operand ];
                instructionCounter++;
                break;
            case MULTIPLY:
                accumulator *= memory[ operand ];
                instructionCounter++;
                break;
            case BRANCH:
                instructionCounter = operand;
                instructionCounter--;
                break;
            case BRANCHNEG:
                if( accumulator < 0 ){
                    instructionCounter = operand;
                    instructionCounter--;
                }
                break;
            case BRANCHZERO:
                if( accumulator == 0 ){
                    instructionCounter = operand;
                    instructionCounter--;
                }
                break;

        }

    }
}

void Simpletron::run(){
    welcomeMessage();
    addInstructions();
    processInstructions();
    displayRegister("Accumulator", 0);
	displayCounter("instructionCounter", instructionCounter);
	displayRegister("instructionRegister", instructionRegister);
	displayCounter("operationCode", operationCode);
	displayCounter("operand", operand);

	std::cout << std::endl;
	std::cout << "MEMORY:\n";
	displayMemory(memory, 100);
}
