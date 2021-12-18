#include <iostream>
#include <time.h>
#include "deckOfCards.h"
#include "cardDealer.h"
#include "player.h"
#include <ctype.h>

using namespace std;

int main()
{
    srand(time(NULL));
    DeckOfCards deck;
    CardDealer cd(deck);
    cout << "COMPUTER'S HAND : \n**************" << endl;
    cd.displayCardDealersHand();
    cd.displayCardDealersHandValues();
    cout << "Computer's hand  rank = ";
    cd.toString();




    cout << endl << endl;
    Player p1;
    int cardNo = 0;
    while( deck.moreCards() && cardNo < 5 ){
        Card c = deck.dealCard();
        p1.setCard(c);
        cardNo++;
    }
    cout << "YOUR HAND:\n**************" << endl;
    p1.displayCards();
    p1.displaySortedCards();
    p1.displayValues();

    int counter = 0;
    cout << "Your hand's rank = " << p1.toString() << endl << endl;
    while( counter != 3 ){
        char choice;
        cout << "Enter (y) to draw card\nEnter (n) to finish the round : " ;
        cin >> choice;
            while( toupper(choice) != 'Y' && toupper(choice) != 'N' ){
                cout << "Enter (y) or (n) : " ;
                cin >> choice;
            }
            if( toupper(choice) == 'N' ){
                break;
            }
            if( toupper(choice) == 'Y' ){
                Card c2 = deck.dealCard();
                p1.drawCard(c2);
                cout << endl << "You drew the card -> "  << c2.toString() << endl << endl;
                cout << "Your hand is updated : " << endl;
                p1.displayCards();
                p1.displaySortedCards();
                p1.displayValues();


                size_t number;
                cout << "Enter  number of card that you want to drop : " << endl;
                cin >> number;
                while( number < 1 || number > 6 ){
                    cout << "Enter a card number between 1-6" << endl;
                    cin >> number;
                }
                p1.dropCard(number-1);
                cout << "Your hand = " << endl;
                p1.displayCards();
                p1.displaySortedCards();
                p1.displayValues();
                 cout << "Your updated rank =  "<< p1.toString() << endl << endl << endl;
                counter++;
            }
    }


    cd.drawCard();
    cout << endl;
    cd.drawCard();
    cout << endl;
    cd.drawCard();
    cout << endl << endl;
    cd.findBestHand();

    cout << "COMPUTER'S UPDATED HAND : " << endl;
    cd.displayCardDealersHand();
    cout << endl << endl;
    cout << "Computer's updated rank : " ;
    cd.toString();
    cout << endl << endl;
    cout << "Your updated rank =  "<< p1.toString() << endl << endl << endl;

    Player cdn = cd.getCardDealersHand();
    if( p1.compareHands(cdn) == 1 ){
        cout << "YOU ARE THE WINNER OF THIS ROUND !!!!!!!" << endl;
    }
    else{
        cout << "COMPUTER WINS THIS ROUND !!!!!!" << endl;
    }





}
