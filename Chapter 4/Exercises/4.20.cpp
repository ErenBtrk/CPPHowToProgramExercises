#include <iostream>

using namespace std;

int main(){
    // initializing variables in declarations
    unsigned int passes = 0; // number of passes
    unsigned int failures = 0; // number of failures
    unsigned int studentCounter = 1; // student counter

     // process 10 students using counter-controlled loop
     while ( studentCounter <= 10 )
     {
         // prompt user for input and obtain value from user
         cout << "Enter " << studentCounter << ".result (1 = pass , 2  = fail) : " ;
         int result = 0; // one exam result (1 = pass, 2 = fail)
         cin >> result; // input result

         // if...else nested in while
         if ( result == 1 ) // if result is 1,
         passes = passes + 1; // increment passes;
         else if( result == 2) // else result is not 1, so
         failures = failures + 1; // increment failures
         else{
            while( result != 1 &&  result !=2){
                cout << "Please enter a valid result (1 or 2) : " << endl;
                cin >> result;
            }
            if ( result == 1 ) // if result is 1,
            passes = passes + 1; // increment passes;
            else if( result == 2) // else result is not 1, so
            failures = failures + 1; // increment failures

         }

         // increment studentCounter so loop eventually terminates
         studentCounter = studentCounter + 1;
         } // end while

        // termination phase; display number of passes and failures
        cout << "Passed " << passes << "\nFailed " << failures << endl;

        // determine whether more than eight students passed
        if ( passes > 8 )
        cout << "Bonus to instructor!" << endl;

            return 0;
        } // end main





