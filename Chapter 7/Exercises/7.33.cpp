/* Exercise 7.25 Solution */
/* This solution assumes that there is only one */
/* entrance and one exit for a given maze, and  */
/* these are the only two zeroes on the borders.*/
#include <stdio.h>
#include <stdlib.h>

#define DOWN  0   /* move down  */
#define RIGHT 1   /* move right */
#define UP    2   /* move up    */
#define LEFT  3   /* move left  */

#define X_START 2
#define Y_START 0

void mazeTraversal( char [][ 12 ], int, int, int );
void printMaze( const char[][ 12 ] );
int validMove( const char [][ 12 ], int, int );
int coordsAreEdge( int, int );

int main()
{
   char maze[ 12 ][ 12 ] =
   { { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
   { '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
   { '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
   { '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
   { '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
   { '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
   { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
   { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
   { '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
   { '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
   { '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
   { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' } };

   mazeTraversal( maze, X_START, Y_START, RIGHT );

   return 0;
}

/* Assume that there is exactly 1 entrance and exactly 1 exit to the maze. */
void mazeTraversal( char maze[ 12 ][ 12 ], int xCoord, int yCoord, int direction )
{
   static int flag = 0;

   maze[ xCoord ][ yCoord ] = 'O';
   printMaze( maze );

   if ( coordsAreEdge( xCoord, yCoord ) && xCoord != X_START &&
       yCoord != Y_START ) {
      printf( "\nMaze successfully exited!\n\n" );
      return;   /* maze is complete */
   }
   else if ( xCoord == X_START && yCoord == Y_START && flag == 1 ) {
      printf( "\nArrived back at the starting location.\n\n" );
      return;
   }
   else {
      int move, count;

      flag = 1;

      for ( move = direction, count = 0; count < 4; ++count, ++move, move %= 4 )
         switch( move ) {
            case DOWN:
               if ( validMove( maze, xCoord + 1, yCoord ) ) {  /* move down  */
                  mazeTraversal( maze, xCoord + 1, yCoord, LEFT );
                  return;
               }
               break;
            case RIGHT:
               if ( validMove( maze, xCoord, yCoord + 1 ) ) {  /* move right */
                  mazeTraversal( maze, xCoord, yCoord + 1, DOWN );
                  return;
               }
               break;
            case UP:
               if ( validMove( maze, xCoord - 1, yCoord ) ) {  /* move up    */
                  mazeTraversal( maze, xCoord - 1, yCoord, RIGHT );
                  return;
               }
               break;
            case LEFT:
               if ( validMove( maze, xCoord, yCoord - 1 ) ) {  /* move left  */
                  mazeTraversal( maze, xCoord, yCoord - 1, UP );
                  return;
               }
               break;
         }
   }
}

int validMove( const char maze[][ 12 ], int r, int c )
{
   return ( r >= 0 && r <= 11 && c >= 0 && c <= 11 && maze[ r ][ c ] != '#' );
}

int coordsAreEdge( int x, int y )
{
   if ( ( x == 0 || x == 11 ) && ( y >= 0 && y <= 11 ) )
      return 1;
   else if ( ( y == 0 || y == 11 ) && ( x >= 0 && x <= 11 ) )
      return 1;
   else
      return 0;
}

void printMaze( const char maze[][ 12 ] )
{
   int x, y;

   for ( x = 0; x < 12; x++ ) {

      for ( y = 0; y < 12; y++ )

         printf( "%c ", maze[ x ][ y ] );

      printf( "\n" );

   }

   printf( "\nHit return to see next move" );
   getchar();
}
