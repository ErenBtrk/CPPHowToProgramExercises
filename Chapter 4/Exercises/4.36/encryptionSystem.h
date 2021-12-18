#ifndef ENCRYPTIONSYSTEM_H_INCLUDED
#define ENCRYPTIONSYSTEM_H_INCLUDED

class EncryptionSystem{
private:
    int password;
    int encryptedPassword;
public:
    EncryptionSystem();
    void setPassword();
    void setEncryptedPassword();
    int getPassword();
    int getEncryptedPassword();
    void replaceDigits();
    void swapDigits();
    bool isFourDigit();
    void displayPasswords();
    void run();

};


#endif // ENCRYPTIONSYSTEM_H_INCLUDED
