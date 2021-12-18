#include <iostream>

using namespace std;

void stringReverseRecursive(string,int);

int main(){
    string s;
    cout << "Enter a string : " << endl;
    cin >> s;
    cout << "Reverse of the string is : " << endl;
    stringReverseRecursive( s , s.size() - 1 );






    return 0;
}

void stringReverseRecursive(string s , int sizeString){
    if( sizeString < 0 ){
        return;
    }
    cout << s[sizeString] ;
    stringReverseRecursive( s , sizeString - 1 );

}
