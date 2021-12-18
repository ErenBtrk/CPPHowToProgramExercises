#include <iostream>
#include "doubleSubscriptedArray.h"

using namespace std;

int main()
{
   DoubleSubscriptedArray dsa1(2,3);
   cout << "Enter 6 integers for dsa1 object : " << endl;
   cin >> dsa1;
   cout << "dsa1 : " << endl;
   cout << dsa1<< endl;
   DoubleSubscriptedArray dsa2(dsa1);
   cout << "dsa2 : " << endl;
   cout << dsa2 << endl;
   if( dsa1 == dsa2 ){
        cout << "dsa1 and dsa2  are equal." << endl;
   }
   else{
        cout << "dsa1 and dsa2  are not equal." << endl;
   }
   if( dsa1 != dsa2 ){
        cout << "dsa1 and dsa2  are not equal." << endl;
   }
   else{
        cout << "dsa1 and dsa2  are equal." << endl;
   }

   DoubleSubscriptedArray dsa3 = dsa1;
   cout << "dsa3 after assiging dsa1 to dsa3 : " << endl;
   cout << dsa3 << endl;
   cout << "dsa3[1][2] = " ;
   cout << dsa3(1,2) << endl;


   DoubleSubscriptedArray dsa4(3,3);
   cout << "Enter 9 integers for object dsa4 : " << endl;
   cin >> dsa4;
   cout << "dsa4 : " << endl;
   cout << dsa4 << endl;
   dsa3 = dsa4;
   cout << "dsa3 after assigning dsa4 to dsa3 : " << endl;
   cout << dsa3 << endl;



    return 0;
}
