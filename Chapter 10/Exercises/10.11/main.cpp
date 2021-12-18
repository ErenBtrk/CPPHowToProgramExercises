#include <iostream>
#include "poly.h"

using namespace std;

int main()
{
    Poly p1;
    p1.polyAppend(1,7);
    p1.polyAppend(2,6);
    p1.polyAppend(3,5);
    p1.polyAppend(4,4);
    p1.polyAppend(5,2);
    p1.polyAppend(20,20);
    p1.sortPoly();
    cout << p1 << endl;
    cout << "p1 noOfTerms = " << p1.getNoOfTerms() << endl;
    Poly p2;
    p2.polyAppend(1,4);
    p2.polyAppend(1,3);
    p2.polyAppend(1,2);
    p2.polyAppend(1,1);
    p2.polyAppend(2,0);
    p2.polyAppend(5,5);
    p2.polyAppend(7,7);
    p2.sortPoly();

    cout << p2 << endl;
    cout << "p2 noOfTerms = " << p2.getNoOfTerms() << endl;

    Poly p3;

    p3 = p1 + p2;
    p3.sortPoly();
    cout << p3 << endl;
    cout << "p3 noOfTerms = " << p3.getNoOfTerms() << endl;


    p3 = p1 - p2;
    p3.sortPoly();
    cout << p3 << endl;


    Poly p4;
    p4.polyAppend(2,2);
    p4.polyAppend(3,4);
    p4.polyAppend(5,6);

    Poly p5;
    p5.polyAppend(3,3);
    p5.polyAppend(5,5);
    p5.polyAppend(7,7);

    Poly p6;
    p6 = p4 * p5;
    p6.sortPoly();
    cout << p6 << endl;



    Poly p7;
    p7.polyAppend(5,10);
    p7.polyAppend(2,2);
    p7.polyAppend(3,3);
    p7.polyAppend(8,2);
    p7.polyAppend(5,3);
    p7.polyAppend(1,10);
    p7.sortPoly();
    cout << p7 << endl;

    Poly p8;
    p8.polyAppend(2,4);
    p8.polyAppend(8,6);

    Poly p9;
    p9.polyAppend(2,2);

    Poly p10;
    p10 = p8 / p9;
    cout << p10 << endl;

    Poly p11;
    p11.polyAppend(2,2);
    p11.polyAppend(3,3);
    p11.polyAppend(4,4);

    Poly p12;
    p12.polyAppend(5,1);
    p12.polyAppend(3,2);
    p12.polyAppend(4,3);
    p12.polyAppend(5,6);

    p11 += p12;
    p11.sortPoly();
    cout << "Toplam" << p11 << endl;

    Poly p13;
    p13.polyAppend(2,2);
    p13.polyAppend(3,3);
    p13.polyAppend(4,4);

    Poly p14;
    p14.polyAppend(2,6);
    p14.polyAppend(1,2);
    p14.polyAppend(2,3);
    p14.polyAppend(5,4);
    p14.polyAppend(5,1);

    p13 -= p14;
    p13.sortPoly();
    cout << p13 << endl;

    Poly p15;
    p15.polyAppend(2,1);
    p15.polyAppend(3,2);
    p15.polyAppend(4,3);

    Poly p16;
    p16.polyAppend(1,1);
    p16.polyAppend(2,2);
    p16.polyAppend(3,3);

    p15 *= p16;
    cout << p15 << endl;




}
