#include <iostream>
#include <math.h>
#include "encryptionSystem.h"


EncryptionSystem::EncryptionSystem(){}

void EncryptionSystem::setPassword( ){
    std::cout << "Please enter a four digits password (-1 to quit) :" << std::endl;
    std::cin >> password;
    while( !isFourDigit() ){
        std::cout << "Please enter a four digits password (-1 to quit) :" << std::endl;
        std::cin >> password;
        if(password == EOF){
            break;
        }
    }
}
void EncryptionSystem::setEncryptedPassword(){
    replaceDigits();
    swapDigits();
}
int EncryptionSystem::getPassword(){
    return password;
}
int EncryptionSystem::getEncryptedPassword(){
    return encryptedPassword;
}

void EncryptionSystem::replaceDigits(){
    int remainder = 0;
    int counter = 0;
    int replacedNumber =0;
    int temp = password ;
    while(temp > 0){
        remainder = temp % 10;
        replacedNumber = replacedNumber + (((remainder + 7)%10 )* pow(10,counter));
        temp /= 10;
        counter++;
    }
    encryptedPassword=replacedNumber;
}

void EncryptionSystem::swapDigits(){
    int newNumber  = 0;
    int remainder = 0;
    int counter = 0;
    int temp = encryptedPassword;

    while ( temp > 0) {
        remainder = temp % 10;
        switch(counter){
            case 0:
                newNumber += remainder * pow(10,2);
                break;
            case 1:
                newNumber += remainder * pow(10,3);
                break;
            case 2:
                newNumber += remainder * pow(10,0);
                break;
            case 3:
                newNumber += remainder * pow(10,1);
                break;
        }
        temp /= 10;
        counter++;
    }
    encryptedPassword = newNumber;
}

bool EncryptionSystem::isFourDigit(){
    int counter = 0;
    int temp = password;
    while(temp > 0){
        temp /= 10;
        counter++;
    }
    if(counter == 4){
        return true;
    }
    else{
        return false;
    }
}

void EncryptionSystem::displayPasswords(){
    std::cout << "Unencrypted password : " << password << std::endl;
    std::cout << "Encrypted password : " << encryptedPassword << std::endl;

}
void EncryptionSystem::run(){
    setPassword();
    if(password != EOF){
        setEncryptedPassword();
        displayPasswords();
    }


}
