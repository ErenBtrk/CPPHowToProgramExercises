#include "simpletron.h"
#include <iostream>
#include <iomanip>
#include <string>


Simpletron::Simpletron():memory(),accumulator(0),instructionCounter(0),
                    instructionRegister(0),operationCode(0),operand(0),len(0),ascii(0),ptrRegS(nullptr),debug(false){}


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
        std::cout << std::setw(3) << std::setfill('0') << instructionCounter << ' ' << "? ";
        std::cin  >>  std::hex >> word;
        if( word == -999999  ){
            std::cout << "*** Program loading completed ***" << std::endl;
            break;
        }
        else{
            while( word <= -99999 || word >= 99999 ){
                std::cout << "Invalid input.\nPlease enter an instruction in valid range." << std::endl;
                std::cout << std::setw(3) << std::setfill('0') << instructionCounter << ' ' << "? ";
                std::cin >> word;
                if( word == -999999  ){
                    std::cout << "*** Program loading completed ***" << std::endl;
                    break;
                }
            }
        }
        memory[instructionCounter++] = word;
    }

}

void Simpletron::processInstructions(){

    instructionCounter = 0;

    while( operationCode != HALT ){
        instructionRegister = memory[ instructionCounter ];
        operand = instructionRegister % 1000;
        operationCode = instructionRegister / 1000;


        switch( operationCode ){
        case READ:{
            int inputInteger = 0;
            std::cout << "*** Please input an integer : ***" << std::endl;
            std::cin >> inputInteger;
            memory[ operand ] = inputInteger ;
            instructionCounter++;
            }
            break;
        case WRITE:
            std::cout << "\nWrite out memory [" << operand << "] : " << memory[operand] << " ***\n" << std::endl;
            instructionCounter++;
            break;
        case NEW_LINE:
            std::cout << std::endl;
            instructionCounter++;
            break;
        case READ_STR:
            std::cin.ignore();

            std::cout << "> ";
            std::getline(std::cin, simpleString);

            processString(operand);
            instructionCounter++;


            break;
        case WRITE_STR:
            ptrRegS = &memory[operand];

            len = *ptrRegS % 100;

            printf("%c", *(ptrRegS++) % 100);  // print first char

            for (int i = operand + 1;
                 i <= operand + (len / 2) && *ptrRegS != '\0'; ++i, ptrRegS++) {
                printf("%c%c", *ptrRegS / 100, *ptrRegS % 100);
            }
            std::cout << std::endl;

            ptrRegS = nullptr;
            len = 0;
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
            accumulator /= memory [ operand ];
            instructionCounter++;
            break;
        case MULTIPLY:
            accumulator *= memory [ operand ];
            instructionCounter++;
            break;
        case MODULUS:
            accumulator %= memory [ operand ];
            instructionCounter++;
            break;
        case POWER:{
            int total = 1;
            for( int i = 0 ; i < memory [ operand ] ; i++ ){
                total *= accumulator;
            }
            accumulator = total;
            instructionCounter++;
        }
            break;
        case SML_DEBUG:
            if( operand == 1 || operand == 0 ){
                debug = operand;
            }
            instructionCounter++;
            break;
        }
        if( debug ){
            displayRegister("Accumulator", 0);
            displayCounter("instructionCounter", instructionCounter);
            displayRegister("instructionRegister", instructionRegister);
            displayCounter("operationCode", operationCode);
            displayCounter("operand", operand);
            std::cout << std::endl;
            std::cout << "MEMORY:\n";
            displayMemory(memory, MEMORY_SIZE);
        }
    }


}

void Simpletron::displayRegister(std::string s , int reg)const{
    size_t firstColumnWidth = std::string("InstructionRegister  ").size();
    size_t wordWidth = std::string("+0000000000000000").size();


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
		std::cout << std::setw(std::string("0x0000000000000000 ").size()) << std::setfill(' ') <<  i;
	}
	std::cout << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		if (i % 10 == 0)
		{
			std::cout << std::setw(std::string("000").size()) << std::setfill(' ') << std::noshowpos << i << ' ';
		}
		std::cout << "0x" << std::setw(std::string("0000000000000000").size()) << std::setfill('0') << std::hex << memory[ i ] << ' ';
		if ((i - 9) % 10 == 0)
		{
			std::cout << std::endl;
		}
	}
}

void Simpletron::processString(int operand) {
    ptrRegS = &memory[operand];
    len = simpleString.length();

    // convert to UPPERCASE (can only store chars as 2 digit integers)
    for (int i = 0; i < len; ++i) {
        if (simpleString[i] > 90) {
            simpleString[i] = simpleString[i] - 32;
        }
    }

    ascii = (len * 100) + simpleString[0];

    *(ptrRegS++) = ascii;

    for (int i = 1; i < len; i += 2) {
        // ensure don't exceed bounds of string
        if (i + 1 <= len) {
            ascii = (simpleString[i] * 100) + simpleString[i + 1];
        } else {  // last char (add null terminator)
            ascii = simpleString[i] * 100;
        }

        *(ptrRegS++) = ascii;
    }

    ptrRegS = nullptr;
    len = 0;
    ascii = 0;
}


void Simpletron::run(){
    welcomeMessage();
    addInstructions();
    processInstructions();

}
