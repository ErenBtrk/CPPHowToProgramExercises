#include <iostream>

using namespace std;

int main(){
    string s1="";
    for(int i = 1 ; i <= 12 ; i++){
        switch(i){
            case 1: s1 = "First"; break;
            case 2: s1 = "Second"; break;
            case 3: s1 = "Third" ; break;
            case 4: s1 = "Forth" ; break;
            case 5: s1 = "Fifth" ; break;
            case 6: s1 = "Sixth" ; break;
            case 7: s1 = "Seventh" ; break;
            case 8: s1 = "Eighth" ; break;
            case 9: s1 = "Ninth" ; break;
            case 10: s1 = "Tenth" ; break;
            case 11: s1 = "Eleventh" ; break;
            case 12: s1 = "Twelfth" ; break;
        }

        cout << "On the " << s1 << " day of Christmas" << endl
                << "My true love sent to me:"<< endl ;

        switch(i){
            case 12: cout << "Twelve Drummers Drumming" << endl;
            case 11: cout << "Eleven Pipers Piping" << endl;
            case 10: cout << "Ten Lords a-Leaping" << endl;
            case 9: cout << "Nine Ladies Dancing" << endl;
            case 8: cout << "Eight Maids a-Milking" << endl;
            case 7: cout << "Seven Swans a-Swimming" << endl;
            case 6: cout << "Six Geese a-Laying" << endl;
            case 5: cout << "Five Gold Rings" << endl;
            case 4: cout << "Four Calling Birds" << endl;
            case 3: cout << "Three French Hens" << endl;
            case 2: cout << "Two Turtle Doves" << endl;
            case 1:printf("%s Partridge in a Pear Tree\n", (i  > 1) ? "and a" : "A");
        }



        cout << endl;
    }






    return 0;
}
