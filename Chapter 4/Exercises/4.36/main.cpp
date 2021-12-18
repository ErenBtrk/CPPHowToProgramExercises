#include <iostream>
#include "encryptionSystem.h"

using namespace std;


int main()
{
    EncryptionSystem e1;
    while(e1.getPassword() != EOF){
        e1.run();
        if(e1.getEncryptedPassword() == EOF){
            break;
        }
    }




}
