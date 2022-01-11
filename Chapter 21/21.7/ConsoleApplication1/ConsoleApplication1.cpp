// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Encryption.h"
#include "Decryption.h"

int main()
{
    std::string message = "Don't look at me like\n"
                            "I am a monster\n"
                             "Frown out your one face\n"
                                "But with the other\n"
                                    "Stare like a junkie\n";

    Encryption e(message);
    e.printEncryptedMessage();
    Decryption d(e.getEncryptedMessage());
    d.printDecryptedMessage();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
