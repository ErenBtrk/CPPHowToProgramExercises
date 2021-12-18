#include <iostream>
#include <string.h>

using namespace std;

bool testPalindrome(string,int,bool);

int main(){
    string s ;
    cout << "Enter a string" << endl;
    cin >> s ;

    if ( testPalindrome ( s , s.size() - 1 , true ) ){
        cout << "It is palindrome" << endl;
    }
    else{
        cout << "It is NOT palindrome" << endl;
    }




    return 0;
}

bool testPalindrome(string s,int sizeString,bool b){
    if( sizeString < 0 ){
        return b;
    }
    if( s[sizeString] != s[ s.size() - 1 - sizeString ] ){
        b &= false;
    }
    else{
        b &= true;
    }
    return testPalindrome( s , sizeString - 1 ,b);

}
