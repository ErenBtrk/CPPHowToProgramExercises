#ifndef CREATEANDDESTROY_H_INCLUDED
#define CREATEANDDESTROY_H_INCLUDED
#include <iostream>
#include <string>

class CreateAndDestroy {
 private:
    int objectID;
    std::string message;

 public:
    CreateAndDestroy(int, std::string);
    ~CreateAndDestroy();
};


#endif // CREATEANDDESTROY_H_INCLUDED
