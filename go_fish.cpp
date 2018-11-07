// FILE: card_demo.cpp
// This is a small demonstration program showing how the Card and Deck classes are used.
#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include "card.h"
#include "player.h"
#include "deck.h"

using namespace std;


// PROTOTYPES for functions used by this demonstration program:
void dealHand(Deck &d, Player &p, int numCards);

int main( )
{
    int numCards = 7;

    Player p1("Joe");
    Player p2("Jane");
    Deck d;  //create a deck of cards
    d.shuffle();
    dealHand(d, p1, numCards);
    dealHand(d, p2, numCards);
    cout << p1.getName() <<" has : " << p1.showHand() << endl;
    cout << p2.getName() <<" has : " << p2.showHand() << endl;
    Card currentCard = p1.chooseCardFromHand();
    cout << p1.getName() << " asks 'Do you have any " << currentCard.getRank() << "'s'" << endl;

    if (p2.sameRankInHand(currentCard)){
        cout << p2.getName() << " says 'Yes. I have a " << currentCard.getRank() << "'" << endl;

    }else {
        cout << p2.getName() << " says 'No. Go Fish'" << endl;
    }
    return EXIT_SUCCESS;
}



void dealHand(Deck &d, Player &p, int numCards)
{
    for (int i=0; i < numCards; i++)
        p.addCard(d.dealCard());
}