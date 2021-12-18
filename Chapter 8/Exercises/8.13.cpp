#include <iostream>

using namespace std;

void function1( char * , const char * );

int main(){
    char string1[80];
    char string2[80];

    cout << "Enter two strings : " << endl;
    cin >> string1 >> string2 ;

    function1( string1 , string2 );
    cout << string1 << endl;






    return 0;
}

void function1( char* s1 , const char* s2 ){
    while( *s1  != '\0' ){
        ++s1;
    }
    for( ; (*s1 == *s2 ) ; ++s1 , ++ s2 );
}
