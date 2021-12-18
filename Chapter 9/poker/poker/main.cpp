#include <iostream>
#include "dealer.h"

int main()
{


	DeckOfCards deck;
	Dealer dealer(deck);

	dealer.getCurrentHand().print();
	std::cout << "------------------\n";
	dealer.upgradeCurrentHand();
	dealer.getCurrentHand().print();

	return 0;
}
