#include <iostream>
#include <vector>
#include "overnightPackage.h"
#include "package.h"
#include "twoDayPackage.h"


using namespace std;

int main(){
    vector < Package* > packagesVector(3);
    Person sender("G", "Honey Road No.1", "HG", "HB", "242424");
	Person recipient("C", "Scientist Roat No.1", "WH", "HB", "666666");

    packagesVector[0] = new Package(sender,recipient,100,5);
    packagesVector[1] = new OverNightPackage(sender,recipient,100,5,10);
    packagesVector[2] = new TwoDayPackage(sender,recipient,100,5,30);

    for( Package * packagePtr : packagesVector){
        cout << typeid(*packagePtr).name() << endl;
        packagePtr->print();
        cout << endl << endl;
    }

}
