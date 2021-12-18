#include <iostream>
#include "coord.h"
#include "rectangle.h"
#include <windows.h>





using namespace std;


void gotoxy(int x , int y )
{
 COORD coord ;
 coord.X = x ;
 coord.Y = y ;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord) ;
}

void hideCursor()
{
 HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

 CONSOLE_CURSOR_INFO    cursorInfo;

 GetConsoleCursorInfo(out,&cursorInfo);
 cursorInfo.bVisible = false ;
 SetConsoleCursorInfo(out,&cursorInfo);
}


int main()
{
    hideCursor();
    Coord c1(-4,4);
    Coord c2(-4,-3);
    Coord c3(3,4);
    Coord c4(3,-3);

    Rec r1(c1,c2,c3,c4);


    int arr[20] = {-2,-2,2,2,-2,4,4,-4,-4,-2,-2,2,2,-2,4,4,4,-2};
    int arraySize = 20;

    int counter = 0;
    //r1.assignMatrix(c1,c2,c3,c4);
   // r1.draw();
   // r1.rotateRectangle();
   // r1.draw();


    while ( counter < arraySize  ){
        r1.assignMatrix( r1.getTopLeft() , r1.getBottomLeft() , r1.getTopRight() , r1.getBottomRight() );
        r1.scale(arr[counter]);
        r1.draw();
        counter++;
        Sleep(500);  // pauses program for 500 miliseconds
        system("cls"); //clears the screen
        gotoxy(0,0); // moves the cursor to [0][0]


    }


    cout << endl;
    cout << "Top Left : " << r1.getTopLeft().getRow() << "-" << r1.getTopLeft().getColumn()<< endl;
    cout << "Bottom left :" << r1.getBottomLeft().getRow()  << "-" << r1.getBottomLeft().getColumn() << endl;
    cout << "Top right : " << r1.getTopRight().getRow() << "-" << r1.getTopRight().getColumn() << endl;
    cout << "Bottom right : " << r1.getBottomRight().getRow() << "-" << r1.getBottomRight().getColumn() << endl;
    cout << "Length : " << r1.getLength() << " Width : " << r1.getWidth() << endl;
    cout << "(" << r1.getTopLeft().getX() << "," << r1.getTopLeft().getY() << ")"  << endl;
    cout << "(" <<r1.getBottomLeft().getX() << "," << r1.getBottomLeft().getY() << ")"  << endl;
    cout << "(" << r1.getTopRight().getX() << "," << r1.getTopRight().getY() << ")"  << endl;
    cout << "(" << r1.getBottomRight().getX() << "," << r1.getBottomRight().getY() << ")"  << endl;

}
