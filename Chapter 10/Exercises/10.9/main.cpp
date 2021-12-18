// Fig. 10.19: fig10_19.cpp
// HugeInt test program.
#include <iostream>
#include "Hugeinteger.h"

using namespace std;

int main(){
    HugeInt n1( 7654321 );
    HugeInt n2( 7891234 );
    HugeInt n3( "99999999999999999999999999999" );
    HugeInt n4( "1" );
    HugeInt n5;

     cout << "n1 is " << n1 << "\nn2 is " << n2
     << "\nn3 is " << n3 << "\nn4 is " << n4
     << "\nn5 is " << n5 << "\n\n";

     n5 = n1 + n2;
     cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

     cout << n3 << " + " << n4 << "\n= " << ( n3 + n4 ) << "\n\n";

     n5 = n1 + 9;
     cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

     n5 = n2 + "10000";
     cout << n2 << " + " << "10000" << " = " << n5 << endl;

     HugeInt n6(1000);
     HugeInt n7(99999);
     HugeInt n8;

     n8 = n6 * n7;
     cout << n6 << " * " << n7 << " = " << n8 << endl;

     HugeInt n9(123);
     HugeInt n10("9999");
     HugeInt n11;

     n11 = n9 * n10;
     cout << n9 << " * " << n10 << " = " << n11 << endl;

     n11 = n9 * 21 ;
     cout << n9 << " * " << 21 << " = " << n11 << endl;

     n11 = n9 * "10";
     cout << n9 << " * " << "10" << " = " << n11 << endl;

     HugeInt n12(500);
     HugeInt n13(31);
     HugeInt n14;

     n14= n12 / n13;
     cout << n12 << " / " << n13 << " = " << n14 << endl;

     n14 = n12 / 51;
     cout << n12 << " / " << 51 << " = " << n14 << endl;

     n14 = n12 / "150";
     cout << n12 << " / " << "150" << " = " << n14 << endl;

     HugeInt n15(11110);
     cout << "n15 = " << n15 << endl;
     HugeInt n16(11111);
     cout << "n16 = " << n16 << endl;

     if(n15 > n16){
        cout << "n15 is larger than n16" << endl;
     }
     else{
        cout << "n15 is not larger than n16" << endl;
     }
     if(n15 < n16){
        cout << "n15 is smaller than n16" << endl;
     }
     else{
        cout << "n15 is not smaller than n16" << endl;
     }
     if(n15 == n16 ){
        cout << "n15 is equal to n16" << endl;
     }
     else{
        cout << "n15 is not equal to n16" << endl;
     }

     HugeInt n17(455);
     cout << "n17 = " << n17 << endl;
     HugeInt n18(456);
     cout << "n18 = " << n18 << endl;

     if( n17 == n18 ){
        cout << "n17 is equal to n18" << endl;
     }
     else{
        cout << "n17 is not equal to n18" << endl;
     }

     if( n17 != n18 ){
        cout << "n17 is not equal to n18" << endl;
     }
     else{
        cout << "n17 is  equal to n18" << endl;
     }
} // end main
